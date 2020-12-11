---
description: "Learn more about: Compiler Error C3142"
title: "Compiler Error C3142"
ms.date: "11/04/2016"
f1_keywords: ["C3142"]
helpviewer_keywords: ["C3142"]
ms.assetid: 795137ad-d00a-4a9c-9665-0cd8bfb5da8b
---
# Compiler Error C3142

'property_name' : you cannot take the address of a property

The address of a property is not available to the developer.

The following sample generates C3142:

```cpp
// C3142_2.cpp
// compile with: /clr
using namespace System;
ref class CSize {
private:
   property int Size {
      int get();
   }
};

int main() {
    &CSize::Size; // C3142
}
```
