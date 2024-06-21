#include<iostream>
#include<vector>
#include<stack>
#include<cmath>
#include <utility>
#include<string>
using namespace std;
 
//typedef long long ll;
//typedef long double ld;
//typedef pair<int, int> pii;
//typedef pair<ll, ll> pll;
//typedef vector<int> vi;
 
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
 string s1, s2;
 cin >> s1 >> s2;
 int pos = 0;
 for (int j = 0; j < s2.size() && pos + 1 != s1.size(); j++)
 {
  if (s1[pos] == s2[j])
   pos++;
 }
 cout << pos + 1;
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}