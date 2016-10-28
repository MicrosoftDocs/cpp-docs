---
title: "ML Nonfatal Error A2006"
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
  - "A2006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2006"
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
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
# ML Nonfatal Error A2006
**undefined symbol : identifier**  
  
 An attempt was made to use a symbol that was not defined.  
  
 One of the following may have occurred:  
  
-   A symbol was not defined.  
  
-   A field was not a member of the specified structure.  
  
-   A symbol was defined in an include file that was not included.  
  
-   An external symbol was used without an [EXTERN](../intrinsics/extern--masm-.md) or [EXTERNDEF](../intrinsics/externdef.md) directive.  
  
-   A symbol name was misspelled.  
  
-   A local code label was referenced outside of its scope.  
  
## See Also  
 [ML Error Messages](../intrinsics/ml-error-messages.md)