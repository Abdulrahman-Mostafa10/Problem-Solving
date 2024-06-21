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
 int n;
 cin >> n;
 vector<int>v(n), sub(n);
 for (int i = 0; i < n; ++i)
  cin >> v[i];
 if (n == 1)
  cout << v[n - 1];
 else {
  for (int i = 0; i < n; ++i) {
   auto it = find(v.begin(), v.end(), i + 1);
   if (it != v.end() && *it != v[i]) {
    sub[i] = it - v.begin() + 1;
   }
   else if (*it == v[i])
    sub[i] = v[i];
   else continue;
  }
  for (int i = 0; i < n; ++i) {
   cout << sub[i] << " ";
  }
 }
}
 
signed main()
{
 int t = 1;
 //cin >> t;
 Bedo();
 while (t--)
  solve();
}