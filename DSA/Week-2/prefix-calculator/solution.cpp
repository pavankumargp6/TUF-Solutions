#include <string>
#include <stack>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long evaluatePrefix(string expression) {
        stringstream ss(expression);
        string token;
        vector<string> tokens;

        // Read all tokens into a vector
        while (ss >> token) {
            tokens.push_back(token);
        }

        stack<long long> st;

        // Evaluate from right to left for prefix notation
        for (int i = tokens.size() - 1; i >= 0; i--) {
            string t = tokens[i];

            if (t == "+" || t == "-" || t == "*" || t == "/" || t == "%" || t == "^") {
                if (st.size() < 2) continue;
                long long val1 = st.top(); st.pop(); // First popped is left operand
                long long val2 = st.top(); st.pop(); // Second popped is right operand

                if (t == "+") st.push(val1 + val2);
                else if (t == "-") st.push(val1 - val2);
                else if (t == "*") st.push(val1 * val2);
                else if (t == "/") st.push(val2 == 0 ? 0 : val1 / val2);
                else if (t == "%") st.push(val2 == 0 ? 0 : val1 % val2);
                else if (t == "^") {
                    long long res = 1;
                    for (long long j = 0; j < val2; j++) res *= val1;
                    st.push(res);
                }
            } else {
                // Operand
                st.push(stoll(t));
            }
        }

        return st.empty() ? 0 : st.top();
    }
};