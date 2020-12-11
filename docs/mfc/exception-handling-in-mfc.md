---
description: "Learn more about: Exception Handling in MFC"
title: "Exception Handling in MFC"
ms.date: "11/19/2019"
helpviewer_keywords: ["DAO [MFC], exceptions", "assertions [MFC], When to use exceptions", "exception handling [MFC], MFC", "resource allocation exception", "resources [MFC], allocating", "keywords [MFC], exception handling", "errors [MFC], detected by assertions", "ODBC exceptions [MFC]", "serialization [MFC], exceptions", "Automation [MFC], exceptions", "exception macros [MFC]", "predefined exceptions [MFC]", "C++ exception handling [MFC], enabling", "C++ exception handling [MFC], MFC applications", "requests for unsupported services [MFC]", "database exceptions [MFC]", "archive exceptions [MFC]", "MFC, exceptions", "C++ exception handling [MFC], types of", "macros [MFC], exception handling", "abnormal program execution [MFC]", "OLE exceptions [MFC], MFC exception handling", "error handling [MFC], exceptions and", "class libraries [MFC], exception support", "exceptions [MFC], MFC macros vs. C++ keywords", "memory [MFC], out-of-memory exceptions", "Windows [MFC], resource allocation exceptions", "macros [MFC], MFC exception macros", "function calls [MFC], results", "out-of-memory exceptions [MFC]"]
ms.assetid: 0926627d-2ba7-44a6-babe-d851a4a2517c
---
# Exception Handling in MFC

This article explains the exception-handling mechanisms available in MFC. Two mechanisms are available:

- C++ exceptions, available in MFC version 3.0 and later

- The MFC exception macros, available in MFC versions 1.0 and later

If you're writing a new application using MFC, you should use the C++ mechanism. You can use the macro-based mechanism if your existing application already uses that mechanism extensively.

You can readily convert existing code to use C++ exceptions instead of the MFC exception macros. Advantages of converting your code and guidelines for doing so are described in the article [Exceptions: Converting from MFC Exception Macros](exceptions-converting-from-mfc-exception-macros.md).

If you have already developed an application using the MFC exception macros, you can continue using these macros in your existing code, while using C++ exceptions in your new code. The article [Exceptions: Changes to Exception Macros in Version 3.0](exceptions-changes-to-exception-macros-in-version-3-0.md) gives guidelines for doing so.

> [!NOTE]
> To enable C++ exception handling in your code, select Enable C++ Exceptions on the Code Generation page in the C/C++ folder of the project's [Property Pages](../build/reference/property-pages-visual-cpp.md) dialog box, or use the [/EHsc](../build/reference/eh-exception-handling-model.md) compiler option.

This article covers the following topics:

- [When to use exceptions](#_core_when_to_use_exceptions)

- [MFC exception support](#_core_mfc_exception_support)

- [Further reading about exceptions](#_core_further_reading_about_exceptions)

## <a name="_core_when_to_use_exceptions"></a> When to Use Exceptions

Three categories of outcomes can occur when a function is called during program execution: normal execution, erroneous execution, or abnormal execution. Each category is described below.

- Normal execution

   The function may execute normally and return. Some functions return a result code to the caller, which indicates the outcome of the function. The possible result codes are strictly defined for the function and represent the range of possible outcomes of the function. The result code can indicate success or failure or can even indicate a particular type of failure that is within the normal range of expectations. For example, a file-status function can return a code that indicates that the file does not exist. Note that the term "error code" is not used because a result code represents one of many expected outcomes.

- Erroneous execution

   The caller makes some mistake in passing arguments to the function or calls the function in an inappropriate context. This situation causes an error, and it should be detected by an assertion during program development. (For more information on assertions, see [C/C++ Assertions](/visualstudio/debugger/c-cpp-assertions).)

- Abnormal execution

   Abnormal execution includes situations where conditions outside the program's control, such as low memory or I/O errors, are influencing the outcome of the function. Abnormal situations should be handled by catching and throwing exceptions.

Using exceptions is especially appropriate for abnormal execution.

## <a name="_core_mfc_exception_support"></a> MFC Exception Support

Whether you use the C++ exceptions directly or use the MFC exception macros, you will use [CException Class](reference/cexception-class.md) or `CException`-derived objects that may be thrown by the framework or by your application.

The following table shows the predefined exceptions provided by MFC.

|Exception class|Meaning|
|---------------------|-------------|
|[CMemoryException Class](reference/cmemoryexception-class.md)|Out-of-memory|
|[CFileException Class](reference/cfileexception-class.md)|File exception|
|[CArchiveException Class](reference/carchiveexception-class.md)|Archive/Serialization exception|
|[CNotSupportedException Class](reference/cnotsupportedexception-class.md)|Response to request for unsupported service|
|[CResourceException Class](reference/cresourceexception-class.md)|Windows resource allocation exception|
|[CDaoException Class](reference/cdaoexception-class.md)|Database exceptions (DAO classes)|
|[CDBException Class](reference/cdbexception-class.md)|Database exceptions (ODBC classes)|
|[COleException Class](reference/coleexception-class.md)|OLE exceptions|
|[COleDispatchException Class](reference/coledispatchexception-class.md)|Dispatch (automation) exceptions|
|[CUserException Class](reference/cuserexception-class.md)|Exception that alerts the user with a message box, then throws a generic [CException Class](reference/cexception-class.md)|

Since version 3.0, MFC has used C++ exceptions but still supports its older exception handling macros, which are similar to C++ exceptions in form. Although these macros are not recommended for new programming, they are still supported for backward compatibility. In programs that already use the macros, you can freely use C++ exceptions as well. During preprocessing, the macros evaluate to the exception handling keywords defined in the MSVC implementation of the C++ language as of Visual C++ version 2.0. You can leave existing exception macros in place while you begin to use C++ exceptions. For information on mixing macros and C++ exception handling and on converting old code to use the new mechanism, see the articles [Exceptions: Using MFC Macros and C++ Exceptions](exceptions-using-mfc-macros-and-cpp-exceptions.md) and [Exceptions: Converting from MFC Exception Macros](exceptions-converting-from-mfc-exception-macros.md). The older MFC exception macros, if you still use them, evaluate to C++ exception keywords. See [Exceptions: Changes to Exception Macros in Version 3.0](exceptions-changes-to-exception-macros-in-version-3-0.md). MFC does not directly support Windows NT structured exception handlers (SEH), as discussed in [Structured Exception Handling](/windows/win32/debug/structured-exception-handling).

## <a name="_core_further_reading_about_exceptions"></a> Further Reading About Exceptions

The following articles explain using the MFC library for exception handing:

- [Exceptions: Catching and Deleting Exceptions](exceptions-catching-and-deleting-exceptions.md)

- [Exceptions: Examining Exception Contents](exceptions-examining-exception-contents.md)

- [Exceptions: Freeing Objects in Exceptions](exceptions-freeing-objects-in-exceptions.md)

- [Exceptions: Throwing Exceptions from Your Own Functions](exceptions-throwing-exceptions-from-your-own-functions.md)

- [Exceptions: Database Exceptions](exceptions-database-exceptions.md)

- [Exceptions: OLE Exceptions](exceptions-ole-exceptions.md)

The following articles compare the MFC exception macros with the C++ exception keywords and explain how you can adapt your code:

- [Exceptions: Changes to Exception Macros in Version 3.0](exceptions-changes-to-exception-macros-in-version-3-0.md)

- [Exceptions: Converting from MFC Exception Macros](exceptions-converting-from-mfc-exception-macros.md)

- [Exceptions: Using MFC Macros and C++ Exceptions](exceptions-using-mfc-macros-and-cpp-exceptions.md)

## See also

[Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[How Do I: Create my Own Custom Exception Classes](https://go.microsoft.com/fwlink/p/?linkid=128045)
