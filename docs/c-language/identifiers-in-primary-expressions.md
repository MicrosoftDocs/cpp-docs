---
description: "Learn more about: Identifiers in Primary Expressions"
title: "Identifiers in Primary Expressions"
ms.date: "11/04/2016"
helpviewer_keywords: ["identifiers, designating objects"]
ms.assetid: d4602fe6-e7e6-40cc-9823-3b1ebf5d3d38
---
# Identifiers in Primary Expressions

Identifiers can have integral, **`float`**, **`enum`**, **`struct`**, **`union`**, array, pointer, or function type. An identifier is a primary expression provided it has been declared as designating an object (in which case it is an l-value) or as a function (in which case it is a function designator). See [L-Value and R-Value Expressions](../c-language/l-value-and-r-value-expressions.md) for a definition of l-value.

The pointer value represented by an array identifier is not a variable, so an array identifier cannot form the left-hand operand of an assignment operation and therefore is not a modifiable l-value.

An identifier declared as a function represents a pointer whose value is the address of the function. The pointer addresses a function returning a value of a specified type. Thus, function identifiers also cannot be l-values in assignment operations. For more information, see [Identifiers](../c-language/c-identifiers.md).

## See also

[C Primary Expressions](../c-language/c-primary-expressions.md)
