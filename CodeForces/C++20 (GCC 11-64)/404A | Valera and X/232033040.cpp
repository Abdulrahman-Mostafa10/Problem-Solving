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
void solve()
{
    int n;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    set<pair<int,int>> pos;
    bool c=false;
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            cin>>v[i][j];
    vector<char> corners ;
    for(int i=0;i<n;++i)
       { 
        corners.pp(v[i][i]);
        pos.insert({i,i});
       }
    for(int i=0,j=n-1;i<n;++i,--j)
        if(i!=j)
        {
            corners.pp(v[i][j]);
            pos.insert({i,j});
        }
 
    char pivot=v[0][1];
    for (size_t i = 0; i < corners.size(); i++)
    for (size_t j = 0; j < corners.size(); j++)
    {
        if((i!=j && corners[i]!=corners[j]) || pivot==corners[i] || pivot==corners[j])
        {
            cout<<"NO";
            return;
        }
    }
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if(pos.count({i,j})==0)
                {
                    if(v[i][j]!=pivot || v[i][j]==corners[0])
                    {
                        cout<<"NO";
                        return;
                    }
                }
            }
        }
         cout<<"YES";
 
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}