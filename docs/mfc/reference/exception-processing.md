---
description: "Learn more about: Exception Processing"
title: "Exception Processing"
ms.date: "11/04/2016"
helpviewer_keywords: ["macros [MFC], exception handling", "DAO (Data Access Objects), exceptions [MFC]", "OLE exceptions [MFC], MFC functions", "exceptions [MFC], processing", "exception macros [MFC]", "termination functions, MFC", "MFC, exceptions", "exceptions [MFC], MFC throwing functions"]
ms.assetid: 26d4457c-8350-48f5-916e-78f919787c30
---
# Exception Processing

When a program executes, a number of abnormal conditions and errors called "exceptions" can occur. These may include running out of memory, resource allocation errors, and failure to find files.

The Microsoft Foundation Class Library uses an exception-handling scheme that is modeled closely after the one proposed by the ANSI standards committee for C++. An exception handler must be set up before calling a function that may encounter an abnormal situation. If the function encounters an abnormal condition, it throws an exception and control is passed to the exception handler.

Several macros included with the Microsoft Foundation Class Library will set up exception handlers. A number of other global functions help to throw specialized exceptions and terminate programs, if necessary. These macros and global functions fall into the following categories:

- Exception macros, which structure your exception handler.

- Exception-throwing functions), which generate exceptions of specific types.

- Termination functions, which cause program termination.

For examples and more details, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Exception Macros

|Name|Description|
|-|-|
|[TRY](#try)|Designates a block of code for exception processing.|
|[CATCH](#catch)|Designates a block of code for catching an exception from the preceding **TRY** block.|
|[CATCH_ALL](#catch_all)|Designates a block of code for catching all exceptions from the preceding **TRY** block.|
|[AND_CATCH](#and_catch)|Designates a block of code for catching additional exception types from the preceding **TRY** block.|
|[AND_CATCH_ALL](#and_catch_all)|Designates a block of code for catching all other additional exception types thrown in a preceding **TRY** block.|
|[END_CATCH](#end_catch)|Ends the last **CATCH** or **AND_CATCH** code block.|
|[END_CATCH_ALL](#end_catch_all)|Ends the last **CATCH_ALL** code block.|
|[THROW](#throw)|Throws a specified exception.|
|[THROW_LAST](#throw_last)|Throws the currently handled exception to the next outer handler.|

### Exception-Throwing Functions

|Name|Description|
|-|-|
|[AfxThrowArchiveException](#afxthrowarchiveexception)|Throws an archive exception.|
|[AfxThrowFileException](#afxthrowfileexception)|Throws a file exception.|
|[AfxThrowInvalidArgException](#afxthrowinvalidargexception)|Throws an invalid argument exception.|
|[AfxThrowMemoryException](#afxthrowmemoryexception)|Throws a memory exception.|
|[AfxThrowNotSupportedException](#afxthrownotsupportedexception)|Throws a not-supported exception.|
|[AfxThrowResourceException](#afxthrowresourceexception)|Throws a Windows resource-not-found exception.|
|[AfxThrowUserException](#afxthrowuserexception)|Throws an exception in a user-initiated program action.|

MFC provides two exception-throwing functions specifically for OLE exceptions:

### OLE Exception Functions

|Name|Description|
|-|-|
|[AfxThrowOleDispatchException](#afxthrowoledispatchexception)|Throws an exception within an OLE automation function.|
|[AfxThrowOleException](#afxthrowoleexception)|Throws an OLE exception.|

To support database exceptions, the database classes provide two exception classes, `CDBException` and `CDaoException`, and global functions to support the exception types:

### DAO Exception Functions

|Name|Description|
|-|-|
|[AfxThrowDAOException](#afxthrowdaoexception)|Throws a [CDaoException](../../mfc/reference/cdaoexception-class.md) from your own code.|
|[AfxThrowDBException](#afxthrowdbexception)|Throws a [CDBException](../../mfc/reference/cdbexception-class.md) from your own code.|

MFC provides the following termination function:

### Termination Functions

|Name|Description|
|-|-|
|[AfxAbort](#afxabort)|Called to terminate an application when a fatal error occurs.|

## <a name="try"></a> TRY

Sets up a **TRY** block.

```
TRY
```

### Remarks

A **TRY** block identifies a block of code that might throw exceptions. Those exceptions are handled in the following **CATCH** and **AND_CATCH** blocks. Recursion is allowed: exceptions may be passed to an outer **TRY** block, either by ignoring them or by using the THROW_LAST macro. End the **TRY** block with an END_CATCH or END_CATCH_ALL macro.

For more information, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Example

See the example for [CATCH](#catch).

### Requirements

Header: afx.h

## <a name="catch"></a> CATCH

Defines a block of code that catches the first exception type thrown in the preceding **TRY** block.

```
CATCH(exception_class, exception_object_pointer_name)
```

### Parameters

*exception_class*<br/>
Specifies the exception type to test for. For a list of standard exception classes, see class [CException](../../mfc/reference/cexception-class.md).

*exception_object_pointer_name*<br/>
Specifies a name for an exception-object pointer that will be created by the macro. You can use the pointer name to access the exception object within the **CATCH** block. This variable is declared for you.

### Remarks

The exception-processing code can interrogate the exception object, if appropriate, to get more information about the specific cause of the exception. Invoke the THROW_LAST macro to shift processing to the next outer exception frame. End the **TRY** block with an END_CATCH macro.

If *exception_class* is the class `CException`, then all exception types will be caught. You can use the [CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof) member function to determine which specific exception was thrown. A better way to catch several kinds of exceptions is to use sequential **AND_CATCH** statements, each with a different exception type.

The exception object pointer is created by the macro. You do not need to declare it yourself.

> [!NOTE]
> The **CATCH** block is defined as a C++ scope delineated by braces. If you declare variables in this scope, they are accessible only within that scope. This also applies to *exception_object_pointer_name*.

For more information on exceptions and the CATCH macro, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Example

[!code-cpp[NVC_MFCExceptions#26](../../mfc/codesnippet/cpp/exception-processing_1.cpp)]

## <a name="catch_all"></a> CATCH_ALL

Defines a block of code that catches all exception types thrown in the preceding **TRY** block.

```
CATCH_ALL(exception_object_pointer_name)
```

### Parameters

*exception_object_pointer_name*<br/>
Specifies a name for an exception-object pointer that will be created by the macro. You can use the pointer name to access the exception object within the `CATCH_ALL` block. This variable is declared for you.

### Remarks

The exception-processing code can interrogate the exception object, if appropriate, to get more information about the specific cause of the exception. Invoke the `THROW_LAST` macro to shift processing to the next outer exception frame. If you use **CATCH_ALL**, end the **TRY** block with an END_CATCH_ALL macro.

> [!NOTE]
> The **CATCH_ALL** block is defined as a C++ scope delineated by braces. If you declare variables in this scope, they are accessible only within that scope.

For more information on exceptions, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Example

See the example for [CFile::Abort](../../mfc/reference/cfile-class.md#abort).

### Requirements

  **Header** afx.h

## <a name="and_catch"></a> AND_CATCH

Defines a block of code for catching additional exception types thrown in a preceding **TRY** block.

```
AND_CATCH(exception_class, exception_object_pointer_name)
```

### Parameters

*exception_class*<br/>
Specifies the exception type to test for. For a list of standard exception classes, see class [CException](../../mfc/reference/cexception-class.md).

*exception_object_pointer_name*<br/>
A name for an exception-object pointer that will be created by the macro. You can use the pointer name to access the exception object within the **AND_CATCH** block. This variable is declared for you.

### Remarks

Use the CATCH macro to catch one exception type, then the AND_CATCH macro to catch each subsequent type. End the **TRY** block with an END_CATCH macro.

The exception-processing code can interrogate the exception object, if appropriate, to get more information about the specific cause of the exception. Call the THROW_LAST macro within the **AND_CATCH** block to shift processing to the next outer exception frame. **AND_CATCH** marks the end of the preceding **CATCH** or **AND_CATCH** block.

> [!NOTE]
> The **AND_CATCH** block is defined as a C++ scope (delineated by curly braces). If you declare variables in this scope, remember that they are accessible only within that scope. This also applies to the *exception_object_pointer_name* variable.

### Example

See the example for [CATCH](#catch).

### Requirements

  **Header** afx.h

## <a name="and_catch_all"></a> AND_CATCH_ALL

Defines a block of code for catching additional exception types thrown in a preceding **TRY** block.

```
AND_CATCH_ALL(exception_object_pointer_name)
```

### Parameters

*exception_object_pointer_name*<br/>
A name for an exception-object pointer that will be created by the macro. You can use the pointer name to access the exception object within the **AND_CATCH_ALL** block. This variable is declared for you.

### Remarks

Use the **CATCH** macro to catch one exception type, then the AND_CATCH_ALL macro to catch all other subsequent types. If you use AND_CATCH_ALL, end the **TRY** block with an END_CATCH_ALL macro.

The exception-processing code can interrogate the exception object, if appropriate, to get more information about the specific cause of the exception. Call the THROW_LAST macro within the **AND_CATCH_ALL** block to shift processing to the next outer exception frame. **AND_CATCH_ALL** marks the end of the preceding **CATCH** or **AND_CATCH_ALL** block.

> [!NOTE]
> The **AND_CATCH_ALL** block is defined as a C++ scope (delineated by braces). If you declare variables in this scope, remember that they are accessible only within that scope.

### Requirements

  **Header** afx.h

## <a name="end_catch"></a> END_CATCH

Marks the end of the last **CATCH** or **AND_CATCH** block.

```
END_CATCH
```

### Remarks

For more information on the END_CATCH macro, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Requirements

  **Header** afx.h

## <a name="end_catch_all"></a> END_CATCH_ALL

Marks the end of the last **CATCH_ALL88** or **AND_CATCH_ALL** block.

```
END_CATCH_ALL
```

### Requirements

  **Header** afx.h

## <a name="throw"></a> THROW (MFC)

Throws the specified exception.

```
THROW(exception_object_pointer)
```

### Parameters

*exception_object_pointer*<br/>
Points to an exception object derived from `CException`.

### Remarks

**THROW** interrupts program execution, passing control to the associated **CATCH** block in your program. If you have not provided the **CATCH** block, then control is passed to a Microsoft Foundation Class Library module that prints an error message and exits.

For more information, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Requirements

  **Header** afx.h

## <a name="throw_last"></a> THROW_LAST

Throws the exception back to the next outer **CATCH** block.

```
THROW_LAST()
```

### Remarks

This macro allows you to throw a locally created exception. If you try to throw an exception that you have just caught, it will normally go out of scope and be deleted. With **THROW_LAST**, the exception is passed correctly to the next **CATCH** handler.

For more information, see the article [Exceptions](../../mfc/exception-handling-in-mfc.md).

### Example

See the example for [CFile::Abort](../../mfc/reference/cfile-class.md#abort).

### Requirements

  **Header** afx.h

## <a name="afxthrowarchiveexception"></a> AfxThrowArchiveException

Throws an archive exception.

```cpp
void  AfxThrowArchiveException(int cause, LPCTSTR lpszArchiveName);
```

### Parameters

*cause*<br/>
Specifies an integer that indicates the reason for the exception. For a list of the possible values, see [CArchiveException::m_cause](../../mfc/reference/carchiveexception-class.md#m_cause).

*lpszArchiveName*<br/>
Points to a string containing the name of the `CArchive` object that caused the exception (if available).

### Requirements

  **Header** afx.h

## <a name="afxthrowfileexception"></a> AfxThrowFileException

Throws a file exception.

```cpp
void AfxThrowFileException(
    int cause,
    LONG lOsError = -1,
    LPCTSTR lpszFileName = NULL);
```

### Parameters

*cause*<br/>
Specifies an integer that indicates the reason for the exception. For a list of the possible values, see [CFileException::m_cause](../../mfc/reference/cfileexception-class.md#m_cause).

*lOsError*<br/>
Contains the operating-system error number (if available) that states the reason for the exception. See your operating-system manual for a listing of error codes.

*lpszFileName*<br/>
Points to a string containing the name of the file that caused the exception (if available).

### Remarks

You are responsible for determining the cause based on the operating-system error code.

### Requirements

  **Header** afx.h

## <a name="afxthrowinvalidargexception"></a> AfxThrowInvalidArgException

Throws an invalid argument exception.

### Syntax

```cpp
void AfxThrowInvalidArgException( );
```

### Remarks

This function is called when invalid arguments are used.

### Requirements

**Header:** afx.h

## <a name="afxthrowmemoryexception"></a> AfxThrowMemoryException

Throws a memory exception.

```cpp
void AfxThrowMemoryException();
```

### Remarks

Call this function if calls to underlying system memory allocators (such as **malloc** and the [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) Windows function) fail. You do not need to call it for **`new`** because **`new`** will throw a memory exception automatically if the memory allocation fails.

### Requirements

  **Header** afx.h

## <a name="afxthrownotsupportedexception"></a> AfxThrowNotSupportedException

Throws an exception that is the result of a request for an unsupported feature.

```cpp
void AfxThrowNotSupportedException();
```

### Requirements

  **Header** afx.h

## <a name="afxthrowresourceexception"></a> AfxThrowResourceException

Throws a resource exception.

```cpp
void  AfxThrowResourceException();
```

### Remarks

This function is normally called when a Windows resource cannot be loaded.

### Requirements

  **Header** afx.h

## <a name="afxthrowuserexception"></a> AfxThrowUserException

Throws an exception to stop an end-user operation.

```cpp
void AfxThrowUserException();
```

### Remarks

This function is normally called immediately after `AfxMessageBox` has reported an error to the user.

### Requirements

  **Header** afx.h

## <a name="afxthrowoledispatchexception"></a> AfxThrowOleDispatchException

Use this function to throw an exception within an OLE automation function.

```cpp
void AFXAPI AfxThrowOleDispatchException(
    WORD wCode ,
    LPCSTR lpszDescription,
    UINT nHelpID = 0);

void AFXAPI AfxThrowOleDispatchException(
    WORD wCode,
    UINT nDescriptionID,
    UINT nHelpID = -1);
```

### Parameters

*wCode*<br/>
An error code specific to your application.

*lpszDescription*<br/>
Verbal description of the error.

*nDescriptionID*<br/>
Resource ID for the verbal error description.

*nHelpID*<br/>
A help context for your application's help (.HLP) file.

### Remarks

The information provided to this function can be displayed by the driving application (Microsoft Visual Basic or another OLE automation client application).

### Example

[!code-cpp[NVC_MFCExceptions#25](../../mfc/codesnippet/cpp/exception-processing_2.cpp)]

### Requirements

  **Header** afx.h

## <a name="afxthrowoleexception"></a> AfxThrowOleException

Creates an object of type `COleException` and throws an exception.

```cpp
void AFXAPI AfxThrowOleException(SCODE sc);
void AFXAPI AfxThrowOleException(HRESULT hr);
```

### Parameters

*sc*<br/>
An OLE status code that indicates the reason for the exception.

*hr*<br/>
Handle to a result code that indicates the reason for the exception.

### Remarks

The version that takes an HRESULT as an argument converts that result code into the corresponding SCODE. For more information on HRESULT and SCODE, see [Structure of COM Error Codes](/windows/win32/com/structure-of-com-error-codes) in the Windows SDK.

### Requirements

  **Header** afxdao.h

## <a name="afxthrowdaoexception"></a> AfxThrowDaoException

Call this function to throw an exception of type [CDaoException](../../mfc/reference/cdaoexception-class.md) from your own code.

```cpp
void AFXAPI AfxThrowDaoException(
    int nAfxDaoError = NO_AFX_DAO_ERROR,
    SCODE scode = S_OK);
```

### Parameters

*nAfxDaoError*<br/>
An integer value representing a DAO extended error code, which can be one of the values listed under [CDaoException::m_nAfxDaoError](../../mfc/reference/cdaoexception-class.md#m_nafxdaoerror).

*scode*<br/>
An OLE error code from DAO, of type SCODE. For information, see [CDaoException::m_scode](../../mfc/reference/cdaoexception-class.md#m_scode).

### Remarks

The framework also calls `AfxThrowDaoException`. In your call, you can pass one of the parameters or both. For example, if you want to raise one of the errors defined in **CDaoException::nAfxDaoError** but you do not care about the *scode* parameter, pass a valid code in the *nAfxDaoError* parameter and accept the default value for *scode*.

For information about exceptions related to the MFC DAO classes, see class `CDaoException` in this book and the article [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md).

### Requirements

  **Header** afxdb.h

## <a name="afxthrowdbexception"></a> AfxThrowDBException

Call this function to throw an exception of type `CDBException` from your own code.

```cpp
void AfxThrowDBException(
    RETCODE nRetCode,
    CDatabase* pdb,
    HSTMT hstmt);
```

### Parameters

*nRetCode*<br/>
A value of type RETCODE, defining the type of error that caused the exception to be thrown.

*pdb*<br/>
A pointer to the `CDatabase` object that represents the data source connection with which the exception is associated.

*hstmt*<br/>
An ODBC HSTMT handle that specifies the statement handle with which the exception is associated.

### Remarks

The framework calls `AfxThrowDBException` when it receives an ODBC RETCODE from a call to an ODBC API function and interprets the RETCODE as an exceptional condition rather than an expectable error. For example, a data access operation might fail because of a disk read error.

For information about the RETCODE values defined by ODBC, see Chapter 8, "Retrieving Status and Error Information," in the Windows SDK. For information about MFC extensions to these codes, see class [CDBException](../../mfc/reference/cdbexception-class.md).

### Requirements

  **Header** afx.h

## <a name="afxabort"></a> AfxAbort

The default termination function supplied by MFC.

```cpp
void  AfxAbort();
```

### Remarks

`AfxAbort` is called internally by MFC member functions when there is a fatal error, such as an uncaught exception that cannot be handled. You can call `AfxAbort` in the rare case when you encounter a catastrophic error from which you cannot recover.

### Example

See the example for [CATCH](#catch).

### Requirements

  **Header** afx.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)<br/>
[CException Class](cexception-class.md)<br/>
[CInvalidArgException Class](cinvalidargexception-class.md)
