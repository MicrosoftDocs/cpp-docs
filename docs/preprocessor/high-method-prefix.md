---
title: "high_method_prefix | Microsoft Docs"
ms.custom: ""
ms.date: "10/18/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["high_method_prefix"]
dev_langs: ["C++"]
helpviewer_keywords: ["high_method_prefix attribute"]
ms.assetid: cacebf09-12f5-4919-ad40-939e206e340c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# high_method_prefix

**C++ Specific**

Specifies a prefix to be used in naming high-level properties and methods.

## Syntax

```
high_method_prefix("Prefix")
```

### Parameters

*Prefix*<br/>
Prefix to be used.

## Remarks

By default, high-level error-handling properties and methods are exposed by member functions named without a prefix. The names are from the type library.

**END C++ Specific**

## See Also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)