# [Two Stacks, One Storage](https://takeuforward.org/practice/dsa/two-stacks-one-storage?category=week-2&source=practice-set-for-semester-bmsit&sidebar=0)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Design a data structure that implements two initially empty stacks, stack 1 and stack 2, sharing a single array of capacity K.

Implement the TwoStacks class:

- **TwoStacks** (int K): Initializes two empty stacks that share one array of capacity K.
- string **push** (int s, int x): Pushes integer x onto stack s. If the total number of elements in both stacks is already K, the push fails and returns "OVERFLOW". Otherwise the push succeeds and returns an empty string "".
- string **pop** (int s): Removes the top element of stack s and returns it as a string. If stack s is empty, returns "UNDERFLOW".
- string **top** (int s): Returns the top element of stack s as a string without removing it. If stack s is empty, returns "EMPTY".
- string **size** (int s): Returns the current number of elements in stack s as a string.
- You are given K and Q queries, where each query is an array of strings such as ["PUSH", "1", "10"], ["POP", "2"], ["TOP", "1"] or ["SIZE", "2"]. Process the queries in order and return the result of each one as an array of strings. A successful push is shown as "".

### Example 1:

**Input:** K = 3, Q = 5, queries = queries = [["TwoStacks", "3"], ["PUSH", "1", "10"], ["PUSH", "2", "20"], ["POP", "1"], ["SIZE", "2"]]

**Output:** ["", "", "10", "1"]

**Explanation:**

- **TwoStacks** (int K) with K = 3: Creates two empty stacks with shared capacity three.
- **push** (int s, int x) with s = 1 and x = 10: Stack 1 becomes [10]. The call returns "".
- **push** (int s, int x) with s = 2 and x = 20: Stack 2 becomes [20]. The call returns "".
- **pop** (int s) with s = 1: Removes and returns the top value of stack 1, which is "10".
- **size** (int s) with s = 2: Stack 2 contains one value, so the call returns "1".

### Example 2:

**Input:** K = 2, Q = 4, queries = [["TwoStacks", "2"], ["PUSH", "1", "5"], ["PUSH", "1", "15"], ["PUSH", "2", "10"]]

**Output:** ["", "", "OVERFLOW"]

**Explanation:**

- **TwoStacks** (int K) with K = 2 initializes two empty stacks with shared capacity two.
- **push** (int s, int x) with s = 1 and x = 5: Stack 1 becomes [5]. Returns "".
- **push** (int s, int x) with s = 1 and x = 15: Stack 1 becomes [5, 15]. The shared array is now full. Returns "".
- **push** (int s, int x) with s = 2 and x = 10: The shared array is already full, so this call returns "OVERFLOW".

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ K ≤ 10^5
- 1 ≤ Q ≤ 10^5
- The stack identifier s will always be either **1** or **2**
- -10^9 ≤ x ≤ 10^9

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
