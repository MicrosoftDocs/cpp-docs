---
description: "Learn more about: Function-Call Conversions"
title: "Function-Call Conversions"
ms.date: "11/04/2016"
helpviewer_keywords: ["function calls, converting", "function calls, argument type conversions", "functions [C], argument conversions"]
ms.assetid: 04ea0f81-509a-4913-8b12-0937a81babcf
---
# Function-Call Conversions

The type of conversion performed on the arguments in a function call depends on the presence of a function prototype (forward declaration) with declared argument types for the called function.

If a function prototype is present and includes declared argument types, the compiler performs type checking (see [Functions](../c-language/functions-c.md)).

If no function prototype is present, only the usual arithmetic conversions are performed on the arguments in the function call. These conversions are performed independently on each argument in the call. This means that a **`float`** value is converted to a **`double`**; a **`char`** or **`short`** value is converted to an **`int`**; and an **`unsigned char`** or **`unsigned short`** is converted to an **`unsigned int`**.

## See also

[Type Conversions](../c-language/type-conversions-c.md)
