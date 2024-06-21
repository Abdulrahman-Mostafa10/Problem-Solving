#include<bits/stdc++.h>
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
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define cntOnes(x) __builtin_popcount(x)
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(0);
#define INFLL 1e18
#define INF 1e9
#define MOD 1000000007
#define MOD1 998244353
#define MAXN 9005000
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
 
int di1[]={1,1,1};
int dj1[]={0,-1,1};
 
int di2[]={-1,1,-1};
int dj2[]={0,-1,1};
 
int n,m;
// did x1,y1 can eat x2,y2?
int go1(int x1,int y1,int x2,int y2){
    int l1=y1,r1=y1;
    int l2=y2,r2=y2;
    int turn=1;
    while(x1<x2){
        if(turn){
            x1++;
            l1--;
            r1++;
            l1=max(l1,1);
            r1=min(r1,m);
        }else{
            x2--;
            l2--;
            r2++;
            l2=max(l2,1);
            r2=min(r2,m);
        }
        if(x1==x2){
            if(l1<=l2&&r1>=r2)return 0;
            return 1;
        }
        turn^=1;
    }
    return 1;
}
// did x2,y2 can eat x1,y1?
 
int go2(int x1,int y1,int x2,int y2){
    int l1=y1,r1=y1;
    int l2=y2,r2=y2;
    int turn=1;
    while(x1<x2){
        if(turn){
            x1++;
            l1--;
            r1++;
            l1=max(l1,1);
            r1=min(r1,m);
        }else{
            x2--;
            l2--;
            r2++;
            l2=max(l2,1);
            r2=min(r2,m);
        }
        if(x1==x2){
            if(l2<=l1&&r2>=r1)return 0;
            return 1;
        }
        turn^=1;
    }
    return 1;
}
void solve(int tst) {
    int  x1, y1, x2, y2;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    if(x1>=x2){
        cout<<"Draw";
        return;
    }
    int xdiff=abs(x1-x2);
 
    if(xdiff&1){
        //bob try to draw
        if(go1(x1,y1,x2,y2)){
            cout<<"Draw";
        }else
            cout<<"Alice";
    }else {
        // alice try to draw
        if(go2(x1,y1,x2,y2)){
            cout<<"Draw";
        }else
            cout<<"Bob";
    }
 
}
 
int main() {
    FASTIO;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    lp(i, t) {
        solve(i + 1);
        cout << "\n";
    }
}