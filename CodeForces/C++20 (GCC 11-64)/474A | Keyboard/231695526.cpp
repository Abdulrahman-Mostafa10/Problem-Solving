#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<iterator>
#include<climits>
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
 char dir;
 int d;
 cin >> dir;
 if (dir == 'R') d = -1;
 else d = 1;
 string s, res, keyboard = "zxcvbnm,./asdfghjkl;qwertyuiop";
 cin >> s;
 for (size_t i = 0; i < s.size(); i++)
  res.pp(keyboard[keyboard.find(s[i]) + d]);
 cout << res;
}
signed main()
{
 int t = 1;
 Bedo();
 //cin>>t;
 while (t--)
  solve();
 
}
 