#include <iostream>
#include <vector>
#include <limits> // for numeric_limits
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
 
        vector<int> left(n);
        vector<int> right(m);
 
        // Input elements for left and right vectors
        for (int i = 0; i < n; i++) {
            cin >> left[i];
        }
        for (int j = 0; j < m; j++) {
            cin >> right[j];
        }
 
        int count = 0;
        for (auto it = left.begin(); it != left.end(); ++it) {
            for (auto jt = right.begin(); jt != right.end(); ++jt) {
                if (*it + *jt <= k) {
                    count++;
                }
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}