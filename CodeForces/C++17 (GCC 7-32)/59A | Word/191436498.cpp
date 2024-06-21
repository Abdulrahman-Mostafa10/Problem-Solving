#include<iostream>
using namespace std;
int main()
{
 string s;
 int low = 0, up = 0;
 cin >> s;
 for (int i = 0; i < s.size(); i++)
 {
  if (s[i] == tolower(s[i]))
   low++;
  else
   up++;
 }
 if (low >= up)
  for (int i = 0; i < s.size(); i++)
  {
   cout << (char)tolower(s[i]);
  }
 else
  for (int i = 0; i < s.size(); i++)
  {
   cout << (char)toupper(s[i]);
  }
 return 0;
}