---
description: "Learn more about: Compiler Error C3519"
title: "Compiler Error C3519"
ms.date: "11/04/2016"
f1_keywords: ["C3519"]
helpviewer_keywords: ["C3519"]
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
---
# Compiler Error C3519

'invalid_param' : invalid parameter to embedded_idl attribute

A parameter was passed to the `embedded_idl` attribute of [#import](../../preprocessor/hash-import-directive-cpp.md), but the compiler did not recognize the parameter.

The only parameters that are allowed for `embedded_idl` are `emitidl` and `no_emitidl`.

The following sample generates C3519:

```cpp
// C3519.cpp
// compile with: /LD
[module(name="MyLib2")];
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidcl")
// C3519
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidl")
// OK
```
