#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e6 + 3;
 
int f(int n)
{
    int product = 1;
    while (n)
    {
        int lastDigit = n % 10;
        if (lastDigit != 0)
        {
            product *= lastDigit;
        }
        n /= 10;
    }
    return product;
}
 
int g(int n)
{
    if (n < 10)
    {
        return n;
    }
    return g(f(n));
}
 
vector<int> G[10];
 
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
 
    for (int i = 1; i < N; i++)
    {
        G[g(i)].push_back(i);
    }
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
 
        int ans = upper_bound(G[k].begin(), G[k].end(), r) - lower_bound(G[k].begin(), G[k].end(), l);
        cout << ans << '\n';
    }
 
    return 0;
}