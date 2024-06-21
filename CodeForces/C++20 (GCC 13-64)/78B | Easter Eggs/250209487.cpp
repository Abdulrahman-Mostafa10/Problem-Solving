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
    map<char, pii> mp;
    mp['R'] = {0, 0};
    mp['O'] = {1, 1};
    mp['Y'] = {2, 2};
    mp['G'] = {3, 3};
    mp['B'] = {4, 4};
    mp['I'] = {5, 5};
    mp['V'] = {6, 6};
    int n;
    std::cin >> n;
    if (n == 7)
    {
        cout << "ROYGBIV";
        return;
    }
    int j = 0;
    string s = "ROYGBIV";
    for (int i = 7; i < n; i++)
    {
        char c = s[j];
        while (j < 7 && (n - i + mp[c].fi + 1 <= 4 || i - mp[c].se + 1 <= 4))
            c = s[++j];
        j = 0;
        mp[c].se = i;
        s.pp(c);
    }
    cout << s;
}
signed main()
{
    int t = 1;
    // cin >> t;
    Bedo();
    while (t--)
        solve();
}