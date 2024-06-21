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
 
vi ans;
void func(vi &v, int i = 0)
{
    if (i == v.size())
    {
        int s = 0;
        for (auto &it : ans)
            s += it;
        if (!s)
        {
            for (size_t i = 0; i < ans.size(); i++)
            {
                cout << ans[i];
                if (i != ans.size() - 1)
                    cout << endl;
            }
            exit(0);
        }
        return;
    }
    if (v[i] % 2 == 0 || v[i] == 0)
    {
        ans.pp(v[i] / 2);
        func(v, i + 1);
        ans.pop_back();
        return;
    }
    ans.pp(v[i] / 2);
    func(v, i + 1);
    ans.pop_back();
    if (v[i] < 0)
        ans.pp((v[i] - 1) / 2);
    else
        ans.pp((v[i] + 1) / 2);
    func(v, i + 1);
    ans.pop_back();
}
void func2(vi &v)
{
    int magic = 0, c = 0;
    bool first = 1;
    for (auto &it : v)
    {
        // if (it < 0 && abs(it) % 2 && first)
        // {
        //     magic = it / 2 - 1;
        //     ans.pp(magic);
        //     first = 0;
        // }
        // else
        c += it / 2;
        ans.pp(it / 2);
    }
    // for (auto it : ans)
    //     cout << it << " ";
    if (c == -1)
    {
        int i = 0;
        for (auto it = ans.begin(); it != ans.end(); it++, i++)
        {
            if (*it < 0 && abs(v[i]) % 2)
            {
                ans[i]++;
                break;
            }
            return;
        }
    }
    if (c == 1)
    {
        int i = 0;
        for (auto it = ans.begin(); it != ans.end(); it++, i++)
        {
            if (*it < 0 && abs(v[i]) % 2)
            {
                ans[i]--;
                break;
            }
        }
        return;
    }
}
void solve()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
}
 
signed main()
{
    int t = 1;
    Bedo();
    while (t--)
        solve();
}