---
description: "Learn more about: Compiler Error C3162"
title: "Compiler Error C3162"
ms.date: "11/04/2016"
f1_keywords: ["C3162"]
helpviewer_keywords: ["C3162"]
ms.assetid: 0d4c4a24-1456-4191-b7d8-c38cb7b17c32
---
# Compiler Error C3162

'type' : a reference type which has a destructor cannot be used as the type of static data member 'member'

The common language runtime cannot know when to run a user-defined destructor when the class also contains static member function.

A destructor will never be run unless the object is deleted explicitly.

For more information, see,

- [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Common Visual C++ 64-bit Migration Issues](../../build/common-visual-cpp-64-bit-migration-issues.md)

## Example

The following sample generates C3162.

```cpp
// C3162.cpp
// compile with: /clr /c
ref struct A {
   ~A() { System::Console::WriteLine("in destructor"); }
   static A i;   // C3162
   static A^ a = gcnew A;   // OK
};

int main() {
   A ^ a = gcnew A;
   delete a;
}
```
