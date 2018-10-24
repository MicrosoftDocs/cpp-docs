---
title: "high_property_prefixes | Microsoft Docs"
ms.custom: ""
ms.date: "10/18/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["high_property_prefixes"]
dev_langs: ["C++"]
helpviewer_keywords: ["high_property_prefixes attribute"]
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# high_property_prefixes

**C++ Specific**

Specifies alternate prefixes for three property methods.

## Syntax

```
high_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")
```

### Parameters

*GetPrefix*<br/>
Prefix to be used for the `propget` methods.

*PutPrefix*<br/>
Prefix to be used for the `propput` methods.

*PutRefPrefix*<br/>
Prefix to be used for the `propputref` methods.

## Remarks

By default, high-level error-handling `propget`, `propput`, and `propputref` methods are exposed by member functions named with prefixes `Get`, `Put`, and `PutRef`, respectively.

**END C++ Specific**

## See Also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)