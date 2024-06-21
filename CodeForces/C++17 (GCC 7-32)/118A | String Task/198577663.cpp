#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
 string s;
 cin >> s;
 vector<char> v;
 for (size_t i = 0; i < s.size(); i++)
 {
  if (s[i] != 'A' && s[i] != 'a' &&
   s[i] != 'e' && s[i] != 'E' &&
   s[i] != 'I' && s[i] != 'i' &&
   s[i] != 'o' && s[i] != 'O' &&
   s[i] != 'u' && s[i] != 'U' &&
   s[i] != 'y' && s[i] != 'Y')
  {
   v.push_back('.');
   v.push_back(tolower(s[i]));
  }
 }
 for (size_t i = 0; i < v.size(); i++)
 {
  cout << v[i];
 }
 return 0;
}