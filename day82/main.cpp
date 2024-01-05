class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (const string& s : tokens) {
            if (isdigit(s[0]) || (s.size() > 1 && s[0] == '-' && isdigit(s[1]))) {
                
                st.push(stoi(s));
            } else {
                
                int operand2 = st.top(); st.pop();
                int operand1 = st.top(); st.pop();

                if (s == "+") {
                    st.push(operand1 + operand2);
                } else if (s == "-") {
                    st.push(operand1 - operand2);
                } else if (s == "*") {
                    st.push(operand1 * operand2);
                } else if (s == "/") {
                    st.push(operand1 / operand2);
                }
            }
        }
        return st.top() ; 
    }    
};
