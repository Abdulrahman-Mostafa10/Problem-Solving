#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 char* s1, * s2;
 s1 = new char[100];
 s2 = new char[100];
 cin >> s1 >> s2;
 for (int i = 0; i < strlen(s1); i++)
 {
  s1[i] = tolower(s1[i]);
  s2[i] = tolower(s2[i]);
 }
 cout << (strcmp(s1, s2));
 delete[]s1;
 delete[]s2;
 return 0;
}