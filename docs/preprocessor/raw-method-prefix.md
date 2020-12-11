---
description: "Learn more about: raw_method_prefix"
title: "raw_method_prefix"
ms.date: "08/29/2019"
f1_keywords: ["raw_method_prefix"]
helpviewer_keywords: ["raw_method_prefix attribute"]
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
---
# raw_method_prefix

**C++ Specific**

Specifies a different prefix to avoid name collisions.

## Syntax

> **#import** *type-library* **raw_method_prefix(** "*Prefix*" **)**

### Parameters

*Prefix*\
The prefix to be used.

## Remarks

Low-level properties and methods are exposed by member functions named using a default prefix of **raw_**, to avoid name collisions with the high-level error-handling member functions.

> [!NOTE]
> The effects of the **raw_method_prefix** attribute are unchanged by the presence of the [raw_interfaces_only](raw-interfaces-only.md) attribute. The **raw_method_prefix** always takes precedence over `raw_interfaces_only` in specifying a prefix. If both attributes are used in the same `#import` statement, then the prefix specified by the **raw_method_prefix** attribute is used.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
