---
description: "Learn more about: Compiler Warning (level 1) C4929"
title: "Compiler Warning (level 1) C4929"
ms.date: "11/04/2016"
f1_keywords: ["C4929"]
helpviewer_keywords: ["C4929"]
ms.assetid: 95f8ab4f-4468-4caa-acd5-8f4592f03b3c
---
# Compiler Warning (level 1) C4929

'file': typelibrary contains a union; ignoring the 'embedded_idl' qualifier

The embedded_idl attribute of [#import](../../preprocessor/hash-import-directive-cpp.md) could not be applied to the type library because a union is present in the type library. To resolve this warning, don't use embedded_idl.

## Examples

The following sample defines a component.

```cpp
// C4929a.cpp
// compile with: /LD /link /TLBOUT:C4929a.tlb
#include <objbase.h>
[module(name="Test")];
[public, switch_type(short)] typedef union _TD_UNION_TYPE   {
   [case(24)]
      float fM;
   [case(25)]
      double dMN;
   [default]
      int x;
} TD_UNION_TYPE;

[export, public] typedef struct _TDW_TYPE {
   [switch_is(sU)] TD_UNION_TYPE w;
      short sU;
} TD_TYPE;

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface I {
   HRESULT f(TD_TYPE*);
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
struct C : I {
   HRESULT f(TD_TYPE*) { return 0; }
};
```

The following sample generates C4929.

```cpp
// C4929b.cpp
// compile with: /c /W1
#import "C4929a.tlb" embedded_idl   // C4929
```
