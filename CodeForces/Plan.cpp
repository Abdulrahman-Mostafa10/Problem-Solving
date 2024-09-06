#include <bits/stdc++.h>
#include <conio.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#include <boost/dynamic_bitset.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
#define fi first
#define se second
#define pp push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define Ones(n) __builtin_popcount(n)
#define lpato(v) for(auto &it:v)
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)
#define endl '\n'
#define mem(arrr, xx) memset(arrr, xx, sizeof arrr)
#define PI acos(-1)
#define OO 1e6
// #define int long long
#define debug(x) cout << (#x) << " = " << x << endl
// #ifdef Clion
// freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
// #endif

const int mod = 1e9 + 7;
int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};

void Bedo() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout.tie(nullptr);
}

int mpow(int a, int b, int m) {
    int res = 1;
    while (b) {
        if (b & 1) res = 1LL * res * a % m;
        a = 1LL * a * a % m, b /= 2;
    }
    return res;
}

const int N = 1e4 + 10;
int fact[N], invfact[N];

void pre() {
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = 1LL * fact[i - 1] * i % mod;
        invfact[i] = mpow(fact[i], mod - 2, mod);
    }
}

int nCr(int n, int r) {
    if (r > n) return 0;
    return 1LL * fact[n] * invfact[r] % mod * invfact[n - r] % mod;
}

ll fastpow(ll b, ll p) {
    if (!p) return 1;
    ll ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1) ret *= b;
    return ret;
}

ll gcd(ll a, ll b) {
    if (!b)
        return a;
    return gcd(b, a % b);
}

void solve() {
    int n, q, mx = -1, idx;
    cin >> n >> q;
    vi v(n);
    lp(i, n) {
        cin >> v[i];
        if (mx < v[i]) idx = i, mx = v[i];
    }
    while (q--) {
        int k;
        cin >> k;
        bool allow = (idx == n - 1) ? 0 : 1;
        int st = 0, end = (allow) ? idx - 1 : n - 1, mid;
        bool f = 0;
        while (st <= end) {
            mid = st + ((end - st) >> 1);
            if (v[mid] == k) {
                f = 1;
                break;
            } else if (v[mid] > k) end = mid - 1;
            else st = mid + 1;
        }
        if (!f && allow) {
            st = idx, end = n - 1;
            while (st <= end) {
                mid = st + ((end - st) >> 1);
                if (v[mid] == k) {
                    f = 1;
                    break;
                } else if (v[mid] > k) st = mid + 1;
                else end = mid - 1;
            }
        }
        if (!f) cout << "No" << endl;
        else cout << "Yes" << " " << mid + 1 << endl;
    }
}

int main() {
    Bedo();
    int t = 1;
//    pre();
//    cin >> t;
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    while (t--)
        solve();
    return 0;
}
