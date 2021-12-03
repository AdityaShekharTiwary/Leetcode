/*
TC : O(N)
sc : O(1)

*/


class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cnt = 0;
        for (auto c : s) {
            if (c == '(') st.push(')');
            else if (st.size() && c == st.top()) {
                st.pop();
                continue;
            }
            else cnt++;

        }
        return st.size() + cnt;
    }
};

/*
TC : O(N)
SC : O(1)

*/

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int l = 0, r = 0;
        for (auto c : s) {
            if (c == '(') r++;
            else if (c == ')' && r > 0) r--;
            else l++;

        }
        return l + r;
    }
};