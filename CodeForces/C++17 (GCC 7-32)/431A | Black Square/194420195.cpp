#include<iostream>
#include<string>
using namespace std;
int main()
{
 int narr[4], cal = 0;
 for (int i = 0; i < 4; i++)
  cin >> narr[i];
 string s;
 cin >> s;
 for (int i = 0; i < s.size(); i++)
 {
  if (s[i] == '1')
   cal += narr[0];
  else if (s[i] == '2')
   cal += narr[1];
  else if (s[i] == '3')
   cal += narr[2];
  else
   cal += narr[3];
 }
 cout << cal;
 return 0;
}