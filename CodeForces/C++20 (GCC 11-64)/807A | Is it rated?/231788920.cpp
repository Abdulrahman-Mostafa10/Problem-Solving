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
bool issorted(const vi&v)
{
    for (int i = 0; i < v.size()-1; i++)
     {
         if(v[i]>v[i+1])
        return false;
    }
    
   return true; 
}
bool issorted_des(const vi&v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
         if(v[i]<v[i+1])
        return false;
    }
    
   return true; 
}
 
 
void solve()
{
   int n;
   cin>>n;
   multimap<int,int> mappy;
   pii pairy;
    vi vse ;
   for (size_t i = 0; i < n; i++)
   {
    cin>>pairy.fi>>pairy.se;
    mappy.insert(pair<int,int>(pairy.fi,pairy.se));
    vse.pp(pairy.se);
   }
           bool flag=false;
           for (auto it=mappy.begin(); it!=mappy.end(); it++)
             {
                  if(it->fi !=it->se)
               {
                   flag=true;
                   break;
               }
             }
   
           if(flag) 
           cout<<"rated";
   else 
        {
          if(issorted_des(vse)) 
                 cout<<"maybe";
           else 
                 cout<<"unrated";
        }
}
signed main()
{
    int t=1;
    Bedo();
    //cin>>t;
    while(t--)
    solve();
}
 