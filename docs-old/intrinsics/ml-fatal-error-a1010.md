---
title: "ML Fatal Error A1010"
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
  - "A1010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1010"
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
caps.latest.revision: 6
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
# ML Fatal Error A1010
**unmatched block nesting :**  
  
 A block beginning did not have a matching end, or a block end did not have a matching beginning. One of the following may be involved:  
  
-   A high-level directive such as [.IF](../intrinsics/.if.md), [.REPEAT](../intrinsics/.repeat.md), or [.WHILE](../intrinsics/.while.md).  
  
-   A conditional-assembly directive such as [IF](../intrinsics/if--masm-.md), [REPEAT](../intrinsics/repeat.md), or **WHILE**.  
  
-   A structure or union definition.  
  
-   A procedure definition.  
  
-   A segment definition.  
  
-   A [POPCONTEXT](../intrinsics/popcontext.md) directive.  
  
-   A conditional-assembly directive, such as an [ELSE](../intrinsics/else--masm-.md), [ELSEIF](../intrinsics/elseif--masm-.md), or **ENDIF** without a matching [IF](../intrinsics/if--masm-.md).  
  
## See Also  
 [ML Error Messages](../intrinsics/ml-error-messages.md)