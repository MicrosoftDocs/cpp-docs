---
title: "auto_inline | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "auto_inline_CPP"
  - "vc-pragma.auto_inline"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, auto_inline"
  - "auto_inline pragma"
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# auto_inline
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [auto_inline](https://docs.microsoft.com/cpp/preprocessor/auto-inline).  
  
Excludes any functions defined within the range where **off** is specified from being considered as candidates for automatic inline expansion.  
  
## Syntax  
  
```  
  
#pragma auto_inline( [{on | off}] )  
```  
  
## Remarks  
 To use the **auto_inline** pragma, place it before and immediately after (not in) a function definition. The pragma takes effect at the first function definition after the pragma is seen.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)



