---
title: "Fatal Error C1104 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1104"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1104"]
ms.assetid: 45bd85c4-77d3-4d3c-b167-49c563aefb4d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1104
fatal error importing libid: 'message'  
  
 The compiler detected a problem importing a type library.  For example, you cannot specify a type library with libid and also specify `no_registry`.  
  
 For more information, see [#import Directive](../../preprocessor/hash-import-directive-cpp.md).  
  
 The following sample will generate C1104:  
  
```  
// C1104.cpp  
#import "libid:11111111.1111.1111.1111.111111111111" version("4.0") lcid("9") no_registry auto_search   // C1104  
```