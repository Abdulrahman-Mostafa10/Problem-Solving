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
 int n,s=0,d=0;
 cin >> n;
 bool sturn = 1, dturn = 0;
 vector<int>v(n);
 for (size_t i = 0; i < v.size(); i++)
  cin >> v[i];
 int* p1 = &v[0];
 int* p2 = &v[n-1];
 while (p1 <= p2)
 {
  if (sturn)
  {
   if (*p1 >= *p2)
   {
    s += *p1;
    p1++;
   }
   else
   {
    s += *p2;
    p2--;
   }
  }
  else
  {
   if (*p1 >= *p2)
   {
    d += *p1;
    p1++;
   }
   else
   {
    d+= *p2;
    p2--;
   }
 
  }
  sturn ^= 1;
  dturn ^= 1;
 }
 cout << s << " " << d;
}
 
signed main()
{
 int t = 1;
 Bedo();
 while (t--)
  solve();
}