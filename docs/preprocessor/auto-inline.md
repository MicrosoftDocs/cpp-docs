---
title: "auto_inline | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["auto_inline_CPP", "vc-pragma.auto_inline"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragmas, auto_inline", "auto_inline pragma"]
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# auto_inline
Excludes any functions defined within the range where **off** is specified from being considered as candidates for automatic inline expansion.  
  
## Syntax  
  
```  
#pragma auto_inline( [{on | off}] )  
```  
  
## Remarks  
 To use the **auto_inline** pragma, place it before and immediately after (not in) a function definition. The pragma takes effect at the first function definition after the pragma is seen.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)