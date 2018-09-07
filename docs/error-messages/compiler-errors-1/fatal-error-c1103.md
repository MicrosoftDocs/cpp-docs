---
title: "Fatal Error C1103 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1103"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1103"]
ms.assetid: 9d276939-9c47-4235-9d20-76b8434f9731
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1103
fatal error importing progid: 'message'  
  
 The compiler detected a problem importing a type library.  For example, you cannot specify a type library with progid and also specify `no_registry`.  
  
 For more information, see [#import Directive](../../preprocessor/hash-import-directive-cpp.md).  
  
 The following sample will generate C1103:  
  
```  
// C1103.cpp  
#import "progid:a.b.id.1.5" no_registry auto_search   // C1103  
```