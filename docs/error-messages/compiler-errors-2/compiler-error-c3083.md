---
description: "Learn more about: Compiler Error C3083"
title: "Compiler Error C3083"
ms.date: "11/04/2016"
f1_keywords: ["C3083"]
helpviewer_keywords: ["C3083"]
ms.assetid: 05ff791d-52bb-41eb-9511-3ef89d7f4710
---
# Compiler Error C3083

> '*identifier*': the symbol to the left of a '::' must be a type

## Remarks

The qualification used is invalid. Ensure that no extra symbols were used in the qualification and that you included all required headers.

## Example

The following example generates C3083:

```cpp
// C3083.cpp
// compile with: /c

struct S
{
    S();
};

S::Extra::S() {}   // C3083
S::S() {}          // OK
```
