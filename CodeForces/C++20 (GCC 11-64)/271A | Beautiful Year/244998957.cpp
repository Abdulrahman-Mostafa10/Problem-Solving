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
 
void solve()
{
    int n1 = 10, n2 = 100, n3 = 1000, n4 = 10000, x, a, b, c, d;
    cin >> x;
    while (true)
    {
 
        x++, a = (x / 1000) % 10, b = (x / 100) % 10, c = (x / 10) % 10, d = x % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << x << endl;
            return;
        }
    }
}
 
signed main()
{
    int t = 1;
    Bedo();
    while (t--)
        solve();
}