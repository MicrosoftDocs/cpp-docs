---
title: "ML Fatal Error A1008 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A1008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1008"
ms.assetid: fe592f9d-c37b-4cd8-a51d-e3c15ddcab83
caps.latest.revision: 6
author: "corob-msft"
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
  
 Either a macro was not terminated before the end of the file or the terminating directive [ENDM](../../assembler/masm/endm.md) was found outside of a macro block.  
  
 One cause of this error is omission of the dot before [.REPEAT](../../assembler/masm/dot-repeat.md) or [.WHILE](../../assembler/masm/dot-while.md).  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)