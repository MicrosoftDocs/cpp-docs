---
description: "Learn more about: Exceptions: Examining Exception Contents"
title: "Exceptions: Examining Exception Contents"
ms.date: "11/04/2016"
helpviewer_keywords: ["exception handling [MFC], MFC", "try-catch exception handling [MFC], MFC function exceptions", "catch blocks, MFC function exceptions", "CException class [MFC], class exceptions", "try-catch exception handling [MFC], exception contents", "throwing exceptions [MFC], exception contents"]
ms.assetid: dfda4782-b969-4f60-b867-cc204ea7f33a
---
# Exceptions: Examining Exception Contents

Although a **`catch`** block's argument can be of almost any data type, the MFC functions throw exceptions of types derived from the class `CException`. To catch an exception thrown by an MFC function, then, you write a **`catch`** block whose argument is a pointer to a `CException` object (or an object derived from `CException`, such as `CMemoryException`). Depending on the exact type of the exception, you can examine the data members of the exception object to gather information about the specific cause of the exception.

For example, the `CFileException` type has the `m_cause` data member, which contains an enumerated type that specifies the cause of the file exception. Some examples of the possible return values are `CFileException::fileNotFound` and `CFileException::readOnly`.

The following example shows how to examine the contents of a `CFileException`. Other exception types can be examined similarly.

[!code-cpp[NVC_MFCExceptions#13](codesnippet/cpp/exceptions-examining-exception-contents_1.cpp)]

For more information, see [Exceptions: Freeing Objects in Exceptions](exceptions-freeing-objects-in-exceptions.md) and [Exceptions: Catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md).

## See also

[Exception Handling](exception-handling-in-mfc.md)
