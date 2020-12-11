---
description: "Learn more about: Compiler Error C3642"
title: "Compiler Error C3642"
ms.date: "11/04/2016"
f1_keywords: ["C3642"]
helpviewer_keywords: ["C3642"]
ms.assetid: 429790c2-9614-4d85-b31c-687c8d8f83ff
---
# Compiler Error C3642

'return_type/args' : cannot call a function with __clrcall calling convention from native code

A function that is marked with the [__clrcall](../../cpp/clrcall.md) calling convention cannot be called from native (unmanaged) code.

*return_type/args* is either the name of the function or the type of the `__clrcall` function you are trying to call.  A type is used when you're calling through a function-pointer.

To call a managed function from a native context, you can add a "wrapper" function that will call the `__clrcall` function. Or, you can use the CLR marshalling mechanism; see [How to: Marshal Function Pointers Using PInvoke](../../dotnet/how-to-marshal-function-pointers-using-pinvoke.md) for more information.

The following sample generates C3642:

```cpp
// C3642.cpp
// compile with: /clr
using namespace System;
struct S {
   void Test(String ^ s) {   // CLR type in signature, implicitly __clrcall
      Console::WriteLine(s);
   }
   void Test2(char * s) {
      Test(gcnew String(s));
   }
};

#pragma unmanaged
int main() {
   S s;
   s.Test("abc");   // C3642
   s.Test2("abc");   // OK
}
```
