---
description: "Learn more about: high_property_prefixes import attribute"
title: "high_property_prefixes import attribute"
ms.date: "08/29/2019"
f1_keywords: ["high_property_prefixes"]
helpviewer_keywords: ["high_property_prefixes attribute"]
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
---
# high_property_prefixes import attribute

**C++ Specific**

Specifies alternate prefixes for three property methods.

## Syntax

> **#import** *type-library* **high_property_prefixes(** "*GetPrefix*" **,** "*PutPrefix*" **,** "*PutRefPrefix*" **)**

### Parameters

*GetPrefix*\
Prefix to be used for the `propget` methods.

*PutPrefix*\
Prefix to be used for the `propput` methods.

*PutRefPrefix*\
Prefix to be used for the `propputref` methods.

## Remarks

By default, high-level error-handling `propget`, `propput`, and `propputref` methods are exposed by member functions named with prefixes `Get`, `Put`, and `PutRef`, respectively.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
