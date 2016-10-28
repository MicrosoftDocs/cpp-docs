---
title: "Debugging and Exception Classes"
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
  - "vc.classes.debug"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "debugging [MFC], exception classes"
  - "debugging [MFC], classes for debugging"
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
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
# Debugging and Exception Classes
These classes provide support for debugging dynamic memory allocation and for passing exception information from the function where the exception is thrown to the function where it is caught.  
  
 Use classes [CDumpContext](../mfcref/cdumpcontext-class.md) and [CMemoryState](../mfcref/cmemorystate-structure.md) during development to assist with debugging, as described in [Debugging MFC Applications](../Topic/MFC%20Debugging%20Techniques.md). Use [CRuntimeClass](../mfcref/cruntimeclass-structure.md) to determine the class of any object at run time, as described in the article [Accessing Run-Time Class Information](../mfc/accessing-run-time-class-information.md). The framework uses `CRuntimeClass` to create objects of a particular class dynamically.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)