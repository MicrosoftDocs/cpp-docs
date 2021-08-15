---
description: "Learn more about: Linker Tools Error LNK2022"
title: "Linker Tools Error LNK2022"
ms.date: "11/04/2016"
f1_keywords: ["LNK2022"]
helpviewer_keywords: ["LNK2022"]
ms.assetid: d2128c73-dde3-4b8e-a9b2-0a153acefb3b
---
# Linker Tools Error LNK2022

> metadata operation failed (*HRESULT*) : *error_message*

The linker detected an error while merging metadata. The metadata errors must be resolved to link successfully.

One way to diagnose this problem is to run **ildasm -tokens** on the object files to find which types have the tokens listed in `error_message`, and look for differences.  In metadata, two different types with the same name is not valid, even if the just LayoutType attribute is different.

One reason for LNK2022 is when a type (such as a struct) exists in multiple compilands with the same name, but with conflicting definitions, and when you compile with [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  In this case, make sure that the type has an identical definition in all compilands.  The type name is listed in `error_message`.

Another possible cause for LNK2022 is when the linker finds a metadata file in a different location than was specified to the compiler (with [#using](../../preprocessor/hash-using-directive-cpp.md) ). Make sure that the metadata file (.dll or .netmodule) is in the same location when passed to the linker, as it was when it was passed to the compiler.

When building an ATL application, the use of the macro `_ATL_MIXED` is required in all compilands, if it is used in at least one.

## Examples

The following sample defines an empty type.

```cpp
// LNK2022_a.cpp
// compile with: /clr /c
public ref class Test {};
```

This sample shows that you cannot link two source code files that contain types of the same name but different definitions.

The following sample generates LNK2022.

```cpp
// LNK2022_b.cpp
// compile with: LNK2022_a.cpp /clr /LD
// LNK2022 expected
public ref class Test {
   void func() {}
   int var;
};
```
