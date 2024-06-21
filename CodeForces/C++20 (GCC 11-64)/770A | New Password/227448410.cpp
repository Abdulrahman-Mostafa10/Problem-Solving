#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<unordered_set>
#include<cmath>
#include <utility>
#include<string>
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
//#define mem(arrr, xx) memset(arrr,xx,sizeof arrr)
//#define PI acos(-1)
//#define int long long
#define debug(x) cout << (#x) << " = " << x << endl
void Bedo() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
void solve()
{
    string s = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    int n, k;
    cin >> n >> k;
    vector<char>v(k);
    for (int i = 0; i < k; ++i)
        v[i] = s[i];
    while (n != v.size())
        v.pp(v[v.size() - 2]);
    for (auto& it : v)
        cout << it;
}
 
signed main()
{
    int t = 1;
    //cin >> t;
    Bedo();
    while (t--)
        solve();
}