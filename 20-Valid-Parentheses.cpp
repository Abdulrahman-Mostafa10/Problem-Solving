class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2)
            return false;

        stack<char> st;
        bool flag = false;

        for (char ch : s) {
            if (st.empty())
                st.push(ch);
            else if (ch - st.top() == 1 || ch - st.top() == 2) {
                st.pop();
                flag = true;
            } else {
                st.push(ch);
                flag = false;
            }
        }
        return flag && st.empty();
    }
};