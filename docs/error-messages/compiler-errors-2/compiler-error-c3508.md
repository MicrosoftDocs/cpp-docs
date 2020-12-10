---
description: "Learn more about: Compiler Error C3508"
title: "Compiler Error C3508"
ms.date: "11/04/2016"
f1_keywords: ["C3508"]
helpviewer_keywords: ["C3508"]
ms.assetid: 16d08f89-2f32-44eb-9421-68acecddf49b
---
# Compiler Error C3508

'type': is not a valid Automation type

An invalid type was specified.

## Example

The following sample generates C3508:

```cpp
// C3508.cpp
#define _ATL_DEBUG_QI

#define WIN32_LEAN_AND_MEAN
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

extern "C" int printf_s(const char*, ...);

[module(name=oso)];

union U
// try the following two lines instead
// [export]
// struct U
{
   int i, j;
};

[dispinterface]
__interface I
{
   [id(1)] HRESULT func(U* u);
};

[coclass]
struct C : I
{
   HRESULT func(U*)   // C3508
   {
      return E_FAIL;
   }
};

int main()
{
}
```
