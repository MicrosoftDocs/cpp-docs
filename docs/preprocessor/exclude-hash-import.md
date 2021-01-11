---
description: "Learn more about: exclude import attribute"
title: "exclude import attribute"
ms.date: "08/29/2019"
f1_keywords: ["exclude"]
helpviewer_keywords: ["exclude attribute"]
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
---
# exclude import attribute

**C++ Specific**

Excludes items from the type library header files being generated.

## Syntax

> **#import** *type-library* **exclude(** "*Name1*" [ **,** "*Name2*" ... ] **)**

### Parameters

*Name1*\
First item to be excluded.

*Name2*\
(Optional) Second and later items to be excluded, if necessary.

## Remarks

Type libraries may include definitions of items defined in system headers or other type libraries. This attribute can take any number of arguments, where each is a top-level type library item to be excluded.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
