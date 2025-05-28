---
title: "Compiler Error C2433"
description: "Learn more about: Compiler Error C2433"
ms.date: 05/25/2025
f1_keywords: ["C2433"]
helpviewer_keywords: ["C2433"]
---
# Compiler Error C2433

> '*identifier*': '*modifier*' not permitted on data declarations

The **`friend`**, **`virtual`**, and **`inline`** modifiers cannot be used for data declarations.

## Example

The following example generates C2433:

```cpp
// C2433.cpp
int main()
{
    virtual int i;   // C2433
}
```
