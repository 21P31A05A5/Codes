class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int res = 0;
        for (int i=0;i<s.size();i++){
            if (s[i] == '(') st.push(s[i]);
            else if (s[i] == ')'){
                int a = st.size();
                res = max(res,a);
                st.pop();
            }
        }
        return res;
    }
};
