---
description: "Learn more about: Compiler Error C3509"
title: "Compiler Error C3509"
ms.date: "11/04/2016"
f1_keywords: ["C3509"]
helpviewer_keywords: ["C3509"]
ms.assetid: cc2db39a-2f98-4e40-b803-496e585494e6
---
# Compiler Error C3509

'type': invalid Automation return type; when a parameter is marked 'retval', the return type must be 'void', 'HRESULT' or 'SCODE'

A method in a COM interface must return either void or an HRESULT.

The following sample generates C3509:

```cpp
// C3509.cpp
#define _ATL_DEBUG_QI

#define WIN32_LEAN_AND_MEAN   // Exclude rarely-used stuff from Windows headers
#define STRICT
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif

#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
extern CComModule _Module;
#include <atlcom.h>
#include <atlctl.h>
#include <atlstr.h>

[module(name=oso)];

[dispinterface, uuid(00000000-0000-0000-0000-000000000001)]
__interface I {
   [id(1)] int f([out, retval] int*);   // C3509
   // try the following line instead
   // [id(1)] void f([out, retval] int*);
};

[coclass, uuid(00000000-0000-0000-0000-000000000002)]
struct C : I {
   int f(int*) {
   // try the following line instead, and delete return statement
   // void f(int*) {
      return 0;
   }
};

int main() {
}
```
