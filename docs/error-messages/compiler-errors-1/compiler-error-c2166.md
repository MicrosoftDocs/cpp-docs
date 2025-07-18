---
title: "Compiler Error C2166"
description: "Learn more about: Compiler Error C2166"
ms.date: 06/29/2025
f1_keywords: ["C2166"]
helpviewer_keywords: ["C2166"]
---
# Compiler Error C2166

> l-value specifies const object

## Remarks

Code attempts to modify an item declared **`const`**.

## Example

The following example generates C2166:

```cpp
// C2166.cpp
int main()
{
    ((const int&)1) = 5;   // C2166
}
```
