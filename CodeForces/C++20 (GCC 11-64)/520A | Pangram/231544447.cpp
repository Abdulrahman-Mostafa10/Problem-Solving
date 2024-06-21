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
    int n;
    bool flag=true;
    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>n;
    vector<char> v(n);
    for (size_t i = 0; i < n; i++) cin>>v[i];
    for (size_t i = 0; i < n; i++) v[i] = tolower(v[i]);
    
    for (size_t i = 0; i < 26 && flag; i++)
    {
        auto it=find(v.begin(),v.end(),alph[i]);
        if(it==v.end()) flag=false;
    }
    if(flag) cout<<"YES";
    else     cout<<"NO";
}
signed main()
{
    int t=1;
    Bedo();
    //cin>>t;
    while(t--)
    solve();
 
}
 