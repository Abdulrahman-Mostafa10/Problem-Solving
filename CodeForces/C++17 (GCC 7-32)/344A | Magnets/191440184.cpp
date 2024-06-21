#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<string>s;
 int n, count = 1;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  string t;
  cin >> t;
  s.push_back(t);
 }
 if (n > 1)
 {
  for (int i = 0; i < s.size() - 1; i++)
  {
   if (s[i] == s[i + 1])
    continue;
   else count++;
  }
  cout << count;
 }
 else cout << 1;
 return 0;
}