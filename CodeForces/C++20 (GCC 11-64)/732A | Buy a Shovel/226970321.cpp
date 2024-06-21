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
    int k,r,c=0;
    cin>>k>>r;
    if(k%10 != r && k%10!=0)
      {  for(int i=2;i<10;++i)
        {
            if(!(i*k %10)|| !(i*k %100)||!(i*k %1000)||i*k %10 == r||i*k %100 == r||i*k %100 == r)
            {
                c++;
                break;
            }
            c++;
        }
        }
    cout<<++c;
}
int main()
{
    int t=1;
    while(t--)
    solve();
    return 0;
}