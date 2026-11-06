#include <string>
#include <stack>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    long long evaluatePostfix(string expression) {
        stack<long long> st;
        stringstream ss(expression);
        string token;
        
        while (ss >> token) {
            if (token == "+" || token == "-" || token == "*" || token == "/" || token == "%" || token == "^") {
                if (st.size() < 2) continue;
                long long val2 = st.top(); st.pop();
                long long val1 = st.top(); st.pop();
                
                if (token == "+") {
                    st.push(val1 + val2);
                } else if (token == "-") {
                    st.push(val1 - val2);
                } else if (token == "*") {
                    st.push(val1 * val2);
                } else if (token == "/") {
                    st.push(val2 == 0 ? 0 : val1 / val2);
                } else if (token == "%") {
                    st.push(val2 == 0 ? 0 : val1 % val2);
                } else if (token == "^") {
                    long long res = 1;
                    for (long long i = 0; i < val2; i++) {
                        res *= val1;
                    }
                    st.push(res);
                }
            } else {
                st.push(stoll(token));
            }
        }
        
        return st.empty() ? 0 : st.top();
    }
};