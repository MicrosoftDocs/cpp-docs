---
title: "GOTO (MASM)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "goto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GOTO directive"
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# GOTO (MASM)
Transfers assembly to the line marked **:***macrolabel*.  
  
## Syntax  
  
```  
  
GOTO   
macrolabel  
  
```  
  
## Remarks  
 **GOTO** is permitted only inside [MACRO](../intrinsics/macro.md), [FOR](../intrinsics/for--masm-.md), [FORC](../intrinsics/forc.md), [REPEAT](../intrinsics/repeat.md), and **WHILE** blocks. The label must be the only directive on the line and must be preceded by a leading colon.  
  
## See Also  
 [Directives Reference](../intrinsics/directives-reference.md)