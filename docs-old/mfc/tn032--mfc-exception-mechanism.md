---
title: "TN032: MFC Exception Mechanism"
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
  - "vc.mfc.exceptions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN032"
  - "MFC, exceptions"
  - "CException class, using"
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
caps.latest.revision: 7
ms.author: "mblome"
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
# TN032: MFC Exception Mechanism
Previous versions of Visual C++ did not support the standard C++ exception mechanism, and MFC provided macros **TRY/CATCH/THROW** that were used instead. This version of Visual C++ fully supports C++ exceptions. This note covered some of the advanced implementation details of the previous macros including how to automatically cleanup stack based objects. Because C++ exceptions support stack unwinding by default, this technical note is no longer necessary.  
  
 Refer to [Exceptions: Using MFC Macros and C++ Exceptions](../mfc/exceptions--using-mfc-macros-and-c---exceptions.md) for more information on the differences between the MFC macros and the new C++ keywords.  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)