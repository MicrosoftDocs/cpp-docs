---
description: "Learn more about: new (new slot in vtable)  (C++/CLI and C++/CX)"
title: "new (new slot in vtable)  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["new keyword [C++]"]
ms.assetid: 1a9a5704-f02f-46ae-ad65-f0f2b6dbabc3
---
# new (new slot in vtable)  (C++/CLI and C++/CX)

The **`new`** keyword indicates that a virtual member will get a new slot in the vtable.

## All Runtimes

(There are no remarks for this language feature that apply to all runtimes.)

## Windows Runtime

Not supported in Windows Runtime.

## Common Language Runtime

### Remarks

In a `/clr` compilation, **`new`** indicates that a virtual member will get a new slot in the vtable; that the function does not override a base class method.

**`new`** causes the newslot modifier to be added to the IL for the function.  For more information about newslot, see:

- <xref:System.Reflection.MethodInfo.GetBaseDefinition?displayProperty=nameWithType>

- <xref:System.Reflection.MethodAttributes?displayProperty=nameWithType>

### Requirements

Compiler option: `/clr`

### Examples

The following sample shows the effect of **`new`**.

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

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)<br/>
[Override Specifiers](override-specifiers-cpp-component-extensions.md)
