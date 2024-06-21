#include<iostream>
using namespace std;
int main()
{
 int k, r, num = 1, res;
 bool flag = false;
 cin >> k >> r;
 while (!flag)
 {
  res = num * k;
  if (res % 10 == 0 || res % 100 == 0 || res % 1000 == 0)
   flag = true;
  else
  {
   if ((res % 10) == r || (res % 100) == r || (res % 1000) == r)
    flag = true;
   else num++;
  }
 }
 cout << num;
 return 0;
}