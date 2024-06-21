#include<iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 int* p = new int[n];
 for (int i = 0; i < n; i++)
  cin >> p[i];
 if (n == 1)
 {
  cout << p[0];
  delete[]p;
  exit(0);
 }
 bool flag = true;
 int count = 0;
 do {
  for (int i = 1; i < n; i++)
  {
   if (p[i] < p[i - 1])
   {
    int res = (p[i - 1] - p[i]);
    p[i - 1] -= res;
    p[i] += res;
    flag = true;
   }
   else
   {
    flag = false;
 
   }
  }
  if (flag == false)
   count++;
 } while (flag || count<n);
 for (int j = 0; j < n; j++)
  cout << p[j] << " ";
 return 0;
}