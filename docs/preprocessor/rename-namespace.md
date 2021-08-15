---
description: "Learn more about: rename_namespace import attribute"
title: "rename_namespace import attribute"
ms.date: "08/29/2019"
f1_keywords: ["rename_namespace"]
helpviewer_keywords: ["rename_namespace attribute"]
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
---
# rename_namespace import attribute

**C++ Specific**

Renames the namespace that contains the contents of the type library.

## Syntax

> **#import** *type-library* **rename_namespace(** "*NewName*" **)**

### Parameters

*NewName*\
The new name of the namespace.

## Remarks

The **rename_namespace** attribute takes a single argument, *NewName*, which specifies the new name for the namespace.

To remove the namespace, use the [no_namespace](../preprocessor/no-namespace.md) attribute instead.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
