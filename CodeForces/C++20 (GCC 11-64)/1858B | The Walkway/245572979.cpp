#include<bits/stdc++.h>
#include <unordered_map>
#include<unordered_set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
using namespace std;
#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846  /* pi */
#define ll long long
#define ull unsigned long long
#define ld long double
#define vbe(v) ((v).begin()), ((v).end())
#define sz(v)     ((int)((v).size()))
#define prec(x)    cout<< fixed<< setprecision(x)
#define clr(v, d)   memset(v, d, sizeof(v))
#define rep(i, v)   for(int i=0;i<sz(v);++i)
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define cntOnes(x) __builtin_popcount(x)
#define Bedo ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(0);
#define INFLL 1e18
#define INF 1e9
#define MOD 1000000007
#define MOD1 998244353
#define MAXN 200005
#define EPS 1e-6
 
 
ll GCD(ll a, ll b) { return (a) ? GCD(b % a, a) : b; }
 
ll LCM(ll a, ll b) { return a * b / GCD(a, b); }
 
ll fastpow(ll b, ll p) {
    if (!p) return 1;
    ll ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1) ret *= b;
    return ret;
}
 
const int N = 1e5 + 10;
int n, m, d;
deque<int> arr;
ll dp[N][2];
int vis[N][2];
int vid = 0;
 
ll goDP(int idx = 0, int del = 0) {
    if (idx >= arr.size()) {
        if (del == 0)return INFLL;
        return 0;
    }
    ll &ret = dp[idx][del];
    if (vis[idx][del] == vid)return ret;
    vis[idx][del] = vid;
    ret = INFLL;
    //take
    int currPos = arr[idx] + 1;
    int nextPos = n;
    if (idx != arr.size() - 1) {
        nextPos = arr[idx + 1] - 1;
    }
    int cost = max(0, (nextPos - currPos + 1) / d);
 
    ret = min(ret, cost + 1 + goDP(idx + 1, del));
    // del
    if (!del && idx != arr.size() - 1) {
        currPos = arr[idx] + 1;
        nextPos = n;
        if (idx != arr.size() - 2)
            nextPos = arr[idx + 2] - 1;
 
        cost = max(0, (nextPos - currPos + 1) / d);
        ret = min(ret, cost + 1 + goDP(idx + 2, 1));
    }
    return ret;
}
 
int dp2[N][2];
int vis2[N][2];
int vid2=0;
int build(int idx = 0, int del = 0) {
    if (idx >= arr.size()) {
        return 0;
    }
    ll ret = goDP(idx, del);
    int &ret2=dp2[idx][del];
    if(vis2[idx][del]==vid2)return ret2;
    vis2[idx][del]=vid2;
    ret2=0;
    //take
    int currPos = arr[idx] + 1;
    int nextPos = n;
    if (idx != arr.size() - 1)
        nextPos = arr[idx + 1] - 1;
    int cost = max(0, (nextPos - currPos + 1) / d);
 
    if (ret == cost + 1 + goDP(idx + 1, del)) {
        ret2+=build(idx + 1, del);
    }
    // del
    if (!del && idx != arr.size() - 1) {
        currPos = arr[idx] + 1;
        nextPos = n;
        if (idx != arr.size() - 2)
            nextPos = arr[idx + 2] - 1;
 
        cost = max(0, (nextPos - currPos + 1) / d);
        if (ret == cost + 1 + goDP(idx + 2, 1)) {
 
            ret2+=1+build(idx + 2, 1);
        }
    }
    return ret2;
}
 
void solve(int tst) {
    vid++;
    vid2++;
    cin >> n >> m >> d;
    arr.clear();
    arr.resize(m);
    lp(i, m) {
        cin >> arr[i];
    }
    int addEl = 0;
    ll ansRemFirst = INFLL;
    if (arr[0] != 1) {
        addEl = 1;
        arr.push_front(1);
    } else {
        //try remove one
        ansRemFirst = 1;
        ll cost = max(0, (arr[1] - 2) / d);
        ansRemFirst += cost;
        for (int i = 1; i < arr.size(); i++) {
            int currPos = arr[i] + 1;
            int nextPos = n;
            if (i != arr.size() - 1)nextPos = arr[i + 1] - 1;
            cost = max(0, (nextPos - currPos + 1) / d);
            ansRemFirst += (1 + cost);
        }
 
    }
    ll ans = goDP();
    int num=build();
    if (ansRemFirst == ans) {
        num++;
    }
    cout << ans << " " << num;
}
 
int main() {
    Bedo;
    //freopen("library.in", "r", stdin);
    // init();
    int t = 1;
    cin >> t;
    lp(i, t) {
        solve(i + 1);
        cout << "\n";
    }
}