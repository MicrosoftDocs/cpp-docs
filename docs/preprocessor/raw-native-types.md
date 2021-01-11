---
description: "Learn more about: raw_native_types import attribute"
title: "raw_native_types import attribute"
ms.date: "08/29/2019"
f1_keywords: ["raw_native_types"]
helpviewer_keywords: ["raw_native_types attribute"]
ms.assetid: 9f38daa8-8dc0-46a5-aff9-f1ff9c1e6f48
---
# raw_native_types import attribute

**C++ Specific**

Disables the use of COM support classes in the high-level wrapper functions, and forces the use of low-level data types instead.

## Syntax

> **#import** *type-library* **raw_native_types**

## Remarks

By default, the high-level error-handling methods use the COM support classes [_bstr_t](../cpp/bstr-t-class.md) and [_variant_t](../cpp/variant-t-class.md) in place of the `BSTR` and `VARIANT` data types and raw COM interface pointers. These classes encapsulate the details of allocating and deallocating memory storage for these data types, and greatly simplify type casting and conversion operations.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
