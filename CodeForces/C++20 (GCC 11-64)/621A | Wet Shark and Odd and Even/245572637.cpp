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
 
bool check(int x, int y, int z, int a, int b, int c, int n)
{
    int fir = x + y + z;
    int sec = a + b + c;
 
    while (n-- && (fir > 0 || sec > 0))
    {
        if (fir > 0)
            fir -= 5;
        else if (sec > 0)
            sec -= 10;
    }
    return (fir <= 0 && sec <= 0);
}
void solve()
{
    int t;
    cin >> t;
    vi v(t);
    for (int i = 0; i < t; ++i)
    {
        cin >> v[i];
    }
    sort(all(v));
    int mn = INT_MAX;
    ll sum = 0;
    for (int i = 0; i < t; ++i)
    {
        sum += v[i];
        if (v[i] % 2)
            mn = min(mn, v[i]);
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - mn << endl;
}
signed main()
{
    int t = 1;
    // cin >> t;
    Bedo();
    while (t--)
        solve();
}