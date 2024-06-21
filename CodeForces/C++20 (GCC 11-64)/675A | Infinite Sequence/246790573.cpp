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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << "YES" << endl;
        return;
    }
    else if (b < a)
    {
        if (c > 0)
        {
            cout << "NO" << endl;
            return;
        }
        double x = (double)(a - b) / c;
        if (x - (int)x == 0)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    else if (b > a)
    {
        if (c < 0)
        {
            cout << "NO" << endl;
            return;
        }
        double x = (double)(b - a) / c;
        if (x - (int)x == 0)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
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