---
title: "Linker Tools Error LNK1332"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1332"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1332"
ms.assetid: b31d5ca0-c27f-4177-896b-2637dccbde24
caps.latest.revision: 4
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
# Linker Tools Error LNK1332
detected\<count> Windows Runtime types imported in one module and defined in another module  
  
 When it produced the current target, the linker detected <`count`> Windows Runtime types, each of which is imported in one module and also defined in another module.  
  
### To correct this error  
  
-   Correct each of the LNK2039 errors in the build according to the suggestion in the error message.  
  
## See Also  
 [Linker Tools Error LNK2039](../othererrors/linker-tools-error-lnk2039.md)   
 [Linker Tools Errors and Warnings](../othererrors/linker-tools-errors-and-warnings.md)