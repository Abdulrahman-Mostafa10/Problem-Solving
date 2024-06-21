#include<iostream>
#include<vector>
#include<stack>
#include<cmath>
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
 int n = 0;
 vector<int> v1(1, -1);
 string s1;
 cin >> s1;
 bool found = 0;
 for (size_t i = 0; i < s1.size(); i++)
 {
  for (size_t k = 0; k < v1.size(); k++)
  {
   if (i == v1[k])
    found = 1;
  }
  if (!found)
  {
   for (size_t j = i + 1; j < s1.size(); j++)
   {
    if (s1[i] == s1[j])
     v1.pp(j);
   }
   n++;
  }
  else
   found = 0;
 }
 if (n % 2)
  cout << "IGNORE HIM!";
 else
  cout << "CHAT WITH HER!";
}
 
signed main()
{
 int t = 1;
 Bedo();
 while (t--)
  solve();
}