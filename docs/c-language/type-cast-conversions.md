---
description: "Learn more about: Type-Cast Conversions"
title: "Type-Cast Conversions"
ms.date: "11/04/2016"
helpviewer_keywords: ["data type conversion [C++], type-cast conversions", "conversions [C++], type-cast", "type casts", "explicit type conversions", "type casts [C++], about type-cast conversion", "type-cast conversions [C++]"]
ms.assetid: 57ab5902-f12f-4326-a2f6-6282f1d4025a
---
# Type-Cast Conversions

You can use type casts to explicitly convert types.

## Syntax

*`cast-expression`*:\
&emsp;*`unary-expression`*\
&emsp;**`(`**  *`type-name`*  **`)`**  *`cast-expression`*

*`type-name`*:\
&emsp;*`specifier-qualifier-list`* *`abstract-declarator`*<sub>opt</sub>

The *`type-name`* is a type and *`cast-expression`* is a value to be converted to that type. An expression with a type cast isn't an l-value. The *`cast-expression`* is converted as though it had been assigned to a variable of type *`type-name`*. The conversion rules for assignments (outlined in [Assignment Conversions](../c-language/assignment-conversions.md)) apply to type casts as well. The following table shows the types that can be cast to any given type.

### Legal type casts

| Destination Types | Potential Sources |
|---|---|
| Integral types | Any integer type or floating-point type, or pointer to an object |
| Floating-point | Any arithmetic type |
| A pointer to an object, or `void *` | Any integer type, `void *`, a pointer to an object, or a function pointer |
| Function pointer | Any integral type, a pointer to an object, or a function pointer |
| A structure, union, or array | None |
| Void type | Any type |

Any identifier can be cast to **`void`** type. However, if the type specified in a type-cast expression isn't **`void`**, then the identifier being cast to that type can't be a **`void`** expression. Any expression can be cast to **`void`**, but an expression of type **`void`** can't be cast to any other type. For example, a function with **`void`** return type can't have its return cast to another type.

A `void *` expression has a type pointer to **`void`**, not type **`void`**. If an object is cast to **`void`** type, the resulting expression can't be assigned to any item. Similarly, a type-cast object isn't an acceptable l-value, so no assignment can be made to a type-cast object.

**Microsoft Specific**

A type cast can be an l-value expression as long as the size of the identifier doesn't change. For information on l-value expressions, see [L-Value and R-Value Expressions](../c-language/l-value-and-r-value-expressions.md).

**END Microsoft Specific**

You can convert an expression to type **`void`** with a cast, but the resulting expression can be used only where a value isn't required. An object pointer converted to `void *` and back to the original type will return to its original value.

## See also

[Type Conversions](../c-language/type-conversions-c.md)
