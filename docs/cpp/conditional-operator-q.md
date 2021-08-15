---
description: "Learn more about: Conditional Operator: &quest; :"
title: "Conditional Operator: &quest; :"
ms.date: "11/04/2016"
f1_keywords: ["?:", "?"]
helpviewer_keywords: ["conditional operators [C++]", "? : operator"]
ms.assetid: 88643ee8-7100-4f86-880a-705ec22b6271
---
# Conditional Operator: &quest; :

## Syntax

```
expression ? expression : expression
```

## Remarks

The conditional operator (**? :**) is a ternary operator (it takes three operands). The conditional operator works as follows:

- The first operand is implicitly converted to **`bool`**. It is evaluated and all side effects are completed before continuing.

- If the first operand evaluates to **`true`** (1), the second operand is evaluated.

- If the first operand evaluates to **`false`** (0), the third operand is evaluated.

The result of the conditional operator is the result of whichever operand is evaluated — the second or the third. Only one of the last two operands is evaluated in a conditional expression.

Conditional expressions have right-to-left associativity. The first operand must be of integral or pointer type. The following rules apply to the second and third operands:

- If both operands are of the same type, the result is of that type.

- If both operands are of arithmetic or enumeration types, the usual arithmetic conversions (covered in [Standard Conversions](standard-conversions.md)) are performed to convert them to a common type.

- If both operands are of pointer types or if one is a pointer type and the other is a constant expression that evaluates to 0, pointer conversions are performed to convert them to a common type.

- If both operands are of reference types, reference conversions are performed to convert them to a common type.

- If both operands are of type void, the common type is type void.

- If both operands are of the same user-defined type, the common type is that type.

- If the operands have different types and at least one of the operands has user-defined type then the language rules are used to determine the common type. (See warning below.)

Any combinations of second and third operands not in the preceding list are illegal. The type of the result is the common type, and it is an l-value if both the second and third operands are of the same type and both are l-values.

> [!WARNING]
> If the types of the second and third operands are not identical, then complex type conversion rules, as specified in the C++ Standard, are invoked. These conversions may lead to unexpected behavior including construction and destruction of temporary objects. For this reason, we strongly advise you to either (1) avoid using user-defined types as operands with the conditional operator or (2) if you do use user-defined types, then explicitly cast each operand to a common type.

## Example

```cpp
// expre_Expressions_with_the_Conditional_Operator.cpp
// compile with: /EHsc
// Demonstrate conditional operator
#include <iostream>
using namespace std;
int main() {
   int i = 1, j = 2;
   cout << ( i > j ? i : j ) << " is greater." << endl;
}
```

## See also

[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Conditional-Expression Operator](../c-language/conditional-expression-operator.md)
