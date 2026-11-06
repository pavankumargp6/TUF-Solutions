# [Cancel Adjacent Pairs](https://takeuforward.org/practice/dsa/cancel-adjacent-pairs?category=week-2&source=practice-set-for-semester-bmsit&sidebar=0)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a string **S** containing only lowercase English letters.

Process its characters from left to right. If the next character is the same as the last character in the remaining string, remove that last character and the next character. Otherwise, add the next character to the end of the remaining string.

Continue until every character has been processed. This rule also cancels pairs that become adjacent after an earlier pair is removed.

Return the remaining string. If no characters remain, return "EMPTY".

### Example 1:

**Input:** S = "abbaca"

**Output:** "ca"

**Explanation:**

- Remove "bb" from "abbaca" → "aaca".
- Remove "aa" from "aaca" → "ca".

### Example 2:

**Input:** S = "azxxzy"

**Output:** "ay"

**Explanation:**

- Remove "xx" from "azxxzy" → "azzy".
- Remove "zz" from "azzy" → "ay".

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= |S| <= 10^5
- S consists only of lowercase English letters.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
