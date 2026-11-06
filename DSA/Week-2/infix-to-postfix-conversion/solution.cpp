#include <string>
#include <stack>
using namespace std;

class Solution {
private:
    int precedence(char op) {
        if (op == '^') return 3;
        if (op == '*' || op == '/') return 2;
        if (op == '+' || op == '-') return 1;
        return 0;
    }

public:
    string infixToPostfix(string expression) {
        string result = "";
        stack<char> st;

        for (char c : expression) {
            // If character is an operand, add it directly to output
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                result += c;
            }
            // If opening bracket, push to stack
            else if (c == '(') {
                st.push(c);
            }
            // If closing bracket, pop until opening bracket is met
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop(); // Pop '('
            }
            // If an operator is encountered
            else {
                while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                    // Specific condition for Right-Associativity of '^'
                    if (c == '^' && st.top() == '^') {
                        break; 
                    }
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        // Pop all remaining operators from the stack
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }

    // Fallback alias to protect against alternative platform function names
    string infixToPostfixConversion(string expression) {
        return infixToPostfix(expression);
    }
};