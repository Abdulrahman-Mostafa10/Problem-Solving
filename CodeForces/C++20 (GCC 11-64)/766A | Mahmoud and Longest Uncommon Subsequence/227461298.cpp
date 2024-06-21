#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<unordered_set>
#include<cmath>
#include <utility>
#include<string>
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
string lcs(const string& s, const string& sub)
{
 if (s == " ")
  return " ";
 string seq;
 int i, j = 1;
 i = s.find(sub[0], 0);
 if (i == string::npos)
  return " ";
 else
 {
  seq.pp(s[i++]);
  for (; i < s.size(); ++i)
   if (s[i] == sub[j])
    seq.pp(sub[j++]);
 }
 return seq;
}
 
void solve()
{
 string s1, s2, seq, passed_seq;
 getline(cin, s1);
 getline(cin, s2);
 if (s1 == s2)
  cout << -1;
 else {
  if (s1.size() > s2.size())
  {
   passed_seq = s1;
   seq = lcs(s2, s1);
  }
  else if (s1.size() == s2.size())
  {
   passed_seq = s1;
   seq = lcs(s2, s1);
  }
  else
  {
   passed_seq = s2;
   seq = lcs(s1, s2);
  }
  if (seq == " ")
   cout << max(s1.size(), s2.size());
  else if (seq == passed_seq)
   cout << -1;
  else
   cout << max(max(s2.size(), seq.size()), s1.size());
 }
}
signed main()
{
 int t = 1;
 //cin >> t;
 Bedo();
 while (t--)
  solve();
}