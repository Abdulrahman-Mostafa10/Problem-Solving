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
 vector<string> v(4);
 int n = 0, o = 0;
 for (size_t i = 0; i < 4; i++)
  cin >> v[i];
 
 for (size_t i = 0; i < 3; i++)
 {
  for (size_t j = i + 1; j < 4; j++)
  {
   if (v[i] == v[j]) o++;
   if (o > 3) break;
  }
  if (o > 3)break;
 }
    if(o>2)
    o--;
 cout << o;
}
int main()
{
 int t = 1;
 while (t--)
  solve();
 return 0;
}