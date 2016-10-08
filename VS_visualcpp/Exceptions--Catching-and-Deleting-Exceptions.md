---
title: "Exceptions: Catching and Deleting Exceptions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7c233ff0-89de-4de0-a68a-9e9cdb164311
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Exceptions: Catching and Deleting Exceptions
The following instructions and examples show you how to catch and delete exceptions. For more information on the **try**, **catch**, and `throw` keywords, see [C++ Exception Handling](../VS_visualcpp/C---Exception-Handling.md).  
  
 Your exception handlers must delete exception objects they handle, because failure to delete the exception causes a memory leak whenever that code catches an exception.  
  
 Your **catch** block must delete an exception when:  
  
-   The **catch** block throws a new exception.  
  
     Of course, you must not delete the exception if you throw the same exception again:  
  
     [!CODE [NVC_MFCExceptions#3](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#3)]  
  
-   Execution returns from within the **catch** block.  
  
> [!NOTE]
>  When deleting a `CException`, use the **Delete** member function to delete the exception. Do not use the **delete** keyword, because it can fail if the exception is not on the heap.  
  
#### To catch and delete exceptions  
  
1.  Use the **try** keyword to set up a **try** block. Execute any program statements that might throw an exception within a **try** block.  
  
     Use the **catch** keyword to set up a **catch** block. Place exception-handling code in a **catch** block. The code in the **catch** block is executed only if the code within the **try** block throws an exception of the type specified in the **catch** statement.  
  
     The following skeleton shows how **try** and **catch** blocks are normally arranged:  
  
     [!CODE [NVC_MFCExceptions#4](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#4)]  
  
     When an exception is thrown, control passes to the first **catch** block whose exception-declaration matches the type of the exception. You can selectively handle different types of exceptions with sequential **catch** blocks as listed below:  
  
     [!CODE [NVC_MFCExceptions#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#5)]  
  
 For more information, see [Exceptions: Converting from MFC Exception Macros](../VS_visualcpp/Exceptions--Converting-from-MFC-Exception-Macros.md).  
  
## See Also  
 [Exception Handling](../VS_visualcpp/Exception-Handling-in-MFC.md)