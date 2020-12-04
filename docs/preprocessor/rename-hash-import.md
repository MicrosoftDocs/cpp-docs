---
description: "Learn more about: rename import attribute"
title: "rename import attribute"
ms.date: "08/29/2019"
helpviewer_keywords: ["rename attribute"]
ms.assetid: 5c5c6153-1087-4b7b-87fb-fc59b90b9975
---
# rename import attribute

**C++ Specific**

Works around name collision problems.

## Syntax

> **#import** *type-library* **rename(** "*OldName*" **,** "*NewName*" **)**

### Parameters

*OldName*\
Old name in the type library.

*NewName*\
Name to be used instead of the old name.

## Remarks

When the **rename** attribute is specified, the compiler replaces all occurrences of *OldName* in *type-library* with the user-supplied *NewName* in the resulting header files.

The **rename** attribute can be used when a name in the type library coincides with a macro definition in the system header files. If this situation isn't resolved, the compiler may issue various syntax errors, such as [Compiler Error C2059](../error-messages/compiler-errors-1/compiler-error-c2059.md) and [Compiler Error C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md).

> [!NOTE]
> The replacement is for a name used in the type library, not for a name used in the resulting header file.

For example, suppose a property named `MyParent` exists in a type library, and a macro `GetMyParent` is defined in a header file and used before `#import`. Since `GetMyParent` is the default name of a wrapper function for the error-handling `get` property, a name collision will occur. To work around the problem, use the following attribute in the `#import` statement:

```cpp
#import MyTypeLib.tlb rename("MyParent","MyParentX")
```

which renames the name `MyParent` in the type library. An attempt to rename the `GetMyParent` wrapper name will fail:

```cpp
#import MyTypeLib.tlb rename("GetMyParent","GetMyParentX")
```

It's because the name `GetMyParent` only occurs in the resulting type library header file.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
