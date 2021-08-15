---
description: "Learn more about: Compiler Warning C4368"
title: "Compiler Warning C4368"
ms.date: "11/04/2016"
f1_keywords: ["C4368"]
helpviewer_keywords: ["C4368"]
ms.assetid: cb85bcee-fd3d-4aa5-b626-2324f07a4f1b
---
# Compiler Warning C4368

cannot define 'member' as a member of managed 'type': mixed types are not supported

You cannot embed a native data member in a CLR type.

You can, however, declare a pointer to a native type and control its lifetime in the constructor and destructor and finalizer of your managed class. For more information see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

This warning is always issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to disable C4368.

## Example

The following sample generates C4368.

```cpp
// C4368.cpp
// compile with: /clr /c
struct N {};
ref struct O {};
ref struct R {
    R() : m_p( new N ) {}
    ~R() { delete m_p; }

   property N prop;   // C4368
   int i[10];   // C4368

   property O ^ prop2;   // OK
   N * m_p;   // OK
};
```
