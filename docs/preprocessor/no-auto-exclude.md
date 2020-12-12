---
description: "Learn more about: no_auto_exclude import attribute"
title: "no_auto_exclude import attribute"
ms.date: "08/29/2019"
f1_keywords: ["no_auto_exclude"]
helpviewer_keywords: ["no_auto_exclude attribute"]
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
---
# no_auto_exclude import attribute

**C++ Specific**

Disables automatic exclusion.

## Syntax

> **#import** *type-library* **no_auto_exclude**

## Remarks

Type libraries may include definitions of items defined in system headers or other type libraries. `#import` attempts to avoid multiple definition errors by automatically excluding such items. It causes [Compiler Warning (level 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) to be issued for each item to be excluded. You can disable the automatic exclusion by using this attribute.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
