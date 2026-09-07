---
description: "Learn how C operator precedence and associativity group operands and how sequence points determine evaluation order."
title: "Precedence and order of evaluation"
ms.date: "09/04/2026"
ai-usage: ai-assisted
helpviewer_keywords: ["associativity of operators [C++]", "precedence [C++], operators", "data binding [C++], operator precedence", "operators [C++], precedence"]
---
# C precedence and order of evaluation

The precedence and associativity of C operators determine how operands are grouped and which operations depend on the results of other operations. Operators with higher precedence bind more tightly than operators with lower precedence.

For example, `f() + g() * h()` is grouped as `f() + (g() * h())` because multiplication has higher precedence than addition. The multiplication result is used in the addition, but C doesn't specify whether `f`, `g`, or `h` is called first. Similarly, `f() - g() - h()` is grouped as `(f() - g()) - h()` because subtraction associates from left to right, but associativity doesn't specify which function is called first.

The following table summarizes the precedence and associativity of C operators. The operators are listed in order of precedence from highest to lowest. Operators that appear together have equal precedence and group according to their associativity. The following sections describe the operators in the table, starting with [Postfix operators](postfix-operators.md).

## Precedence and associativity of C operators

| Symbol <sup>1</sup> | Type of operation | Associativity |
|-------------|-----------------------|-------------------|
| `[` `]` `(` `)` `.` `->`<br/>`++` `--` (postfix) | Expression | Left to right |
| **`sizeof`** **`_Alignof`** `&` `*` `+` `-` `~` `!`<br/>`++` `--` (prefix), *typecasts* | Unary | Right to left |
| `*` `/` `%` | Multiplicative | Left to right |
| `+` `-` | Additive | Left to right |
| `<<` `>>` | Bitwise shift | Left to right |
| `<` `>` `<=` `>=` | Relational | Left to right |
| `==` `!=` | Equality | Left to right |
| `&` | Bitwise-AND | Left to right |
| `^` | Bitwise-exclusive-OR | Left to right |
| `|` | Bitwise-inclusive-OR | Left to right |
| `&&` | Logical-AND | Left to right |
| `||` | Logical-OR | Left to right |
| `? :` | Conditional-expression | Right to left |
| `=` `*=` `/=` `%=`<br/>`+=` `-=` `<<=` `>>=` `&=`<br/>`^=` `|=` | Simple and compound assignment <sup>2</sup> | Right to left |
| `,` | Sequential evaluation | Left to right |

<sup>1</sup> Operators are listed in descending order of precedence. If several operators appear on the same line or in a group, they have equal precedence.

<sup>2</sup> All simple and compound-assignment operators have equal precedence.

The logical-NOT operator (`!`) is a unary operator and has higher precedence than logical-AND (`&&`) and logical-OR (`||`).

An expression can contain several operators with equal precedence. When several such operators appear at the same level in an expression, their associativity determines whether they group from right to left or from left to right. Except where the language guarantees sequencing, the compiler can evaluate operands in any order. Don't rely on precedence or associativity to determine that order.

A sequence point marks a point in execution where all evaluations and side effects before it are complete before any evaluation after it begins. The sequential-evaluation (`,`), logical-AND (`&&`), logical-OR (`||`), and conditional-expression (`? :`) operators establish sequence points between specific operands. The sequential-evaluation operator evaluates its left operand before its right operand. The conditional-expression operator evaluates its first operand before the selected second or third operand. The logical-AND and logical-OR operators evaluate their left operand before their right operand.

Unlike the sequential-evaluation operator, the logical-AND and logical-OR operators evaluate their right operand only when needed to determine the result. This behavior is called *short-circuit evaluation*. For example, in the expression

`x && y++`

the second operand, `y++`, is evaluated only if `x` is true (nonzero). Thus, `y` is not incremented if `x` is false (0).

Another sequence point occurs after all function arguments and the function designator are evaluated, but before the function is entered. The order in which function arguments are evaluated isn't specified. The comma that separates function arguments isn't the sequential-evaluation operator and doesn't guarantee an evaluation order. For more information, see [C sequence points](c-sequence-points.md).

## Examples

The following table shows how the compiler automatically binds several sample expressions:

| Expression | Automatic Binding |
|----------------|-----------------------|
| `a & b || c` | `(a & b) || c` |
| `a = b || c` | `a = (b || c)` |
| `q && r || s--` | `(q && r) || s--` |

In the first expression, the bitwise-AND operator (`&`) has higher precedence than the logical-OR operator (`||`), so `a & b` forms the first operand of the logical-OR operation.

In the second expression, the logical-OR operator (`||`) has higher precedence than the simple-assignment operator (`=`), so `b || c` is grouped as the right-hand operand in the assignment. Note that the value assigned to `a` is either 0 or 1.

The third expression shows a correctly formed expression that might produce an unexpected result. The logical-AND operator (`&&`) has higher precedence than the logical-OR operator (`||`), so `q && r` is grouped as an operand. Because each logical operator evaluates its left operand before its right operand, `q && r` is evaluated before `s--`. However, if `q && r` evaluates to a nonzero value, `s--` isn't evaluated, and `s` isn't decremented. If your program requires `s` to be decremented, put `s--` in a separate expression.

The following expression is invalid in C and produces a compiler diagnostic:

| Invalid C expression |
|----------------------|
| `p == 0 ? p += 1 : p += 2` |

In C, the third operand of the conditional-expression operator (`? :`) must be a conditional expression. An unparenthesized assignment expression such as `p += 2` can't appear there. Parentheses make the assignment a primary expression that's valid in that position:

`(p == 0) ? (p += 1) : (p += 2)`

This restriction is specific to C. In C++, the third operand can be an assignment expression, so the original expression is valid.

## See also

[C operators](c-operators.md)
