#include <bits/stdc++.h>
#include <omp.h>
#include <conio.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
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
// #ifdef Clion
// freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
// #endif
 
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
    long long c = 0, res = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        (s[i] == '1') ? c++ : (c) ? res += c + 1
                                  : 0;
    cout << res << endl;
}
void LotsOfCases()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
signed main()
{
    Bedo();
    LotsOfCases();
}