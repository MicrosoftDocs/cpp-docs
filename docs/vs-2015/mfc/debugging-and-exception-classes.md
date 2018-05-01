---
title: "Debugging and Exception Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.debug"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "debugging [MFC], exception classes"
  - "debugging [MFC], classes for debugging"
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Debugging and Exception Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Debugging and Exception Classes](https://docs.microsoft.com/cpp/mfc/debugging-and-exception-classes).  
  
  
These classes provide support for debugging dynamic memory allocation and for passing exception information from the function where the exception is thrown to the function where it is caught.  
  
 Use classes [CDumpContext](../mfc/reference/cdumpcontext-class.md) and [CMemoryState](../mfc/reference/cmemorystate-structure.md) during development to assist with debugging, as described in [Debugging MFC Applications](http://msdn.microsoft.com/library/b154fc31-5e90-4734-8cbd-58dd9fe1f750). Use [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) to determine the class of any object at run time, as described in the article [Accessing Run-Time Class Information](../mfc/accessing-run-time-class-information.md). The framework uses `CRuntimeClass` to create objects of a particular class dynamically.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)





