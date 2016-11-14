---
title: "Exceptions: Exceptions in Constructors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "constructors [C++], exceptions"
  - "throwing exceptions, in constructors"
  - "exceptions, in constructors"
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
caps.latest.revision: 9
author: "mikeblome"
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
# Exceptions: Exceptions in Constructors
When throwing an exception in a constructor, clean up whatever objects and memory allocations you have made prior to throwing the exception, as explained in [Exceptions: Throwing Exceptions from Your Own Functions](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md).  
  
 When throwing an exception in a constructor, the memory for the object itself has already been allocated by the time the constructor is called. So, the compiler will automatically deallocate the memory occupied by the object after the exception is thrown.  
  
 For more information, see [Exceptions: Freeing Objects in Exceptions](../mfc/exceptions-freeing-objects-in-exceptions.md).  
  
## See Also  
 [Exception Handling](../mfc/exception-handling-in-mfc.md)

