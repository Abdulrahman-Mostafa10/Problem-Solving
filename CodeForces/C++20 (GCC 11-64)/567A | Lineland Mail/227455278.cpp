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
  cin>>n;
  vector<ll> v(n);
  for(int i =0;i<n;++i)
      cin>>v[i];
  vector<pii>dist(n);
    for (int i = 0; i < v.size(); ++i) {
        if(!i)  dist[i].fi=v[i+1]-v[i];
        else if(i==v.size()-1) dist[i].fi=v[i]-v[i-1];
        else dist[i].fi=min(v[i]-v[i-1],v[i+1]-v[i]);
        dist[i].se=max(v[v.size()-1]-v[i],v[i]-v[0]);
    }
    for(auto& it:dist)
        cout<<it.fi<<" "<<it.se<<endl;
}
 
signed main()
{
    int t = 1;
    //cin >> t;
    Bedo();
    while (t--)
        solve();
}