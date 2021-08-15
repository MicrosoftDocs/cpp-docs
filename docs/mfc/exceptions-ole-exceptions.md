---
description: "Learn more about: Exceptions: OLE Exceptions"
title: "Exceptions: OLE Exceptions"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE, exceptions", "OLE exceptions [MFC]", "exceptions [MFC], OLE", "exception handling [MFC], OLE", "OLE exceptions [MFC], classes for handling"]
ms.assetid: 2f8e0161-b94f-48bb-a5a2-6f644b192527
---
# Exceptions: OLE Exceptions

The techniques and facilities for handling exceptions in OLE are the same as those for handling other exceptions. For further information on exception handling, see the article [Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md).

All exception objects are derived from the abstract base class `CException`. MFC provides two classes for handling OLE exceptions:

- [COleException](reference/coleexception-class.md) For handling general OLE exceptions.

- [COleDispatchException](reference/coledispatchexception-class.md) For generating and handling OLE dispatch (automation) exceptions.

The difference between these two classes is the amount of information they provide and where they are used. `COleException` has a public data member that contains the OLE status code for the exception. `COleDispatchException` supplies more information, including the following:

- An application-specific error code

- An error description, such as "Disk full"

- A Help context that your application can use to provide additional information for the user

- The name of your application's Help file

- The name of the application that generated the exception

`COleDispatchException` provides more information so that it can be used with products like Microsoft Visual Basic. The verbal error description can be used in a message box or other notification; the Help information can be used to help the user respond to the conditions that caused the exception.

Two global functions correspond to the two OLE exception classes: [AfxThrowOleException](reference/exception-processing.md#afxthrowoleexception) and [AfxThrowOleDispatchException](reference/exception-processing.md#afxthrowoledispatchexception). Use them to throw general OLE exceptions and OLE dispatch exceptions, respectively.

## See also

[Exception Handling](exception-handling-in-mfc.md)
