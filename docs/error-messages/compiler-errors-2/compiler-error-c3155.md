---
description: "Learn more about: Compiler Error C3155"
title: "Compiler Error C3155"
ms.date: "11/04/2016"
f1_keywords: ["C3155"]
helpviewer_keywords: ["C3155"]
ms.assetid: b04a42e1-64e7-40f8-81fe-c7945348b2cf
---
# Compiler Error C3155

attributes are not allowed in a property indexer

An indexed property was declared incorrectly. For more information, see [How to: Use Properties in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).

## Example

The following sample generates C3155.

```cpp
// C3155.cpp
// compile with: /clr /c
using namespace System;
ref struct R {
   property int F[[ParamArray] int] {   // C3155
   // try the following line instead
   // property int F[ int] {   // OK
      int get(int i) {
         return 0;
      }
   }
};
```
