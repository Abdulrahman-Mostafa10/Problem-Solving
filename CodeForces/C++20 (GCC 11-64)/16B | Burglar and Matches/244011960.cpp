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
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int maxBurglar(const vector<pii> &mp, int n)
{
    auto it = mp.begin();
    int sum = 0;
    do
    {
        if (it->se < n)
        {
            sum += it->fi * it->se;
            n -= it->se;
        }
        else
        {
            sum += n * it->fi;
            n = 0;
        }
 
        it++;
    } while (n > 0 && it != mp.end());
    return sum;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pii> v(m);
    for (int i = 0; i < m; ++i)
        cin >> v[i].se >> v[i].fi;
    sort(all(v), greater<pii>());
    cout << maxBurglar(v, n);
}
 
signed main()
{
    int t = 1;
    Bedo();
    while (t--)
        solve();
}