---
title: "Exception Classes"
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
  - "vc.classes.exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception classes"
  - "exception handling, exception classes"
  - "MFC, exceptions"
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
caps.latest.revision: 8
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
  
 [CException](../mfcref/cexception-class.md)  
 The base class for exceptions.  
  
 [CArchiveException](../mfcref/carchiveexception-class.md)  
 An archive exception.  
  
 [CDaoException](../mfcref/cdaoexception-class.md)  
 An exception resulting from a failure in a DAO database operation.  
  
 [CDBException](../mfcref/cdbexception-class.md)  
 An exception resulting from a failure in ODBC database processing.  
  
 [CFileException](../mfcref/cfileexception-class.md)  
 A file-oriented exception.  
  
 [CMemoryException](../mfcref/cmemoryexception-class.md)  
 An out-of-memory exception.  
  
 [CNotSupportedException](../mfcref/cnotsupportedexception-class.md)  
 An exception resulting from using an unsupported feature.  
  
 [COleException](../mfcref/coleexception-class.md)  
 An exception resulting from a failure in OLE processing. This class is used by both containers and servers.  
  
 [COleDispatchException](../mfcref/coledispatchexception-class.md)  
 An exception resulting from an error during automation. Automation exceptions are thrown by automation servers and caught by automation clients.  
  
 [CResourceException](../mfcref/cresourceexception-class.md)  
 An exception resulting from a failure to load a Windows resource.  
  
 [CUserException](../mfcref/cuserexception-class.md)  
 An exception used to stop a user-initiated operation. Typically, the user has been notified of the problem before this exception is thrown.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)