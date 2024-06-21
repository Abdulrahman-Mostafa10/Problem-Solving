#include<bits/stdc++.h>
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
int combination(vi& v,int n, int t,int& maxi)
{
 if (v.size() == n)
 {
  int sum = 0;
  for (int i = v.size() - 1, j = 1; i >= 0; i--, j *= 10)
   sum += v[i] * j;
  if (!(sum % t))
  {
   maxi = max(sum, maxi);
   return sum;
  }
  return -1;
 }
 int x = -1;
 for (int i = 1; i <= 9; i++)
 {
  v.pp(i);
  x = max(combination(v, n, t,maxi), x);
  v.pop_back();
 }
 return x;
}
void solve()
{
 int n;
    cin>>n;
    unordered_multiset<string>setty;
    string s,ch1,ch2;
    for (size_t i = 0; i < n; i++)
    {
       cin>>s;
       setty.insert(s);
       if(!i) ch1=s;
       else if(s!=ch1) ch2=s;
    }
    if(setty.count(ch1) > setty.count(ch2)) cout<<ch1;
    else cout<<ch2;
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}