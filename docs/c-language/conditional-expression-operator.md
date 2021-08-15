---
description: "Learn more about: Conditional-Expression Operator"
title: "Conditional-Expression Operator"
ms.date: "11/04/2016"
helpviewer_keywords: ["conditional operators", "operators [C++], conditional", "expressions [C++], conditional"]
ms.assetid: c4f1a5ca-0844-44a7-a384-eca584d4e3dd
---
# Conditional-Expression Operator

C has one ternary operator: the conditional-expression operator (**? :**).

## Syntax

*conditional-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR expression*  **?**  *expression*  **:**  *conditional-expression*

The *logical-OR-expression* must have integral, floating, or pointer type. It is evaluated in terms of its equivalence to 0. A sequence point follows *logical-OR-expression*. Evaluation of the operands proceeds as follows:

- If *logical-OR-expression* is not equal to 0, *expression* is evaluated. The result of evaluating the expression is given by the nonterminal *expression*. (This means *expression* is evaluated only if *logical-OR-expression* is true.)

- If *logical-OR-expression* equals 0, *conditional-expression* is evaluated. The result of the expression is the value of *conditional-expression*. (This means *conditional-expression* is evaluated only if *logical-OR-expression* is false.)

Note that either *expression* or *conditional-expression* is evaluated, but not both.

The type of the result of a conditional operation depends on the type of the *expression* or *conditional-expression* operand, as follows:

- If *expression* or *conditional-expression* has integral or floating type (their types can be different), the operator performs the usual arithmetic conversions. The type of the result is the type of the operands after conversion.

- If both *expression* and *conditional-expression* have the same structure, union, or pointer type, the type of the result is the same structure, union, or pointer type.

- If both operands have type **`void`**, the result has type **`void`**.

- If either operand is a pointer to an object of any type, and the other operand is a pointer to **`void`**, the pointer to the object is converted to a pointer to **`void`** and the result is a pointer to **`void`**.

- If either *expression* or *conditional-expression* is a pointer and the other operand is a constant expression with the value 0, the type of the result is the pointer type.

In the type comparison for pointers, any type qualifiers (**`const`** or **`volatile`**) in the type to which the pointer points are insignificant, but the result type inherits the qualifiers from both components of the conditional.

## Examples

The following examples show uses of the conditional operator:

```
j = ( i < 0 ) ? ( -i ) : ( i );
```

This example assigns the absolute value of `i` to `j`. If `i` is less than 0, `-i` is assigned to `j`. If `i` is greater than or equal to 0, `i` is assigned to `j`.

```cpp
void f1( void );
void f2( void );
int x;
int y;
    .
    .
    .
( x == y ) ? ( f1() ) : ( f2() );
```

In this example, two functions, `f1` and `f2`, and two variables, `x` and `y`, are declared. Later in the program, if the two variables have the same value, the function `f1` is called. Otherwise, `f2` is called.

## See also

[Conditional Operator: ? :](../cpp/conditional-operator-q.md)
