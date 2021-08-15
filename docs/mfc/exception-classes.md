---
description: "Learn more about: Exception Classes"
title: "Exception Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.exception"]
helpviewer_keywords: ["exception classes [MFC]", "exception handling [MFC], exception classes", "MFC, exceptions"]
ms.assetid: 1a2caf12-b3e9-4189-86d2-bf7a595bf025
---
# Exception Classes

The class library provides an exception-handling mechanism based on class `CException`. The application framework uses exceptions in its code; you can also use them in yours. For more information, see the article [Exceptions](exception-handling-in-mfc.md). You can derive your own exception types from `CException`.

MFC provides an exception class from which you can derive your own exception as well as exception classes for all of the exceptions it supports.

[CException](reference/cexception-class.md)<br/>
The base class for exceptions.

[CArchiveException](reference/carchiveexception-class.md)<br/>
An archive exception.

[CDaoException](reference/cdaoexception-class.md)<br/>
An exception resulting from a failure in a DAO database operation.

[CDBException](reference/cdbexception-class.md)<br/>
An exception resulting from a failure in ODBC database processing.

[CFileException](reference/cfileexception-class.md)<br/>
A file-oriented exception.

[CMemoryException](reference/cmemoryexception-class.md)<br/>
An out-of-memory exception.

[CNotSupportedException](reference/cnotsupportedexception-class.md)<br/>
An exception resulting from using an unsupported feature.

[COleException](reference/coleexception-class.md)<br/>
An exception resulting from a failure in OLE processing. This class is used by both containers and servers.

[COleDispatchException](reference/coledispatchexception-class.md)<br/>
An exception resulting from an error during automation. Automation exceptions are thrown by automation servers and caught by automation clients.

[CResourceException](reference/cresourceexception-class.md)<br/>
An exception resulting from a failure to load a Windows resource.

[CUserException](reference/cuserexception-class.md)<br/>
An exception used to stop a user-initiated operation. Typically, the user has been notified of the problem before this exception is thrown.

## See also

[Class Overview](class-library-overview.md)
