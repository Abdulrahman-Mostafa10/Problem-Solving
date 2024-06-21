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
    int n, m, s = 0;
    char c;
    cin >> n >> m >> c;
    vector<vector<char>> v(n, vector<char>(m));
    for (auto &it : v)
        for (auto &i : it)
            cin >> i;
    map<char, bool> mp;
    for (int i = 1; i < 27; ++i)
        mp['A' + i - 1] = false;
    for (int j = 0; j < m; ++j)
        for (int i = 0; i < n; ++i)
        {
            if (v[i][j] == c)
            {
                if (i > 0 && v[i - 1][j] > 41 && v[i - 1][j] < 91 && !mp[v[i - 1][j]] && v[i - 1][j] != c && v[i - 1][j] != '.')
                    mp[v[i - 1][j]] = true, s++;
                if (i < n - 1 && v[i + 1][j] > 41 && v[i + 1][j] < 91 && !mp[v[i + 1][j]] && v[i + 1][j] != c && v[i + 1][j] != '.')
                    mp[v[i + 1][j]] = true, s++;
                if (j > 0 && v[i][j - 1] > 41 && v[i][j - 1] < 91 && !mp[v[i][j - 1]] && v[i][j - 1] != c && v[i][j - 1] != '.')
                    mp[v[i][j - 1]] = true, s++;
                if (j < m - 1 && v[i][j + 1] > 41 && v[i][j + 1] < 91 && !mp[v[i][j + 1]] && v[i][j + 1] != c && v[i][j + 1] != '.')
                    mp[v[i][j + 1]] = true, s++;
            }
        }
    cout << s << endl;
}
signed main()
{
    int t = 1;
    // cin >> t;
    Bedo();
    while (t--)
        solve();
}