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
 
bool generateNextPrime(int x,int y)
{
    bool f=0;
    for(int i=x+1;i<50;++i)
    {
         for(int j=2;j<i;++j)
                if(!(i%j))
                {
                    f=1;
                    break;
                }
        if(!f && i==y) return true;
        else if(!f) return false;
        else f=0;
    }
    return false;
}
 
void solve()
{
  ll n,m,x,ways=0,temp;
  cin>>n>>m;
  x=m/5;
  temp=n;
  while(n%5)
    {
        ways+=x;
        n--;
    }
    for(int i=5;i<=temp;i+=5)
    ways+= 5*x-1;
 
    x++;
    for (int i = 1; i<=temp; i++)
    {
        if(!((i-1)%5) && i!=1)
        x++;
         if(5*x-i <=m)
         ways++;
    }
    cout<<ways;
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}