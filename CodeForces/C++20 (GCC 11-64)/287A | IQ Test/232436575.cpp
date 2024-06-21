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
  vector<vector<char>>v(4,vector<char>(4));
  for (size_t i = 0; i < 4; i++)
    for (size_t j = 0; j < 4; j++) 
        cin>>v[i][j];
 
  for (size_t i = 0; i < 3; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
        if((v[i][j]=='#' && v[i][j+1] == '#' && v[i+1][j+1]=='#' &&  v[i+1][j]=='.') || (v[i][j]=='#' && v[i][j+1] == '#' && v[i+1][j+1]=='.' &&  v[i+1][j]=='#') || (v[i][j]=='#' && v[i][j+1] == '.' && v[i+1][j+1]=='#' &&  v[i+1][j]=='#') || (v[i][j]=='.' && v[i][j+1] == '#' && v[i+1][j+1]=='#' &&  v[i+1][j]=='#') || (v[i][j]=='#' && v[i][j+1] == '#' && v[i+1][j+1]=='#' &&  v[i+1][j]=='#') || (v[i][j]=='.' && v[i][j+1] == '.' && v[i+1][j+1]=='.' &&  v[i+1][j]=='.') || (v[i][j]=='.' && v[i][j+1] == '.' && v[i+1][j+1]=='.' &&  v[i+1][j]=='#') || (v[i][j]=='.' && v[i][j+1] == '.' && v[i+1][j+1]=='#' &&  v[i+1][j]=='.') || (v[i][j]=='.' && v[i][j+1] == '#' && v[i+1][j+1]=='.' &&  v[i+1][j]=='.') || (v[i][j]=='#' && v[i][j+1] == '.' && v[i+1][j+1]=='.' &&  v[i+1][j]=='.'))
        {
            cout<<"YES";
            return;
        }
    }
  }
  cout<<"NO";
}
signed main()
{
    int t = 1;
    Bedo();
    //cin>>t;
    while (t--)
        solve();
}