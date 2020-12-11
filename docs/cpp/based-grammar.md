---
description: "Learn more about: __based Grammar"
title: "__based Grammar"
ms.date: "11/04/2016"
helpviewer_keywords: ["based addressing"]
ms.assetid: a68ff750-c7fa-4c0c-8d5f-2df76e4686c5
---
# __based Grammar

**Microsoft Specific**

Based addressing is useful when you need precise control over the segment in which objects are allocated (static and dynamic based data).

The only form of based addressing acceptable in 32-bit and 64-bit compilations is "based on a pointer" that defines a type that contains a 32-bit or 64-bit displacement to a 32-bit or 64-bit base or based on **`void`**.

## Grammar

*based-range-modifier*:
**__based(**  *base-expression*  **)**

*base-expression*:
*based-variablebased-abstract-declaratorsegment-namesegment-cast*

*based-variable*:
*identifier*

*based-abstract-declarator*:
*abstract-declarator*

*base-type*:
*type-name*

**END Microsoft Specific**

## See also

[Based Pointers](../cpp/based-pointers-cpp.md)
