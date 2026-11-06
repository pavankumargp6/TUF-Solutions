#include <string>
#include <vector>
using namespace std;

class TwoStacks {
    vector<int> arr;
    int capacity;
    int top1;
    int top2;

public:
    TwoStacks(int K) {
        capacity = K;
        arr.resize(K);
        top1 = -1;
        top2 = K;
    }

    string push(int s, int x) {
        if (top1 + 1 == top2) return "OVERFLOW";
        if (s == 1) {
            top1++;
            arr[top1] = x;
        } else {
            top2--;
            arr[top2] = x;
        }
        return "";
    }

    string pop(int s) {
        if (s == 1) {
            if (top1 >= 0) {
                int val = arr[top1];
                top1--;
                return to_string(val);
            }
        } else {
            if (top2 < capacity) {
                int val = arr[top2];
                top2++;
                return to_string(val);
            }
        }
        return "UNDERFLOW";
    }

    string top(int s) {
        if (s == 1) {
            if (top1 >= 0) return to_string(arr[top1]);
        } else {
            if (top2 < capacity) return to_string(arr[top2]);
        }
        return "EMPTY";
    }

    string size(int s) {
        if (s == 1) return to_string(top1 + 1);
        else return to_string(capacity - top2);
    }
};