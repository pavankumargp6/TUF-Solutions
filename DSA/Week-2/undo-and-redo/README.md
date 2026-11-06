# [Undo and Redo](https://takeuforward.org/practice/dsa/undo-and-redo?category=week-2&source=practice-set-for-semester-bmsit)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Design a custom data structure that maintains a sequence of action IDs using two stacks to support undo and redo operations. You must implement an ActionHistory class that records new actions, undoes recent actions, and redoes previously undone actions. Implement the ActionHistory class with the following methods:

- ActionHistory(): Initializes the object with empty active and redo histories.
- void add(int actionId): Records a new action actionId to the active history and clears the redo history.
- int undo(): Moves the latest active action to the redo stack and returns its ID. If there are no actions available to undo, return -1.
- int redo(): Restores the most recently undone action to the active history and returns its ID. If there are no actions available to redo, return -1.
- int top(): Returns the current latest active action ID. If there are no active actions, return -1.

### Example 1:

**Input:**

```
[["ActionHistory"], ["add", "10"], ["add", "20"], ["undo"], ["undo"], ["undo"], ["redo"], ["top"]] 
```

**Output:**

```
[null, null, null, 20, 10, -1, 10, 10] 
```

**Explanation:**

- ActionHistory(): Initializes empty history -> null
- add(10): Records action 10. -> null
- add(20): Records action 20. -> null
- undo(): Undoes the latest action (20) and moves it to redo history -> 20
- undo(): Undoes the next action (10) -> 10
- undo(): No actions left to undo -> -1
- redo(): Redoes the most recently undone action (10) -> 10
- top(): The current latest action is 10 -> 10

### Example 2:

**Input:**

```
[["ActionHistory"], ["add", "5"], ["undo"], ["add", "15"], ["redo"], ["top"]] 
```

**Output:**

```
[null, null, 5, null, -1, 15]
```

**Explanation:**

- ActionHistory(): Initializes empty history -> null
- add(5): Records action 5. -> null
- undo(): Undoes action 5 -> 5
- add(15): Records action 15. This clears the redo history -> null
- redo(): Redo history was cleared, so nothing to redo -> -1
- top(): The current latest action is 15 -> 15

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Q <= 10^5 (Maximum Number of queries)
- 1 <= x <= 10^9 (Action IDs)

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
