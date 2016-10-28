---
title: "ML Fatal Error A1011"
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
  - "A1011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1011"
ms.assetid: 7fbf092d-4189-4330-a884-dfa2268fc3dd
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
# ML Fatal Error A1011
**directive must be in control block**  
  
 The assembler found a high-level directive where one was not expected. One of the following directives was found:  
  
-   [.ELSE](../intrinsics/.else.md) without [.IF](../intrinsics/.if.md)  
  
-   [.ENDIF](../intrinsics/.endif.md) without [.IF](../intrinsics/.if.md)  
  
-   [.ENDW](../intrinsics/.endw.md) without [.WHILE](../intrinsics/.while.md)  
  
-   [.UNTILCXZ](../intrinsics/.untilcxz.md) without [.REPEAT](../intrinsics/.repeat.md)  
  
-   [.CONTINUE](../intrinsics/.continue.md) without [.WHILE](../intrinsics/.while.md) or [.REPEAT](../intrinsics/.repeat.md)  
  
-   [.BREAK](../intrinsics/.break.md) without [.WHILE](../intrinsics/.while.md) or [.REPEAT](../intrinsics/.repeat.md)  
  
-   [.ELSE](../intrinsics/.else.md) following `.ELSE`  
  
## See Also  
 [ML Error Messages](../intrinsics/ml-error-messages.md)