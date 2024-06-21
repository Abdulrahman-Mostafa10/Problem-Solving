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
 int n, free = 0, crime = 0, unt = 0;
 cin >> n;
 vector<int> v(n);
 for (size_t i = 0; i < n; i++)
  cin >> v[i];
 int i = 0;
 for (auto it = v.begin(); it != v.end(); it++)
 {
  if (*it > 0)
  {
   if (!free)
    free = *it;
   else
    free += *it;
  }
  else
   crime = *it;
  if (!free && crime < 0)
  {
   unt++;
   crime++;
  }
  else if (free > 0 && crime < 0)
  {
   free--;
   crime++;
  }
 }
 cout << unt;
}
 
signed main()
{
 int t = 1;
 Bedo();
 while (t--)
  solve();
}