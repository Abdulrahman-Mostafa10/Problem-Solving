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
 int x, y, a, b, z = 6;
 bool f = 0;
 cin >> x >> y;
 x = 7 - max(x, y);
 if (x == 7)
  b = a = 0;
 else
 {
  if (x == z)
   a = b = 1;
  else
  while (!(x % 2) && !(z % 2))
  {
   x /= 2;
   z /= 2;
   f ^= 1;
  }
  if (!f&&x!=5)
  {
   z /= x;
   x /= x;
  }
  a = x;
  b = z;
 }
 cout << a << "/" << b;
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}