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
 
int minDollars(const vi &v)
{
    int energy = 0, dollars = 0;
    for (int i = 0; i < v.size() - 1; ++i)
    {
        if (energy + v[i] - v[i + 1] < 0)
            dollars += v[i + 1] - v[i] - energy, energy = 0;
        else
            energy += v[i] - v[i + 1];
    }
    return dollars;
}
 
void solve()
{
    int n;
    cin >> n;
    vi v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    cout << minDollars(v);
}
 
signed main()
{
    int t = 1;
    Bedo();
    while (t--)
        solve();
}