# [Backspace Editor](https://takeuforward.org/practice/dsa/backspace-editor?category=week-2&source=practice-set-for-semester-bmsit)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a string **S** containing lowercase English letters and the character **#** . Process its characters from left to right:

- A lowercase letter is appended to the current text.
- **#** removes the last character of the current text. If the current text is empty, # does nothing.

Return the final text. If no characters remain, return "EMPTY".

### Example 1:

**Input:** S = "abc#d##c"

**Output:** "ac"

**Explanation:**

- 'a', 'b', 'c' are appended: "abc"
- '#' removes 'c': "ab"
- 'd' is appended: "abd"
- '#' removes 'd': "ab"
- '#' removes 'b': "a"
- 'c' is appended: "ac"

### Example 2:

**Input:** S = "a##b"

**Output:** "b"

**Explanation:**

- 'a' is appended: "a"
- '#' removes 'a': ""
- '#' does nothing on empty text: ""
- 'b' is appended: "b"

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= |S| <= 5 x 10^6
- S consists only of lowercase English letters and '#'.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
