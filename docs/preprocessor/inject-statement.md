---
description: "Learn more about: inject_statement import attribute"
title: "inject_statement import attribute"
ms.date: "08/29/2019"
f1_keywords: ["inject_statement"]
helpviewer_keywords: ["inject_statement attribute"]
ms.assetid: 07d6f0f4-d9fb-4e18-aa62-f235f142ff5e
---
# inject_statement import attribute

**C++ Specific**

Inserts its argument as source text into the type-library header.

## Syntax

> **#import** *type-library* **inject_statement(** "*source-text*" **)**

### Parameters

*source-text*\
Source text to be inserted into the type library header file.

## Remarks

The text is placed at the beginning of the namespace declaration that wraps the *type-library* contents in the header file.

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
