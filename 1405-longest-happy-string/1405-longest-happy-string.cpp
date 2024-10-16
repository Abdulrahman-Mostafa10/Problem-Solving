class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int total = a + b + c, currA = 0, currB = 0, currC = 0;
        string s = "";
        while (total--) {
            if ((a == max({a, b, c}) && currA != 2) ||
                (a && (currB == 2 || currC == 2))) {
                currA++, a--, currB = currC = 0, s += 'a';
            } else if ((b == max({a, b, c}) && currB != 2) ||
                       (b && (currA == 2 || currC == 2))) {
                currB++, b--, currA = currC = 0, s += 'b';
            } else if ((c == max({a, b, c}) && currC != 2) ||
                       (c && (currB == 2 || currA == 2))) {
                currC++, c--, currA = currB = 0, s += 'c';
            }
            else break;
        }
        return s;
    }
};