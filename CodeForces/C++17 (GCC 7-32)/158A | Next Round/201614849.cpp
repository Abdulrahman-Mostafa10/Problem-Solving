#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n, k, c = 0;
 cin >> n >> k;
 vector<int> v(n);
 for (int i = 0; i < v.size(); i++)
 {
  cin >> v[i];
 }
 for (int i = 0; i < v.size(); i++)
 {
  if (v[i] > 0 && v[i] >= v[k - 1])
   c++;
 }
 cout << c;
 return 0;
}