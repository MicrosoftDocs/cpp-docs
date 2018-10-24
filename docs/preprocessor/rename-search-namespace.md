---
title: "rename_search_namespace | Microsoft Docs"
ms.custom: ""
ms.date: "10/18/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["rename_search_namespace"]
dev_langs: ["C++"]
helpviewer_keywords: ["rename_search_namespace attribute"]
ms.assetid: 47c9d7fd-59dc-4c62-87a1-9011a0040167
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# rename_search_namespace

**C++ Specific**

Has the same functionality as the [rename_namespace](../preprocessor/rename-namespace.md) attribute but is used on type libraries that you use the `#import` directive with the [auto_search](../preprocessor/auto-search.md) attribute.

## Syntax

```
rename_search_namespace("NewName")
```

### Parameters

*NewName*<br/>
The new name of the namespace.

## Remarks

**END C++ Specific**

## See Also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)