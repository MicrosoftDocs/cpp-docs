---
title: "ML Fatal Error A1008"
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
  - "A1008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1008"
ms.assetid: fe592f9d-c37b-4cd8-a51d-e3c15ddcab83
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
# ML Fatal Error A1008
**unmatched macro nesting**  
  
 Either a macro was not terminated before the end of the file or the terminating directive [ENDM](../intrinsics/endm.md) was found outside of a macro block.  
  
 One cause of this error is omission of the dot before [.REPEAT](../intrinsics/.repeat.md) or [.WHILE](../intrinsics/.while.md).  
  
## See Also  
 [ML Error Messages](../intrinsics/ml-error-messages.md)