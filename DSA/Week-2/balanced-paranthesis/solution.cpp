#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool balancedParenthesis(string str) {
        stack<char> st;
        for (char it : str) {
            if (it == '(' || it == '{' || it == '[') {
                st.push(it);
            } else {
                if (st.empty()) return false;
                char ch = st.top();
                st.pop();
                if ((it == ')' && ch == '(') || (it == ']' && ch == '[') || (it == '}' && ch == '{')) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }

    // Fallback aliases to protect against alternative platform naming methods
    bool isBalanced(string str) {
        return balancedParenthesis(str);
    }

    bool isValid(string str) {
        return balancedParenthesis(str);
    }
};