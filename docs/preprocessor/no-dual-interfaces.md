---
title: "no_dual_interfaces | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["no_dual_interfaces"]
dev_langs: ["C++"]
helpviewer_keywords: ["no_dual_interfaces attribute"]
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# no_dual_interfaces
**C++ Specific**

Changes the way the compiler generates wrapper functions for dual interface methods.

## Syntax

```
no_dual_interfaces
```

## Remarks

Normally, the wrapper will call the method through the virtual function table for the interface. With **no_dual_interfaces**, the wrapper instead calls `IDispatch::Invoke` to invoke the method.

**END C++ Specific**

## See Also

[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import Directive](../preprocessor/hash-import-directive-cpp.md)