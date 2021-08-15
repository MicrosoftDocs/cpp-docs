---
description: "Learn more about: Compiler Warning (level 1) C4461"
title: "Compiler Warning (level 1) C4461"
ms.date: "11/04/2016"
f1_keywords: ["C4461"]
helpviewer_keywords: ["C4461"]
ms.assetid: 104ffecc-3dd4-4cb1-89a8-81154fbe46d9
---
# Compiler Warning (level 1) C4461

'type' : this class has a finalizer 'finalizer' but no destructor 'dtor'

The presence of a finalizer in a type implies resources to delete. Unless a finalizer is explicitly called from the type's destructor, the common language runtime determines when to run the finalizer, after your object goes out of scope.

If you define a destructor in the type and explicitly call the finalizer from the destructor, you can deterministically run your finalizer.

For more information, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## Example

The following sample generates C4461.

```cpp
// C4461.cpp
// compile with: /W1 /clr /c
ref class A {
protected:
   !A() {}   // C4461
};

// OK
ref struct B {
   ~B() {
      B::!B();
   }

   !B() {}
};
```
