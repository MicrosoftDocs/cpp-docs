---
title: "C Assignment Operators"
description: "The standard C language assignment operators, their syntax and meaning."
ms.date: 10/30/2020
helpviewer_keywords: ["remainder assignment operator (%=)", "&= operator", "bitwise-AND assignment operator", "operators [C], assignment", "operators [C], shift", "^= operator, assignment operators", "+= operator", ">>= operator", "|= operator", "division assignment operator", "subtraction operator", "right shift operators", "subtraction operator, C assignment operators", "= operator, assignment operators", "*= operator", ">> operator", "%= operator", "assignment operators, C", "= operator", "assignment operators", "assignment conversions", "-= operator", "multiplication assignment operator (*=)", "shift operators, right", "/= operator", "operator >>=, C assignment operators", "<<= operator"]
ms.assetid: 11688dcb-c941-44e7-a636-3fc98e7dac40
---
# C Assignment Operators

An assignment operation assigns the value of the right-hand operand to the storage location named by the left-hand operand. Therefore, the left-hand operand of an assignment operation must be a modifiable l-value. After the assignment, an assignment expression has the value of the left operand but isn't an l-value.

## Syntax

*`assignment-expression`*:\
&emsp;*`conditional-expression`*\
&emsp;*`unary-expression`* *`assignment-operator`* *`assignment-expression`*

*`assignment-operator`*: one of\
&emsp;**`=`** **`*=`** **`/=`** **`%=`** **`+=`** **`-=`** **`<<=`** **`>>=`** **`&=`** **`^=`** **`|=`**

The assignment operators in C can both transform and assign values in a single operation. C provides the following assignment operators:

| Operator | Operation Performed |
|---|---|
| **`=`** | Simple assignment |
| **`*=`** | Multiplication assignment |
| **`/=`** | Division assignment |
| **`%=`** | Remainder assignment |
| **`+=`** | Addition assignment |
| **`-=`** | Subtraction assignment |
| **`<<=`** | Left-shift assignment |
| **`>>=`** | Right-shift assignment |
| **`&=`** | Bitwise-AND assignment |
| **`^=`** | Bitwise-exclusive-OR assignment |
| **` | =`** | Bitwise-inclusive-OR assignment |

In assignment, the type of the right-hand value is converted to the type of the left-hand value, and the value is stored in the left operand after the assignment has taken place. The left operand must not be an array, a function, or a constant. The specific conversion path, which depends on the two types, is outlined in detail in [Type Conversions](../c-language/type-conversions-c.md).

## See also

- [Assignment Operators](../cpp/assignment-operators.md)
