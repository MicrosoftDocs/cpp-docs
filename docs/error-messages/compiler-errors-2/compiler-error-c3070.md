---
title: "Compiler Error C3070"
description: "Learn more about: Compiler Error C3070"
ms.date: 11/04/2016
f1_keywords: ["C3070"]
helpviewer_keywords: ["C3070"]
---
# Compiler Error C3070

> 'property': property does not have a 'set' method

## Remarks

A property's set accessor method was not defined. For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Example

The following example generates C3070:

```cpp
// C3070.cpp
// compile with: /clr
ref class R {
public:
   R(int size) {
      m_data = gcnew array<int>(size);
   }

   property int % MyProp[int] {
      int% get(int index) {
         return m_data[index];
      }
   }

   property int % MyProp2[int] {
      int% get(int index) {
         return m_data[index];
      }
      void set(int index, int % value) {}
   }

   property const int % MyProp3[int] {
      const int% get(int index) {
         return m_data[index];
      }
      void set(int index, const int % value) {}
   }

private:
   array<int>^ m_data;
};

int main() {
   R^ r = gcnew R(10);
   r->MyProp[4] = 4;   // C3070

   int value = 4;
   r->MyProp2[4] = value;   // OK
   r->MyProp3[4] = 4;   // OK
}
```
