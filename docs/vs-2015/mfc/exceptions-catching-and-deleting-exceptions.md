---
title: "Exceptions: Catching and Deleting Exceptions | Microsoft Docs"
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
  - "exceptions, deleting"
  - "AND_CATCH macro"
  - "try-catch exception handling, catching and deleting exceptions"
  - "exception handling, catching and deleting exceptions"
  - "catch blocks, catching and deleting exceptions"
  - "execution, returns from within catch block"
ms.assetid: 7c233ff0-89de-4de0-a68a-9e9cdb164311
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Exceptions: Catching and Deleting Exceptions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Exceptions: Catching and Deleting Exceptions](https://docs.microsoft.com/cpp/mfc/exceptions-catching-and-deleting-exceptions).  
  
  
The following instructions and examples show you how to catch and delete exceptions. For more information on the **try**, **catch**, and `throw` keywords, see [C++ Exception Handling](../cpp/cpp-exception-handling.md).  
  
 Your exception handlers must delete exception objects they handle, because failure to delete the exception causes a memory leak whenever that code catches an exception.  
  
 Your **catch** block must delete an exception when:  
  
-   The **catch** block throws a new exception.  
  
     Of course, you must not delete the exception if you throw the same exception again:  
  
     [!code-cpp[NVC_MFCExceptions#3](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCExceptions/Cpp/MFCExceptions.cpp#3)]  
  
-   Execution returns from within the **catch** block.  
  
> [!NOTE]
>  When deleting a `CException`, use the **Delete** member function to delete the exception. Do not use the **delete** keyword, because it can fail if the exception is not on the heap.  
  
#### To catch and delete exceptions  
  
1.  Use the **try** keyword to set up a **try** block. Execute any program statements that might throw an exception within a **try** block.  
  
     Use the **catch** keyword to set up a **catch** block. Place exception-handling code in a **catch** block. The code in the **catch** block is executed only if the code within the **try** block throws an exception of the type specified in the **catch** statement.  
  
     The following skeleton shows how **try** and **catch** blocks are normally arranged:  
  
     [!code-cpp[NVC_MFCExceptions#4](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCExceptions/Cpp/MFCExceptions.cpp#4)]  
  
     When an exception is thrown, control passes to the first **catch** block whose exception-declaration matches the type of the exception. You can selectively handle different types of exceptions with sequential **catch** blocks as listed below:  
  
     [!code-cpp[NVC_MFCExceptions#5](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCExceptions/Cpp/MFCExceptions.cpp#5)]  
  
 For more information, see [Exceptions: Converting from MFC Exception Macros](../mfc/exceptions-converting-from-mfc-exception-macros.md).  
  
## See Also  
 [Exception Handling](../mfc/exception-handling-in-mfc.md)





