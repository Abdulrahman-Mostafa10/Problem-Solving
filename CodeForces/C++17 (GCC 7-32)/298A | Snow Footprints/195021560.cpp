#include <bits/stdc++.h>
using namespace std;
int main()
{
 int r1 = 0, rlast = 0, left1 = 0, llast = 0, countR = 0;
 int n;
 cin >> n;
 string s;
 cin >> s;
 for (int i = 0; i < s.size(); i++)
 {
  if (s[i] == 'R' && r1 < 1)
   r1 = i + 1;
  if (s[i] == 'R')
   rlast = i + 1;
  else if (s[i] == 'L' && left1 < 1)
   left1 = i + 1;
  if (s[i] == 'L')
   llast = i + 1;
 }
 if (left1 == 0 && llast == 0)
  cout << r1 << " " << rlast+1;
 else if (r1 == 0 && rlast == 0)
  cout << llast  << " " << left1 - 1;
 else
  cout << r1 << " " << rlast;
 return 0;
}