---
title: "Exceptions: Throwing Exceptions from Your Own Functions | Microsoft Docs"
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
  - "throwing exceptions, from functions"
  - "functions [C++], throwing exceptions"
  - "exceptions, throwing"
ms.assetid: 492976e8-8804-4234-8e8f-30dffd0501be
caps.latest.revision: 10
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
# Exceptions: Throwing Exceptions from Your Own Functions
It is possible to use the MFC exception-handling paradigm solely to catch exceptions thrown by functions in MFC or other libraries. In addition to catching exceptions thrown by library code, you can throw exceptions from your own code if you are writing functions that can encounter exceptional conditions.  
  
 When an exception is thrown, execution of the current function is stopped and jumps directly to the **catch** block of the innermost exception frame. The exception mechanism bypasses the normal exit path from a function. Therefore, you must be sure to delete those memory blocks that would be deleted in a normal exit.  
  
#### To throw an exception  
  
1.  Use one of the MFC helper functions, such as `AfxThrowMemoryException`. These functions throw a preallocated exception object of the appropriate type.  
  
     In the following example, a function tries to allocate two memory blocks and throws an exception if either allocation fails:  
  
     [!code-cpp[NVC_MFCExceptions#17](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_1.cpp)]  
  
     If the first allocation fails, you can simply throw the memory exception. If the first allocation is successful but the second one fails, you must free the first allocation block before throwing the exception. If both allocations succeed, you can proceed normally and free the blocks when exiting the function.  
  
     – or –  
  
2.  Use a user-defined exception to indicate a problem condition. You can throw an item of any type, even an entire class, as your exception.  
  
     The following example attempts to play a sound through a wave device and throws an exception if there is a failure.  
  
     [!code-cpp[NVC_MFCExceptions#18](../mfc/codesnippet/cpp/exceptions-throwing-exceptions-from-your-own-functions_2.cpp)]  
  
> [!NOTE]
>  MFC's default handling of exceptions applies only to pointers to `CException` objects (and objects of `CException`-derived classes). The example above bypasses MFC's exception mechanism.  
  
## See Also  
 [Exception Handling](../mfc/exception-handling-in-mfc.md)

