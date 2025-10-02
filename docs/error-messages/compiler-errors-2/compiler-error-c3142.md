---
title: "Compiler Error C3142"
description: "Learn more about: Compiler Error C3142"
ms.date: 11/04/2016
f1_keywords: ["C3142"]
helpviewer_keywords: ["C3142"]
---
# Compiler Error C3142

> 'property_name' : you cannot take the address of a property

## Remarks

The address of a property is not available to the developer.

## Example

The following example generates C3142:

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
