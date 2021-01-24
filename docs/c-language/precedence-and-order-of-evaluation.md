---
description: "Learn more about: Precedence and order of evaluation"
title: "Precedence and order of evaluation"
ms.date: "07/11/2019"
helpviewer_keywords: ["associativity of operators [C++]", "precedence [C++], operators", "data binding [C++], operator precedence", "operators [C++], precedence"]
ms.assetid: 201f7864-0c51-4c55-9d6f-39c5d013bcb0
---
# Precedence and order of evaluation

The precedence and associativity of C operators affect the grouping and evaluation of operands in expressions. An operator's precedence is meaningful only if other operators with higher or lower precedence are present. Expressions with higher-precedence operators are evaluated first. Precedence can also be described by the word "binding." Operators with a higher precedence are said to have tighter binding.

The following table summarizes the precedence and associativity (the order in which the operands are evaluated) of C operators, listing them in order of precedence from highest to lowest. Where several operators appear together, they have equal precedence and are evaluated according to their associativity. The operators in the table are described in the sections beginning with [Postfix Operators](../c-language/postfix-operators.md). The rest of this section gives general information about precedence and associativity.

## Precedence and associativity of C operators

| Symbol <sup>1</sup> | Type of operation | Associativity |
|-------------|-----------------------|-------------------|
| `[` `]` `(` `)` `.` `->`<br/>`++` `--` (postfix) | Expression | Left to right |
| **`sizeof`** `&` `*` `+` `-` `~` `!`<br/>`++` `--` (prefix) | Unary | Right to left |
| *typecasts* | Unary | Right to left |
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

An expression can contain several operators with equal precedence. When several such operators appear at the same level in an expression, evaluation proceeds according to the associativity of the operator, either from right to left or from left to right. The direction of evaluation does not affect the results of expressions that include more than one multiplication (`*`), addition (`+`), or binary-bitwise (`&`, `|`, or `^`) operator at the same level. Order of operations is not defined by the language. The compiler is free to evaluate such expressions in any order, if the compiler can guarantee a consistent result.

Only the sequential-evaluation (`,`), logical-AND (`&&`), logical-OR (`||`), conditional-expression (`? :`), and function-call operators constitute sequence points, and therefore guarantee a particular order of evaluation for their operands. The function-call operator is the set of parentheses following the function identifier. The sequential-evaluation operator (`,`) is guaranteed to evaluate its operands from left to right. (The comma operator in a function call is not the same as the sequential-evaluation operator and does not provide any such guarantee.) For more information, see [Sequence points](c-sequence-points.md).

Logical operators also guarantee evaluation of their operands from left to right. However, they evaluate the smallest number of operands needed to determine the result of the expression. This is called "short-circuit" evaluation. Thus, some operands of the expression may not be evaluated. For example, in the expression

`x && y++`

the second operand, `y++`, is evaluated only if `x` is true (nonzero). Thus, `y` is not incremented if `x` is false (0).

## Examples

The following list shows how the compiler automatically binds several sample expressions:

| Expression | Automatic Binding |
|----------------|-----------------------|
| `a & b || c` | `(a & b) || c` |
| `a = b || c` | `a = (b || c)` |
| `q && r || s--` | `(q && r) || s--` |

In the first expression, the bitwise-AND operator (`&`) has higher precedence than the logical-OR operator (`||`), so `a & b` forms the first operand of the logical-OR operation.

In the second expression, the logical-OR operator (`||`) has higher precedence than the simple-assignment operator (`=`), so `b || c` is grouped as the right-hand operand in the assignment. Note that the value assigned to `a` is either 0 or 1.

The third expression shows a correctly formed expression that may produce an unexpected result. The logical-AND operator (`&&`) has higher precedence than the logical-OR operator (`||`), so `q && r` is grouped as an operand. Since the logical operators guarantee evaluation of operands from left to right, `q && r` is evaluated before `s--`. However, if `q && r` evaluates to a nonzero value, `s--` is not evaluated, and `s` is not decremented. If not decrementing `s` would cause a problem in your program, `s--` should appear as the first operand of the expression, or `s` should be decremented in a separate operation.

The following expression is illegal and produces a diagnostic message at compile time:

| Illegal Expression | Default Grouping |
|------------------------|----------------------|
| `p == 0 ? p += 1: p += 2` | `( p == 0 ? p += 1 : p ) += 2` |

In this expression, the equality operator (`==`) has the highest precedence, so `p == 0` is grouped as an operand. The conditional-expression operator (`? :`) has the next-highest precedence. Its first operand is `p == 0`, and its second operand is `p += 1`. However, the last operand of the conditional-expression operator is considered to be `p` rather than `p += 2`, since this occurrence of `p` binds more closely to the conditional-expression operator than it does to the compound-assignment operator. A syntax error occurs because `+= 2` does not have a left-hand operand. You should use parentheses to prevent errors of this kind and produce more readable code. For example, you could use parentheses as shown below to correct and clarify the preceding example:

`( p == 0 ) ? ( p += 1 ) : ( p += 2 )`

## See also

[C operators](c-operators.md)
