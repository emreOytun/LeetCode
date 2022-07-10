class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        stack<int> st;

        for (char ch : s) {
            if (ch == '(') st.push(-1);

            else {
                int sub_score = 0;
                while (st.top() != -1) {
                    sub_score += st.top();
                    st.pop();
                }
                if (sub_score != 0) sub_score *= 2;
                else sub_score = 1;

                st.pop();
                st.push(sub_score);
            }
        }

        while (!st.empty()) {
            score += st.top();
            st.pop();
        }

        return score;
    }
};
