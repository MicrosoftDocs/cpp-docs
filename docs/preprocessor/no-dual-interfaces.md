---
description: "Learn more about: no_dual_interfaces import attribute"
title: "no_dual_interfaces import attribute"
ms.date: "08/29/2019"
f1_keywords: ["no_dual_interfaces"]
helpviewer_keywords: ["no_dual_interfaces attribute"]
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
---
# no_dual_interfaces import attribute

**C++ Specific**

Changes the way the compiler generates wrapper functions for dual interface methods.

## Syntax

> **#import** *type-library* **no_dual_interfaces**

## Remarks

Normally, the wrapper calls the method through the virtual function table for the interface. With **no_dual_interfaces**, the wrapper instead calls `IDispatch::Invoke` to invoke the method.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
