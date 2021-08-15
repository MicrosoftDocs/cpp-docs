---
description: "Learn more about: no_implementation import attribute"
title: "no_implementation import attribute"
ms.date: "08/29/2019"
f1_keywords: ["no_implementation"]
helpviewer_keywords: ["no_implementation attribute"]
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
---
# no_implementation import attribute

**C++ Specific**

Suppresses the generation of the `.tli` header, which contains the implementations of the wrapper member functions.

## Syntax

> **#import** *type-library* **no_implementation**

## Remarks

If this attribute is specified, the `.tlh` header, with the declarations to expose type-library items, will be generated without an `#include` statement to include the `.tli` header file.

This attribute is used in conjunction with [implementation_only](../preprocessor/implementation-only.md).

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
