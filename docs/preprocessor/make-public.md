---
description: "Learn more about: make_public pragma"
title: "make_public pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.make_public", "make_public_CPP"]
helpviewer_keywords: ["pragmas, make_public", "make_public pragma"]
ms.assetid: c3665f4d-268a-4932-9661-c37c8ae6a341
---
# make_public pragma

Indicates that a native type should have public assembly accessibility.

## Syntax

> **#pragma make_public(** *type* **)**

### Parameters

*type*\
The name of the type you want to have public assembly accessibility.

## Remarks

**make_public** is useful for when the native type you want to reference is from a header file that you can't change. If you want to use the native type in the signature of a public function in a type with public assembly visibility, the native type must also have public assembly accessibility, or the compiler will issue a warning.

**make_public** must be specified at global scope. It's only in effect from the point at which it's declared through to the end of the source code file.

The native type may be implicitly or explicitly private. For more information, see [Type visibility](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility).

## Examples

The following sample is the contents of a header file that contains the definitions for two native structs.

```cpp
// make_public_pragma.h
struct Native_Struct_1 { int i; };
struct Native_Struct_2 { int i; };
```

The following code sample consumes the header file. It shows that, unless you explicitly mark the native structs as public by using **make_public**, the compiler will generate a warning when you attempt to use the native structs in the signature of public function in a public managed type.

```cpp
// make_public_pragma.cpp
// compile with: /c /clr /W1
#pragma warning (default : 4692)
#include "make_public_pragma.h"
#pragma make_public(Native_Struct_1)

public ref struct A {
   void Test(Native_Struct_1 u) {u.i = 0;}   // OK
   void Test(Native_Struct_2 u) {u.i = 0;}   // C4692
};
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
