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
 
 
int Partition(vi& v, int start, int end)
 {
      int  i = start - 1;
  for (size_t j = start; j < end; j++)
  {
       if (v[j] < v[end])
    swap(v[++i], v[j]);
  }
  swap(v[++i], v[end]);
  return i;
 }
int countDigit(long long n) 
{ 
    if (n == 0) 
        return 1; 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
void solve()
{
  ll x,r=0;
  cin>>x;
  int size=countDigit(x);
  for (size_t i = 1,j=1; i <=size; i++,j*=10)
   {
    if(x%10 == 9 && ((i==1 && !(x/10))||(size==i && size>1)))
    r+=9*j;
    else
     r+=min(9-(x%10),x%10)*j;
     x/=10;
   }
  cout<<r;
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}