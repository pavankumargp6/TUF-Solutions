#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
private:
    int precedence(char op) {
        if (op == '*' || op == '/') return 2;
        if (op == '+' || op == '-') return 1;
        return 0;
    }

public:
    string infixToPrefix(string expression) {
        // Step 1: Reverse the string
        reverse(expression.begin(), expression.end());

        // Step 2: Swap opening and closing brackets
        for (int i = 0; i < expression.length(); i++) {
            if (expression[i] == '(') {
                expression[i] = ')';
            } else if (expression[i] == ')') {
                expression[i] = '(';
            }
        }

        // Step 3: Run modified infix to postfix conversion
        string result = "";
        stack<char> st;

        for (char c : expression) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                result += c;
            } else if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
            } else {
                // For prefix logic, strict greater than precedence is kept for consistency 
                while (!st.empty() && precedence(st.top()) > precedence(c)) {
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // Step 4: Reverse again to get the final correct prefix notation
        reverse(result.begin(), result.end());
        return result;
    }

    // Fallback template configurations
    string convertToPrefix(string expression) {
        return infixToPrefix(expression);
    }
};