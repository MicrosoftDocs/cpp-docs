---
title: "push_macro | Microsoft Docs"
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
  - "vc-pragma.push_macro"
  - "push_macro_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, push_macro"
  - "push_macro pragma"
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# push_macro
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [push_macro](https://docs.microsoft.com/cpp/preprocessor/push-macro).  
  
Saves the value of the *macro_name* macro on the top of the stack for this macro.  
  
## Syntax  
  
```  
  
#pragma push_macro("  
macro_name  
")  
  
```  
  
## Remarks  
 You can retrieve the value for *macro_name* with **pop_macro**.  
  
 See [pop_macro](../preprocessor/pop-macro.md) for a sample.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)



