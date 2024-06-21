#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<set>
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
 int c = 0;
 set<char> myset;
 getline(cin, s);
 for (size_t i = 1; i < s.size(); i++)
  if (isalpha(s[i]))
   myset.insert(s[i]);
 cout << myset.size();
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}