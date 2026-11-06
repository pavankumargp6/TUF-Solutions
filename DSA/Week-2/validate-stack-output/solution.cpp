#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool validateStackOutput(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        for (int x : pushed) {
            st.push(x);
            while (!st.empty() && j < popped.size() && st.top() == popped[j]) {
                st.pop();
                j++;
            }
        }
        return st.empty();
    }

    // Fallback alias to protect against alternative platform naming schemas
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        return validateStackOutput(pushed, popped);
    }
};