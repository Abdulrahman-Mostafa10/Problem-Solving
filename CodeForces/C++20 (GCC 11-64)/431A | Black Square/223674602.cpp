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
 int arr[4],res=0;
 for (size_t i = 0; i < 4; i++)
  cin >> arr[i];
 string s;
 cin >> s;
 for (size_t i = 0; i < s.size(); i++)
 {
  if (s[i] == '1')
   res += arr[0];
  else if (s[i] == '2')
   res += arr[1];
  else if (s[i] == '3')
   res += arr[2];
  else
   res += arr[3];
 }
 cout << res;
}
 
signed main()
{
 int t = 1;
 Bedo();
 while (t--)
  solve();
}