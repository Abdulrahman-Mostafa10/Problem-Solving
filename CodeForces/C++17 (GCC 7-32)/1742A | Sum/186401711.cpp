#include<iostream>
using namespace std;
int main()
{
 int n, a, b, c;
 cin >> n;
 bool flag = true;
 for (int i = 1; i <= n; i++)
 {
  cin >> a >> b >> c;
  if ((a + b) == c)
  {
   cout << "yes\n";
  }
  else if ((a + c) == b)
  {
   cout << "yes\n";
  }
  else if ((c + b) == a)
  {
   cout << "yes\n";
  }
  else
   cout << "no\n";
 }
 return 0;
}