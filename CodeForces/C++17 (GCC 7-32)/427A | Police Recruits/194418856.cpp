#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n,free=0,non=0;
 cin >> n;
 vector<int>v(n);
 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  v[i] = x;
 }
 for (int i = 0; i < n; i++)
 {
  if (v[i] > 0)
   free +=v[i];
  else if (free > 0)
   free--;
  else non++;
 }
 cout << non;
 return 0;
}