---
title: "Compiler Error C3816"
description: "Learn more about: Compiler Error C3816"
ms.date: 11/04/2016
f1_keywords: ["C3816"]
helpviewer_keywords: ["C3816"]
---
# Compiler Error C3816

> 'declaration' was previously declared or defined with a different managed or WinRTmodifier

## Remarks

A forward declaration and an actual declaration require that there be no conflicts or inconsistencies in the declaration of attributes.

## Example

The following example generates C3816 and shows how to fix it:

```cpp
// C3816a.cpp
// compile with: /clr /c
class C1;
// try the following line instead
// ref class C1;

ref class C1{  // C3816, forward declaration does not use ref
};
```
