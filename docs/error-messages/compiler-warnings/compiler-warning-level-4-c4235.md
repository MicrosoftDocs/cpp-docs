---
title: "Compiler Warning (level 4) C4235 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4235"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4235"]
ms.assetid: d4214799-d62c-4674-b4e2-9e201c303303
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4235
nonstandard extension used : 'keyword' keyword not supported on this architecture  
  
 The compiler does not support the keyword you used.  
  
 This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md). For example, to make C4235 into a level 2 warning, use the following line of code  
  
```  
#pragma warning(2:4235)  
```  
  
 in your source code file.