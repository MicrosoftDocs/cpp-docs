---
title: "Compiler Error C3351"
description: "Learn more about: Compiler Error C3351"
ms.date: 11/04/2016
f1_keywords: ["C3351"]
helpviewer_keywords: ["C3351"]
---
# Compiler Error C3351

> 'object' : delegate constructor: second argument must be address of a static member function or global function

## Remarks

The compiler expected the address of a function declared **`static`**.

## Example

The following example generates C3351:

```cpp
// C3351a.cpp
// compile with: /clr
delegate int D(int, int);

ref class C {
public:
   int mf(int, int) {
      return 1;
   }

   static int mf2(int, int) {
      return 1;
   }
};

int main() {
   System::Delegate ^pD = gcnew D(nullptr, &C::mf);   // C3351
   System::Delegate ^pD2 = gcnew D(&C::mf2);
}
```
