---
description: "Learn more about: Compiler Error C3767"
title: "Compiler Error C3767"
ms.date: "11/04/2016"
f1_keywords: ["C3767"]
helpviewer_keywords: ["C3767"]
ms.assetid: 5247cdcd-639c-4527-bd37-37e74c4e8fab
---
# Compiler Error C3767

'function' candidate function(s) not accessible

A friend function defined in a class is not supposed to be treated as if it were defined and declared in the global namespace scope. It can, however, be found by argument-dependent lookup.

C3767 may also be caused by a breaking change: native types are now private by default in a **/clr** compilation; see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) for more information.

## Example

The following sample generates C3767:

```cpp
// C3767a.cpp
// compile with: /clr
using namespace System;
public delegate void TestDel();

public ref class MyClass {
public:
   static event TestDel^ MyClass_Event;
};

public ref class MyClass2 : public MyClass {
public:
   void Test() {
      MyClass^ patient = gcnew MyClass;
      patient->MyClass_Event();
    }
};

int main() {
   MyClass^ x = gcnew MyClass;
   x->MyClass_Event();   // C3767

   // OK
   MyClass2^ y = gcnew MyClass2();
   y->Test();
};
```

The following sample generates C3767:

```cpp
// C3767c.cpp
// compile with: /clr /c

ref class Base  {
protected:
   void Method() {
      System::Console::WriteLine("protected");
   }
};

ref class Der : public Base {
   void Method() {
      ((Base^)this)->Method();   // C3767
      // try the following line instead
      // Base::Method();
   }
};
```
