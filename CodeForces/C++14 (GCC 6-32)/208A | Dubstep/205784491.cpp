#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s,res;
 cin >> s;
 for (int i = 0; i < s.size(); i++)
 {
  if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
   i += 2;
  else
  {
   res.push_back(s[i]);
   if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
    res.push_back(' ');
  }
 }
 cout << res;
 return 0;
}