---
title: "Compiler Error C2521"
description: "Learn more about: Compiler Error C2521"
ms.date: 11/04/2016
f1_keywords: ["C2521"]
helpviewer_keywords: ["C2521"]
---
# Compiler Error C2521

> function does not take any arguments

## Remarks

You attempted to use arguments with a destructor or finalizer.

For more information, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following example generates C2521.

```cpp
// C2521.cpp
// compile with: /clr
ref class R {
protected:
   !R() {}

public:
   void CleanUp() {
      this->!R(4);   // C2521
      this->!R();   // OK
   }
};

int main() {
   R^ r = gcnew R();
   r->CleanUp();
}
```
