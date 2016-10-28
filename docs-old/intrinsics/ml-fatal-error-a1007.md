---
title: "ML Fatal Error A1007"
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
  - "A1007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1007"
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
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
# ML Fatal Error A1007
**nesting level too deep**  
  
 The assembler reached its nesting limit. The limit is 20 levels except where noted otherwise.  
  
 One of the following was nested too deeply:  
  
-   A high-level directive such as [.IF](../intrinsics/.if.md), [.REPEAT](../intrinsics/.repeat.md), or [.WHILE](../intrinsics/.while.md).  
  
-   A structure definition.  
  
-   A conditional-assembly directive.  
  
-   A procedure definition.  
  
-   A [PUSHCONTEXT](../intrinsics/pushcontext.md) directive (the limit is 10).  
  
-   A segment definition.  
  
-   An include file.  
  
-   A macro.  
  
## See Also  
 [ML Error Messages](../intrinsics/ml-error-messages.md)