---
title: "Exception Classes"
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
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
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
# Exception Classes
The class library provides an exception-handling mechanism based on class `CException`. The application framework uses exceptions in its code; you can also use them in yours. For more information, see the article [Exceptions](../VS_visualcpp/Exception-Handling-in-MFC.md). You can derive your own exception types from `CException`.  
  
 MFC provides an exception class from which you can derive your own exception as well as exception classes for all of the exceptions it supports.  
  
 [CException](../VS_visualcpp/CException-Class.md)  
 The base class for exceptions.  
  
 [CArchiveException](../VS_visualcpp/CArchiveException-Class.md)  
 An archive exception.  
  
 [CDaoException](../VS_visualcpp/CDaoException-Class.md)  
 An exception resulting from a failure in a DAO database operation.  
  
 [CDBException](../VS_visualcpp/CDBException-Class.md)  
 An exception resulting from a failure in ODBC database processing.  
  
 [CFileException](../VS_visualcpp/CFileException-Class.md)  
 A file-oriented exception.  
  
 [CMemoryException](../VS_visualcpp/CMemoryException-Class.md)  
 An out-of-memory exception.  
  
 [CNotSupportedException](../VS_visualcpp/CNotSupportedException-Class.md)  
 An exception resulting from using an unsupported feature.  
  
 [COleException](../VS_visualcpp/COleException-Class.md)  
 An exception resulting from a failure in OLE processing. This class is used by both containers and servers.  
  
 [COleDispatchException](../VS_visualcpp/COleDispatchException-Class.md)  
 An exception resulting from an error during automation. Automation exceptions are thrown by automation servers and caught by automation clients.  
  
 [CResourceException](../VS_visualcpp/CResourceException-Class.md)  
 An exception resulting from a failure to load a Windows resource.  
  
 [CUserException](../VS_visualcpp/CUserException-Class.md)  
 An exception used to stop a user-initiated operation. Typically, the user has been notified of the problem before this exception is thrown.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)