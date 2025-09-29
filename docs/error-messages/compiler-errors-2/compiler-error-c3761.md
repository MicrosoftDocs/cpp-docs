---
title: "Compiler Error C3761"
description: "Learn more about: Compiler Error C3761"
ms.date: 11/04/2016
f1_keywords: ["C3761"]
helpviewer_keywords: ["C3761"]
---
# Compiler Error C3761

> 'function': 'retval' can only appear on the last argument of a function

## Remarks

The [retval](../../windows/attributes/retval.md) attribute was used on a function argument that was not the last argument in the list.

## Example

The following example generates C3761:

```cpp
// C3761.cpp
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>

[ module(name=test) ];

[dispinterface]
__interface I
{
   [id(1)] HRESULT func([out, retval] int* i, [in] int j);
   // try the following line instead
   // [id(1)] HRESULT func([in] int i, [out, retval] int* j);
};

[coclass]
struct C : I {   // C3761
   HRESULT func(int* i, int j)
   // try the following line instead
   // HRESULT func(int j, int* i)
   {
      return S_OK;
   }
};

int main()
{
}
```
