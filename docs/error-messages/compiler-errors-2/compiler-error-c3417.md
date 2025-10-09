---
title: "Compiler Error C3417"
description: "Learn more about: Compiler Error C3417"
ms.date: 11/04/2016
f1_keywords: ["C3417"]
helpviewer_keywords: ["C3417"]
---
# Compiler Error C3417

> 'member' : value types cannot contain user-defined special member functions

## Remarks

Value types cannot contain functions such as a default instance constructor, destructor, or copy constructor.

## Example

The following example generates C3417:

```cpp
// C3417.cpp
// compile with: /clr /c
value class VC {
   VC(){}   // C3417

   // OK
   static VC(){}
   VC(int i){}
};
```
