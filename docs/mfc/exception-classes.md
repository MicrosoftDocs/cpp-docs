---
title: "Exception Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception classes"
  - "exception handling, exception classes"
  - "MFC, exceptions"
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
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
# Exception Classes
The class library provides an exception-handling mechanism based on class `CException`. The application framework uses exceptions in its code; you can also use them in yours. For more information, see the article [Exceptions](../mfc/exception-handling-in-mfc.md). You can derive your own exception types from `CException`.  
  
 MFC provides an exception class from which you can derive your own exception as well as exception classes for all of the exceptions it supports.  
  
 [CException](../mfc/reference/cexception-class.md)  
 The base class for exceptions.  
  
 [CArchiveException](../mfc/reference/carchiveexception-class.md)  
 An archive exception.  
  
 [CDaoException](../mfc/reference/cdaoexception-class.md)  
 An exception resulting from a failure in a DAO database operation.  
  
 [CDBException](../mfc/reference/cdbexception-class.md)  
 An exception resulting from a failure in ODBC database processing.  
  
 [CFileException](../mfc/reference/cfileexception-class.md)  
 A file-oriented exception.  
  
 [CMemoryException](../mfc/reference/cmemoryexception-class.md)  
 An out-of-memory exception.  
  
 [CNotSupportedException](../mfc/reference/cnotsupportedexception-class.md)  
 An exception resulting from using an unsupported feature.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 An exception resulting from a failure in OLE processing. This class is used by both containers and servers.  
  
 [COleDispatchException](../mfc/reference/coledispatchexception-class.md)  
 An exception resulting from an error during automation. Automation exceptions are thrown by automation servers and caught by automation clients.  
  
 [CResourceException](../mfc/reference/cresourceexception-class.md)  
 An exception resulting from a failure to load a Windows resource.  
  
 [CUserException](../mfc/reference/cuserexception-class.md)  
 An exception used to stop a user-initiated operation. Typically, the user has been notified of the problem before this exception is thrown.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

