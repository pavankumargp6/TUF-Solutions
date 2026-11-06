#include <string>
using namespace std;

class Solution {
public:
    string backspaceEditor(string S) {
        string result = "";
        for (char c : S) {
            if (c == '#') {
                if (!result.empty()) {
                    result.pop_back();
                }
            } else {
                result.push_back(c);
            }
        }
        return result.empty() ? "EMPTY" : result;
    }
};