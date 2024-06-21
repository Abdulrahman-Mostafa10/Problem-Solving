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
 string s;
 cin >> s;
 vector<char>v;
 for (size_t i = 0; i < s.size(); i++)
  if (isdigit(s[i]))
   v.pp(s[i]);
 sort(v.begin(), v.end());
 for (auto it = v.begin(); it != v.end(); ++it)
 {
  cout << *it;
  if (it != v.end() - 1)
   cout << "+";
 }
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}