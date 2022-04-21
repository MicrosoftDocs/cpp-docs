---
description: "Learn more about: Expressions with Unary Operators"
title: "Expressions with Unary Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["expressions [C++], unary operators", "unary operators [C++], expressions with", "expressions [C++], operators"]
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
---
# Expressions with Unary Operators

Unary operators act on only one operand in an expression. The unary operators are as follows:

- [Indirection operator (`*`)](../cpp/indirection-operator-star.md)

- [Address-of operator (`&`)](../cpp/address-of-operator-amp.md)

- [Unary plus operator (`+`)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Unary negation operator (`-`)](../cpp/unary-plus-and-negation-operators-plus-and.md)

- [Logical negation operator (`!`)](../cpp/logical-negation-operator-exclpt.md)

- [One's complement operator (`~`)](../cpp/one-s-complement-operator-tilde.md)

- [Prefix increment operator (`++`)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Prefix decrement operator (`--`)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)

- [Cast operator ()](../cpp/cast-operator-parens.md)

- [`sizeof` operator](../cpp/sizeof-operator.md)

- [`alignof` operator](../cpp/alignof-operator.md)

- [`noexcept` expression](../cpp/noexcept-cpp.md)

- [`new` operator](../cpp/new-operator-cpp.md)

- [`delete` operator](../cpp/delete-operator-cpp.md)

These operators have right-to-left associativity. Unary expressions generally involve syntax that precedes a postfix or primary expression.

## Syntax

*`unary-expression`*:\
&emsp; *`postfix-expression`*\
&emsp; **`++`** *`cast-expression`*\
&emsp; **`--`** *`cast-expression`*\
&emsp; *`unary-operator`* *`cast-expression`*\
&emsp; **`sizeof`** *`unary-expression`*\
&emsp; **`sizeof`** **`(`** *`type-id`* **`)`**\
&emsp; **`sizeof`** **`...`** **`(`** *`identifier`* **`)`**\
&emsp; **`alignof`** **`(`** *`type-id`* **`)`**\
&emsp; *`noexcept-expression`*\
&emsp; *`new-expression`*\
&emsp; *`delete-expression`*\
*`unary-operator`*: one of\
&emsp; **`*`** **`&`** **`+`** **`-`** **`!`** **`~`**

## Remarks

Any *`postfix-expression`* is considered a *`unary-expression`*, and because any *`primary-expression`* is considered a *`postfix-expression`*, any *`primary-expression`* is considered a *`unary-expression`* also. For more information, see [Postfix expressions](../cpp/postfix-expressions.md) and [Primary expressions](../cpp/primary-expressions.md).

The *`cast-expression`* is a *`unary-expression`* with an optional cast to change the type. For more information, see [Cast operator: `()`](../cpp/cast-operator-parens.md).

The *`noexcept-expression`* is a *`noexcept-specifier`* with a *`constant-expression`* argument. For more information, see [`noexcept`](../cpp/noexcept-cpp.md).

The *`new-expression`* refers to the **`new`** operator. The *`delete-expression`* refers to the **`delete`** operator. For more information, see [`new` operator](../cpp/new-operator-cpp.md) and [`delete` operator](../cpp/delete-operator-cpp.md).

## See also

[Types of expressions](../cpp/types-of-expressions.md)
