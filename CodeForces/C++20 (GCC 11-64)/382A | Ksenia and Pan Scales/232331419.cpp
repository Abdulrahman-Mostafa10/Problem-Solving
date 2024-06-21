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
  string s1,s2,s3,s4;
  cin>>s1>>s2;
  int i=0;
  while(s1[i]!='|')
    s3.pp(s1[i++]);
    ++i;
    while(i<s1.size())
    s4.pp(s1[i++]);
 
    // for the left substring ->
    int how_many1=-1,how_many2=-1;
    bool flag1=false,flag2=false;
    for (size_t j = 1; j <= s2.size(); j++)
    {
            if(s3.size() + j == s4.size()+s2.size()-j)
            {
                how_many1=j;
                flag1=1;
                break;
            }
    }
    if(flag1)
    {
        for (size_t i = 0; i <s2.size(); i++)
        {
            if(i<how_many1) s3.pp(s2[i]);
            else s4.pp(s2[i]);
        }
        cout<<s3+"|"+s4;
        return ;
    }
    else 
    {
         for (size_t j = 1; j <= s2.size(); j++)
        {
            if(s4.size() + j == s3.size()+s2.size()-j)
            {
                how_many2=j;
                flag2=1;
                break;
            }
        }
        if(flag2)
        {
        for (size_t i = 0; i <s2.size(); i++)
        {
            if(i<how_many1) s4.pp(s2[i]);
            else s3.pp(s2[i]);
        }
            cout<<s3+"|"+s4;
            return ;
         }
        else cout<<"Impossible";
    }
  
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}