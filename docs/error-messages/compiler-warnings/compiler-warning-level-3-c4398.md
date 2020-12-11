---
description: "Learn more about: Compiler Warning (level 3) C4398"
title: "Compiler Warning (level 3) C4398"
ms.date: "11/04/2016"
f1_keywords: ["C4398"]
helpviewer_keywords: ["C4398"]
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
---
# Compiler Warning (level 3) C4398

> '*variable*' : per-process global object might not work correctly with multiple appdomains; consider using __declspec(appdomain)

## Remarks

A virtual function with [__clrcall](../../cpp/clrcall.md) calling convention in a native type causes the creation of a per application domain vtable. Such a variable may not correct correctly when used in multiple application domains.

You can resolve this warning by explicitly marking the variable `__declspec(appdomain)`. In versions of Visual Studio before Visual Studio 2017, you can resolve this warning by compiling with **/clr:pure**, which makes global variables per appdomain by default. The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

For more information, see [appdomain](../../cpp/appdomain.md) and [Application Domains and Visual C++](../../dotnet/application-domains-and-visual-cpp.md).

## Example

The following sample generates C4398.

```cpp
// C4398.cpp
// compile with: /clr /W3 /c
struct S {
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall
};

S glob_s;   // C4398
__declspec(appdomain) S glob_s2;   // OK
```
