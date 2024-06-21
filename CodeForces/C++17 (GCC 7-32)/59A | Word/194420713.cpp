#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 int up = 0, low = 0;
 cin >> s;
 for (int i = 0; i < s.size(); i++)
 {
  if (s[i] >= 65 && s[i] <= 90)
   up++;
  else
   low++;
 }
 if (up > low)
  for (int i = 0; i < s.size(); i++)
   cout << (char)toupper(s[i]);
 else
  for (int i = 0; i < s.size(); i++)
   cout << (char)tolower(s[i]);
 
 return 0;
}