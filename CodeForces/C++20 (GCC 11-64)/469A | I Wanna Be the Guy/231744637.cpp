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
void solve()
{
   int n,p,q;
   bool flag=false;
   cin>>n>>p;
   vector<bool> occ(n+1,false);
   vi x(p);
   for (size_t i = 0; i < p; i++)
         cin>>x[i];
    sort(x.begin(),x.end());
    cin>>q;
    vi y(q);
    for (size_t i = 0; i < q; i++)
         cin>>y[i];
    sort(y.begin(),y.end()); 
    for (size_t i = 0; i < x.size(); i++)
        if(!occ[x[i]])
        occ[x[i]]=true;
    for (size_t i = 0; i < y.size(); i++)
        if(!occ[y[i]])
        occ[y[i]]=true;
    for (size_t i = 1; i < occ.size(); i++)
        if(!occ[i])
        {
            flag=true;
            break;
        }
    if(!flag)
    cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}
signed main()
{
    int t=1;
    Bedo();
    //cin>>t;
    while(t--)
    solve();
}
 