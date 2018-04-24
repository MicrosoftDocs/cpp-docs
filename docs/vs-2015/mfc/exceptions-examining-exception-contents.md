---
title: "Exceptions: Examining Exception Contents | Microsoft Docs"
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
  - "exception handling, MFC"
  - "try-catch exception handling, MFC function exceptions"
  - "catch blocks, MFC function exceptions"
  - "CException class, class exceptions"
  - "try-catch exception handling, exception contents"
  - "throwing exceptions, exception contents"
ms.assetid: dfda4782-b969-4f60-b867-cc204ea7f33a
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Exceptions: Examining Exception Contents
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Exceptions: Examining Exception Contents](https://docs.microsoft.com/cpp/mfc/exceptions-examining-exception-contents).  
  
  
Although a **catch** block's argument can be of almost any data type, the MFC functions throw exceptions of types derived from the class `CException`. To catch an exception thrown by an MFC function, then, you write a **catch** block whose argument is a pointer to a `CException` object (or an object derived from `CException`, such as `CMemoryException`). Depending on the exact type of the exception, you can examine the data members of the exception object to gather information about the specific cause of the exception.  
  
 For example, the `CFileException` type has the `m_cause` data member, which contains an enumerated type that specifies the cause of the file exception. Some examples of the possible return values are **CFileException::fileNotFound** and **CFileException::readOnly**.  
  
 The following example shows how to examine the contents of a `CFileException`. Other exception types can be examined similarly.  
  
 [!code-cpp[NVC_MFCExceptions#13](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCExceptions/Cpp/MFCExceptions.cpp#13)]  
  
 For more information, see [Exceptions: Freeing Objects in Exceptions](../mfc/exceptions-freeing-objects-in-exceptions.md) and [Exceptions: Catching and Deleting Exceptions](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
## See Also  
 [Exception Handling](../mfc/exception-handling-in-mfc.md)





