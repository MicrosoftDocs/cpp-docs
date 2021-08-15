---
description: "Learn more about: Conversions from other types"
title: "Conversions from Other Types"
ms.date: "01/29/2018"
helpviewer_keywords: ["values, converting", "type casts, conversion"]
ms.assetid: 30fbd974-8f5a-4b70-ac44-d3937b96b702
---
# Conversions from other types

Since an **`enum`** value is an **`int`** value by definition, conversions to and from an **`enum`** value are the same as those for the **`int`** type. For the Microsoft C compiler, an integer is the same as a **`long`**.

**Microsoft Specific**

No conversions between structure or union types are allowed.

Any value can be converted to type **`void`**, but the result of such a conversion can be used only in a context where an expression value is discarded, such as in an expression statement.

The **`void`** type has no value, by definition. Therefore, it cannot be converted to any other type, and other types cannot be converted to **`void`** by assignment. However, you can explicitly cast a value to type **`void`**, as discussed in [Type-Cast Conversions](../c-language/type-cast-conversions.md).

**END Microsoft Specific**

## See also

[Assignment Conversions](../c-language/assignment-conversions.md)
