#include <stack>
using namespace std;

class ActionHistory {
private:
    stack<int> activeStack;
    stack<int> redoStack;

public:
    ActionHistory() {
        // Initializes the object with empty active and redo histories
    }

    void add(int actionId) {
        activeStack.push(actionId);
        // Clearing the redo history as a new active action is recorded
        while (!redoStack.empty()) {
            redoStack.pop();
        }
    }

    int undo() {
        if (activeStack.empty()) {
            return -1;
        }
        int latestAction = activeStack.top();
        activeStack.pop();
        redoStack.push(latestAction);
        return latestAction;
    }

    int redo() {
        if (redoStack.empty()) {
            return -1;
        }
        int undoneAction = redoStack.top();
        redoStack.pop();
        activeStack.push(undoneAction);
        return undoneAction;
    }

    int top() {
        if (activeStack.empty()) {
            return -1;
        }
        return activeStack.top();
    }
};