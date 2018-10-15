---
title: "new (new slot in vtable)  (C++/CLI and C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "10/12/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["new keyword [C++]"]
ms.assetid: 1a9a5704-f02f-46ae-ad65-f0f2b6dbabc3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# new (new slot in vtable)  (C++/CLI and C++/CX)

The **new** keyword indicates that a virtual member will get a new slot in the vtable.

## All Runtimes

(There are no remarks for this language feature that apply to all runtimes.)

## Windows Runtime

Not supported in Windows Runtime.

## Common Language Runtime

### Remarks

In a `/clr` compilation, **new** indicates that a virtual member will get a new slot in the vtable; that the function does not override a base class method.

**new** causes the newslot modifier to be added to the IL for the function.  For more information about newslot, see:

- [MethodInfo.GetBaseDefinition Method](https://msdn.microsoft.com/library/system.reflection.methodinfo.getbasedefinition.aspx)

- [MethodAttributes Enumeration](https://msdn.microsoft.com/library/system.reflection.methodattributes.aspx)

### Requirements

Compiler option: `/clr`

### Examples

The following sample shows the effect of **new**.

```cpp
// newslot.cpp
// compile with: /clr
ref class C {
public:
   virtual void f() {
      System::Console::WriteLine("C::f() called");
   }

   virtual void g() {
      System::Console::WriteLine("C::g() called");
   }
};

ref class D : public C {
public:
   virtual void f() new {
      System::Console::WriteLine("D::f() called");
   }

   virtual void g() override {
      System::Console::WriteLine("D::g() called");
   }
};

ref class E : public D {
public:
   virtual void f() override {
      System::Console::WriteLine("E::f() called");
   }
};

int main() {
   D^ d = gcnew D;
   C^ c = gcnew D;

   c->f();   // calls C::f
   d->f();   // calls D::f

   c->g();   // calls D::g
   d->g();   // calls D::g

   D ^ e = gcnew E;
   e->f();   // calls E::f
}
```

```Output
C::f() called

D::f() called

D::g() called

D::g() called

E::f() called
```

## See Also

[Component Extensions for .NET and UWP](../windows/component-extensions-for-runtime-platforms.md)<br/>

[Override Specifiers](../windows/override-specifiers-cpp-component-extensions.md)