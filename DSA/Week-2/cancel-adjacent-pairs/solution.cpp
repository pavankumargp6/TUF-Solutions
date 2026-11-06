#include <string>
using namespace std;

class Solution {
public:
    string cancelAdjacentPairs(string str) {
        string result = "";
        for (char c : str) {
            if (!result.empty() && result.back() == c) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }
        return result.empty() ? "EMPTY" : result;
    }
};