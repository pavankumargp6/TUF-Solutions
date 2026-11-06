# [Prefix Calculator](https://takeuforward.org/practice/dsa/prefix-calculator?category=week-2&source=practice-set-for-semester-bmsit)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Evaluate a valid, space-separated prefix expression containing signed integer operands and the binary operators **+** , **-** , ***** , **/** , **%** , and **^** . Return the result as a signed 64-bit integer.

In a prefix expression, each operator appears before its two operands. For example, - 10 3 means 10 - 3.

Implement **evaluatePrefix** (string **expression** ).

The number of tokens is determined by the expression and is not a separate input parameter.

<h2>Rules</h2>
- For op "a b", a is the left operand and b is the right operand.
- Division truncates toward zero. For example, -7 / 2 = -3.
- Remainder follows C++ semantics: the result has the sign of the dividend. For example, -5 % 3 = -2.
- ^ denotes exponentiation, not bitwise XOR.
- A token that is exactly - is the subtraction operator. A token such as -5 is a negative integer.
- Tokens are separated by a single space.

### Example 1:

**Input:** expression = "+ 2 3"

**Output:** 5

**Explanation:** + 2 3 means 2 + 3, which evaluates to 5.

### Example 2:

**Input:** expression = "+ ^ 2 3 * 4 5"

**Output:** 28

**Explanation:** ^ 2 3 evaluates to 8, and * 4 5 evaluates to 20. Then + 8 20 evaluates to 28.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- Let N be the number of tokens in expression. 1 <= N <= 10^5
- N is odd.
- Each token is a signed 64-bit integer or one of +, -, *, /, %, ^.
- The expression is valid prefix notation and evaluates to exactly one value.
- Divisors are nonzero.
- Exponents are non-negative, and 0^0 does not occur.
- Every operand, intermediate result, and the final result fits in a signed 64-bit integer.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
