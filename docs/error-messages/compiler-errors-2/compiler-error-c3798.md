---
description: "Learn more about: Compiler Error C3798"
title: "Compiler Error C3798"
ms.date: "11/04/2016"
f1_keywords: ["C3798"]
helpviewer_keywords: ["C3798"]
ms.assetid: b2f8b1d8-8812-49b8-a346-28e48f02ba5c
---
# Compiler Error C3798

'specifier': property declaration cannot have override specifier (should be placed on property get/set methods instead)

A property was declared incorrectly. For more information, see

- [property](../../extensions/property-cpp-component-extensions.md)

- [abstract](../../extensions/abstract-cpp-component-extensions.md)

- [sealed](../../extensions/sealed-cpp-component-extensions.md)

## Example

The following sample generates C3798

```cpp
// C3798.cpp
// compile with: /clr /c
ref struct A {
   property int Prop_1 abstract;   // C3798
   property int Prop_2 sealed;   // C3798

   // OK
   property int Prop_3 {
      virtual int get() abstract;
      virtual void set(int i) abstract;
   }

   property int Prop_4 {
      virtual int get() sealed;
      virtual void set(int i) sealed;
   }
};
```
