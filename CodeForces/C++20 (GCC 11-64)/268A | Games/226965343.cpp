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
    int n,c=0;
    cin>>n;
    std::vector<std::pair<int,int>>v(n);
    for (int i = 0; i < n; i++)
    cin>>v[i].first>>v[i].second;
 
    for (auto it = v.begin(); it!=v.end(); it++)
    for (auto k = it+1; k!=v.end(); k++)
    {
    {
        if(it->first == k->second)
        c++;
        if(it->second == k->first)
        c++;
    }
    }
    cout<<c;
}
int main()
{
    int t=1;
    while(t--)
    solve();
    return 0;
}