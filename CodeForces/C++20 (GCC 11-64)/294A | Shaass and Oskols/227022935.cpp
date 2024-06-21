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
 int n, m;
 cin >> n;
 vector<int> wire(n);
 for (size_t i = 0; i < n; i++)
  cin >> wire[i];
 cin >> m;
 vector<pair<int, int>>v(m);
 for (size_t i = 0; i < m; i++)
  cin >> v[i].first >> v[i].second;
 for (auto it = v.begin(); it != v.end(); it++)
 {
  if (it->first == 1)
   wire[it->first] += wire[it->first - 1] - it->second;
  else if (it->first == n)
   wire[it->first - 2] += it->second - 1;
  else
  {
   wire[it->first] += wire[it->first - 1] - it->second;
   wire[it->first - 2] += it->second - 1;
  }
  wire[it->first - 1] = 0;
 }
 for (size_t i = 0; i < n; i++)
 {
  cout << wire[i];
  if (i != n - 1)
   cout << endl;
 }
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}