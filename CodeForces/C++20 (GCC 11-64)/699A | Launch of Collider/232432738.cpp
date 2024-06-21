#include<bits/stdc++.h>
#include <conio.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
 #ifdef Clion
     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
 #endif
 
 
int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};
 
void Bedo() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
void solve()
{
  int n;
  ll time=0;
  cin>>n;
  vector<ll> v(n);
  vector<char> pos(n);
  vector<int> loc;
  for (size_t i = 0; i < n; i++) cin>>pos[i];
  for (size_t i = 0; i < n; i++) cin>>v[i];
 
  bool f=0;
  for (int i = 0; i < pos.size()-1; i++)
  {
    if(pos[i]=='R' && pos[i+1]=='L')
    {
        loc.pp(i);
        loc.pp(i+1);
        f=1;
    }
  }
 
  if(f)
  {
    ll mini=LONG_LONG_MAX;
    for (size_t i = 0; i < loc.size()-1; i+=2)
        mini=min(mini,(ll)(v[loc[i+1]] - v[loc[i]])/2);
    cout<<mini;
  }
  else
  cout<<-1;
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}