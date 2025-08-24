---
title: "Compiler Error C3917"
description: "Learn more about: Compiler Error C3917"
ms.date: 11/04/2016
f1_keywords: ["C3917"]
helpviewer_keywords: ["C3917"]
---
# Compiler Error C3917

> '*property*': obsolete construct declaration style

## Remarks

A property or event definition used syntax from a version before Visual Studio 2005.

For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Example

```cpp
// C3917.cpp
// compile with: /clr /c
public ref class  C {
private:
   int m_length;
public:
   C() {
      m_length = 0;
   }

   property int get_Length();   // C3917

   // The correct property definition:
   property int Length {
      int get() {
         return m_length;
      }

      void set( int i ) {
         m_length = i;
      }
   }
};
```
