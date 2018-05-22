---
title: "LOCAL (MASM) | Microsoft Docs"
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
  - "Local"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LOCAL directive"
ms.assetid: 76147e2d-23ca-4f1e-8817-81428becd113
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# LOCAL (MASM)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [LOCAL (MASM)](https://docs.microsoft.com/cpp/assembler/masm/local-masm).  
  
  
In the first directive, within a macro, **LOCAL** defines labels that are unique to each instance of the macro.  
  
## Syntax  
  
```  
  
      LOCAL localname [[, localname]]...  
LOCAL label [[ [count ] ]] [[:type]] [[, label [[ [count] ]] [[type]]]]...  
```  
  
## Remarks  
 In the second directive, within a procedure definition (**PROC**), **LOCAL** creates stack-based variables that exist for the duration of the procedure. The *label* may be a simple variable or an array containing *count* elements.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

