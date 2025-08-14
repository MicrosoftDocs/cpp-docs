---
title: "Compiler Error C3137"
description: "Learn more about: Compiler Error C3137"
ms.date: 11/04/2016
f1_keywords: ["C3137"]
helpviewer_keywords: ["C3137"]
---
# Compiler Error C3137

> 'property' : a property cannot be initialized

## Remarks

A property cannot be initialized, for example, in a constructor's initialization list.

## Example

The following example generates C3137:

```cpp
// C3137.cpp
// compile with: /clr /c
ref class CMyClass {
public:
   property int Size {
      int get() {
         return 0;
      }
      void set( int i ) {}
   }

   CMyClass() : Size( 1 ) {   // C3137
      // to resolve this C3137, remove the initializer from the
      // ctor declaration and perform the assignment as follows
      // Size = 1;
   }
};
```
