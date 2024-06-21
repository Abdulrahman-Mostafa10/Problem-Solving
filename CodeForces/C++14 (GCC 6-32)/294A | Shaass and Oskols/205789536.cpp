#include<iostream>
#include<vector>
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
#define mem(arrr, xx) memset(arrr,xx,sizeof arrr)
#define PI acos(-1)
//#define int long long
#define debug(x) cout << (#x) << " = " << x << endl
 
void Bedo() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
}
void solve()
{
 vi v; int n, x, y, z;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> x;
  v.push_back(x);
 }
 cin >> z;
 while (z--)
 {
  cin >> x >> y;
  if (x > 1 && x < v.size())
  {
   v[x-2] += y-1;
   v[x]+= v[x-1] - y;
   v[x - 1] = 0;
  }
  else
  {
   if (x == 1)
    v[x] += v[x - 1] - y;
   else
    v[x - 2] += y - 1;
   v[x-1] = 0;
  }
 }
 for (int i = 0; i < v.size(); i++)
 {
  cout << v[i] << endl;
 }
}
 
signed main()
{
 int t = 1;
 Bedo();
 while (t--)
  solve();
}