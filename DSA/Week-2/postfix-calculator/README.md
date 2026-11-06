# [Postfix Calculator](https://takeuforward.org/practice/dsa/postfix-calculator?category=week-2&source=practice-set-for-semester-bmsit&sidebar=0)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Evaluate a valid postfix expression containing integer operands and the binary operators **+** , **-** , ***** , **/** , **%** , and **^** . Return its value as a signed 64-bit integer.

Implement long long **evaluatePostfix** (string **expression** ).

The expression contains tokens in postfix order, separated by single spaces. Each token is either an integer or one of the listed operators.

Rules:

- For "a b op", a is the left operand and b is the right operand. For example, "10 3 -" evaluates to 10 - 3.
- Division truncates toward zero. For example, -7 / 2 = -3.
- Remainder follows C++ semantics: the result has the sign of the dividend. For example, -5 % 3 = -2.
- The ^ operator means exponentiation, not bitwise XOR.
- A token that is exactly - is the subtraction operator. A token such as -5 is a negative integer.

### Example 1:

**Input:** expression = “2 3 +”

**Output:** 5

**Explanation:** 2 + 3 = 5.

### Example 2:

**Input:** expression = “2 3 ^ 4 5 * +”

**Output:** 28

**Explanation:** First, we evaluate 2 ^ 3 = 8. Then, we evaluate 4 * 5 = 20. Finally, we add them: 8 + 20 = 28.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ N ≤ 10^5
- N is odd (a valid expression has exactly one more operand than operators)
- Each token is either an integer or one of the operators +, -, *, /, %, ^
- expression is always a valid postfix expression
- For / and %, the divisor is never 0
- For ^, the exponent is never negative, and 0^0 never occurs
- Every operand, every intermediate result and the final answer fit in a signed 64-bit integer

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
