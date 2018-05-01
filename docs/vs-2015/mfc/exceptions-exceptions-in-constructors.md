---
title: "Exceptions: Exceptions in Constructors | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Exceptions: Exceptions in Constructors
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Exceptions: Exceptions in Constructors](https://docs.microsoft.com/cpp/mfc/exceptions-exceptions-in-constructors).  
  
  
When throwing an exception in a constructor, clean up whatever objects and memory allocations you have made prior to throwing the exception, as explained in [Exceptions: Throwing Exceptions from Your Own Functions](../mfc/exceptions-throwing-exceptions-from-your-own-functions.md).  
  
 When throwing an exception in a constructor, the memory for the object itself has already been allocated by the time the constructor is called. So, the compiler will automatically deallocate the memory occupied by the object after the exception is thrown.  
  
 For more information, see [Exceptions: Freeing Objects in Exceptions](../mfc/exceptions-freeing-objects-in-exceptions.md).  
  
## See Also  
 [Exception Handling](../mfc/exception-handling-in-mfc.md)





