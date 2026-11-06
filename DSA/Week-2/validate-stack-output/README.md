# [Validate Stack Output](https://takeuforward.org/practice/dsa/validate-stack-output?category=week-2&source=practice-set-for-semester-bmsit)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given two integer arrays, **pushed** and **popped** , each containing N distinct values.

The array **pushed** gives the order in which values are pushed onto an initially empty stack.

Determine whether **popped** could be the order in which values are removed from the stack by interleaving push and pop operations. You must push values in the order given by **pushed** and cannot rearrange them.

Return **true** if the pop order is possible; otherwise, return **false** .

**Note:** The platform prints 1 if the function returns true; otherwise, it prints 0.

### Example 1:

**Input:** N = 5, pushed = [1, 2, 3, 4, 5], popped = [4, 5, 3, 2, 1]

**Output:** true

**Explanation:**

- Push 1, 2, 3, 4, then pop 4.
- Push 5, then pop 5, 3, 2, 1.
- This matches the given pop order, so return true.

### Example 2:

**Input:** N = 5, pushed = [1, 2, 3, 4, 5], popped = [4, 3, 5, 1, 2]

**Output:** false

**Explanation:**

- Push 1, 2, 3, 4, then pop 4 and 3.
- Push 5 and pop it. The stack now contains 1, 2, with 2 on top.
- Since 1 cannot be popped next, return false.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= N <= 10^5
- 1 <= pushed[i] <= 10^9
- 1 <= popped[i] <= 10^9
- All elements in pushed are distinct.
- popped is a permutation of pushed.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
