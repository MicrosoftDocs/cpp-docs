---
description: "Learn more about: Compiler Warning (level 1) C4326"
title: "Compiler Warning (level 1) C4326"
ms.date: "08/27/2018"
f1_keywords: ["C4326"]
helpviewer_keywords: ["C4326"]
ms.assetid: d44d2c4e-9456-42d3-b35b-4ba4b2d42ec7
---
# Compiler Warning (level 1) C4326

> return type of '*function*' should be '*type1*' instead of '*type2*'

## Remarks

A function returned a type other than *type1*. For example, using [/Za](../../build/reference/za-ze-disable-language-extensions.md), **main** did not return an **`int`**.

## Example

The following sample generates C4326 and shows how to fix it:

```cpp
// C4326.cpp
// compile with: /Za /W1
char main()
{
    // C4326, instead use int main()
}
```
