#include <bits/stdc++.h>
#include <conio.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define fi first
#define se second
#define pp push_back
#define all(x) (x).begin(), (x).end()
#define Ones(n) __builtin_popcount(n)
#define endl '\n'
#define mem(arrr, xx) memset(arrr, xx, sizeof arrr)
#define PI acos(-1)
// #define int long long
#define debug(x) cout << (#x) << " = " << x << endl
#ifdef Clion
freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
 
int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};
 
void Bedo()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout.tie(nullptr);
}
void solve()
{
    // int n, m, l, r, mid, i, petya, vasya;
    // cin >> n;
    // vi v(n);
    // for (auto &it : v)
    //     cin >> it;
    // cin >> m;
    // vi q(m);
    // for (auto &it : q)
    //     cin >> it;
    // sort(all(v));
    // l = 0, r = n - 1, i = 0, petya = 0, vasya = 0;
    // while (i < m)
    // {
    //     while (l <= r)
    //     {
    //         mid = l + (r - 1) / 2;
    //         if (v[mid] == q[i])
    //             break;
    //         else if (v[mid] < q[i])
    //             l = mid + 1;
    //         else
    //             r = mid - 1;
    //     }
    //     ++i, l = 0, r = n - 1;
    //     vasya += mid + 1, petya += n - mid;
    // }
    // cout << vasya << " " << petya;
    multimap<int, int> myTree;
    int n, m;
    ll v = 0, p = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myTree.insert({x, i});
    }
    cin >> m;
    vector<pll> dp(m + 1, {0, 0});
    for (int i = 0; i < m; ++i)
    {
        if (dp[i].fi && dp[i].se)
            v += dp[i].fi, p += dp[i].se;
        else
        {
            ll x;
            cin >> x;
            auto it = myTree.find(x);
            if (it != myTree.end())
            {
                dp[i].fi = v += it->se + 1;
                dp[i].se = p += n - it->se;
            }
        }
    }
    cout << v << " " << p;
}
signed main()
{
    int t = 1;
    // cin >> t;
    Bedo();
    while (t--)
        solve();
}