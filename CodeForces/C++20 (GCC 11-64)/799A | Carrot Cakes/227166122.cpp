#include<iostream>
#include<vector>
#include<queue>
#include<stack>
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
 int n, t, k, d, r, o1 = 0, o2;
 cin >> n >> t >> k >> d;
 r = (n + k - 1) / k;
 o2 = d;
 for (size_t i = 0; i < r; i++)
 {
  if (o1 <= o2) o1 += t;
  else o2 += t;
 }
 if (max(o1, o2) < r * t)
  cout << "YES";
 else
  cout << "NO";
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}