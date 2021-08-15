---
description: "Learn more about: Expressions with Unary Operators"
title: "Expressions with Unary Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["expressions [C++], unary operators", "unary operators [C++], expressions with", "expressions [C++], operators"]
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
---
# Expressions with Unary Operators

Unary operators act on only one operand in an expression. The unary operators are as follows:

- [Indirection operator (*)](../cpp/indirection-operator-star.md)

- [Address-of operator (&)](../cpp/address-of-operator-amp.md)

- [Unary plus operator (+)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Unary negation operator (-)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Logical negation operator (!)](../cpp/logical-negation-operator-exclpt.md)

- [One's complement operator (~)](../cpp/one-s-complement-operator-tilde.md)

- [Prefix increment operator (++)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Prefix decrement operator (--)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Cast operator ()](../cpp/cast-operator-parens.md)

- [`sizeof` operator](../cpp/sizeof-operator.md)

- [`__uuidof` operator](../cpp/uuidof-operator.md)

- [`alignof` operator](../cpp/alignof-operator.md)

- [`new` operator](../cpp/new-operator-cpp.md)

- [`delete` operator](../cpp/delete-operator-cpp.md)

These operators have right-to-left associativity. Unary expressions generally involve syntax that precedes a postfix or primary expression.

The following are the possible forms of unary expressions.

- *postfix-expression*

- `++` *unary-expression*

- `--` *unary-expression*

- *unary-operator* *cast-expression*

- **`sizeof`** *unary-expression*

- `sizeof(` *type-name* `)`

- `decltype(` *expression* `)`

- *allocation-expression*

- *deallocation-expression*

Any *postfix-expression* is considered a *unary-expression*, and because any primary expression is considered a *postfix-expression*, any primary expressions is considered a *unary-expression* also. For more information, see [Postfix Expressions](../cpp/postfix-expressions.md) and [Primary Expressions](../cpp/primary-expressions.md).

A *unary-operator* consists of one or more of the following symbols: `* & + - ! ~`

The *cast-expression* is a unary expression with an optional cast to change the type. For more information see [Cast Operator: ()](../cpp/cast-operator-parens.md).

An *expression* can be any expression. For more information, see [Expressions](../cpp/expressions-cpp.md).

The *allocation-expression* refers to the **`new`** operator. The *deallocation-expression* refers to the **`delete`** operator. For more information, see the links earlier in this topic.

## See also

[Types of Expressions](../cpp/types-of-expressions.md)
