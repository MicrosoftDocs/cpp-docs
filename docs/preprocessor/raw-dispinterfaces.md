---
description: "Learn more about: raw_dispinterfaces import attribute"
title: "raw_dispinterfaces import attribute"
ms.date: "08/29/2019"
f1_keywords: ["raw_dispinterfaces"]
helpviewer_keywords: ["raw_dispinterfaces attribute"]
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
---
# raw_dispinterfaces import attribute

**C++ Specific**

Tells the compiler to generate low-level wrapper functions for dispinterface methods, and for properties that call `IDispatch::Invoke` and return the HRESULT error code.

## Syntax

> **#import** *type-library* **raw_dispinterfaces**

## Remarks

If this attribute isn't specified, only high-level wrappers are generated, which throw C++ exceptions on failure.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
