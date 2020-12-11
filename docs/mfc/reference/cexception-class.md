---
description: "Learn more about: CException Class"
title: "CException Class"
ms.date: "11/04/2016"
f1_keywords: ["CException", "AFX/CException", "AFX/CException::CException", "AFX/CException::Delete", "AFX/CException::ReportError"]
helpviewer_keywords: ["CException [MFC], CException", "CException [MFC], Delete", "CException [MFC], ReportError"]
ms.assetid: cfacf14d-bfe4-4666-a5c7-38b800512920
---
# CException Class

The base class for all exceptions in the Microsoft Foundation Class Library.

## Syntax

```
class AFX_NOVTABLE CException : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CException::CException](#cexception)|Constructs a `CException` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CException::Delete](#delete)|Deletes a `CException` object.|
|[CException::ReportError](#reporterror)|Reports an error message in a message box to the user.|

## Remarks

Because `CException` is an abstract base class you cannot create `CException` objects directly; you must create objects of derived classes. If you need to create your own `CException`-style class, use one of the derived classes listed above as a model. Make sure that your derived class also uses `IMPLEMENT_DYNAMIC`.

The derived classes and their descriptions are listed below:

|Name|Description|
|-|-|
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|A base class for resource-critical MFC exceptions|
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Invalid argument exception condition|
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Out-of-memory exception|
|[CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Request for an unsupported operation|
|[CArchiveException](../../mfc/reference/carchiveexception-class.md)|Archive-specific exception|
|[CFileException](../../mfc/reference/cfileexception-class.md)|File-specific exception|
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Windows resource not found or not creatable|
|[COleException](../../mfc/reference/coleexception-class.md)|OLE exception|
|[CDBException](../../mfc/reference/cdbexception-class.md)|Database exception (that is, exception conditions arising for MFC database classes based on Open Database Connectivity)|
|[COleDispatchException](../../mfc/reference/coledispatchexception-class.md)|OLE dispatch (automation) exception|
|[CUserException](../../mfc/reference/cuserexception-class.md)|Exception that indicates that a resource could not be found|
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Data access object exception (that is, exception conditions arising for DAO classes)|
|[CInternetException](../../mfc/reference/cinternetexception-class.md)|Internet exception (that is, exception conditions arising for Internet classes).|

These exceptions are intended to be used with the [THROW](exception-processing.md#throw), [THROW_LAST](exception-processing.md#throw_last), [try](exception-processing.md#try), [catch](exception-processing.md#catch), [and_catch](exception-processing.md#and_catch), and [end_catch](exception-processing.md#end_catch) macros. For more information on exceptions, see [Exception Processing](exception-processing.md), or see the article [Exception Handling (MFC)](../exception-handling-in-mfc.md).

To catch a specific exception, use the appropriate derived class. To catch all types of exceptions, use `CException`, and then use [CObject::IsKindOf](cobject-class.md#iskindof) to differentiate among `CException`-derived classes. Note that `CObject::IsKindOf` works only for classes declared with the [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) macro, in order to take advantage of dynamic type checking. Any `CException`-derived class that you create should use the `IMPLEMENT_DYNAMIC` macro, too.

You can report details about exceptions to the user by calling [GetErrorMessage](cfileexception-class.md#geterrormessage) or [ReportError](#reporterror), two member functions that work with any of `CException`'s derived classes.

If an exception is caught by one of the macros, the `CException` object is deleted automatically; do not delete it yourself. If an exception is caught by using a **`catch`** keyword, it is not automatically deleted. See the article [Exception Handling (MFC)](../exception-handling-in-mfc.md) for more information about when to delete an exeption object.

## Inheritance Hierarchy

[CObject](cobject-class.md)

`CException`

## Requirements

**Header:** afx.h

## <a name="cexception"></a> CException::CException

This member function constructs a `CException` object.

```
explicit CException(BOOL bAutoDelete);
```

### Parameters

*b_AutoDelete*<br/>
Specify TRUE if the memory for the `CException` object has been allocated on the heap. This will cause the `CException` object to be deleted when the `Delete` member function is called to delete the exception. Specify FALSE if the `CException` object is on the stack or is a global object. In this case, the `CException` object will not be deleted when the `Delete` member function is called.

### Remarks

You would normally never need to call this constructor directly. A function that throws an exception should create an instance of a `CException`-derived class and call its constructor, or it should use one of the MFC throw functions, such as [AfxThrowFileException](exception-processing.md#afxthrowfileexception), to throw a predefined type. This documentation is provided only for completeness.

## <a name="delete"></a> CException::Delete

This function checks to see if the `CException` object was created on the heap, and if so, it calls the **`delete`** operator on the object.

```cpp
void Delete();
```

### Remarks

When deleting a `CException` object, use the `Delete` member function to delete the exception. Do not use the **`delete`** operator directly, because the `CException` object may be a global object or have been created on the stack.

You can specify whether the object should be deleted when the object is constructed. For more information, see [CException::CException](#cexception).

You only need to call `Delete` if you are using the C++ **`try`**- **`catch`** mechanism. If you are using the MFC macros **TRY** and **CATCH**, then these macros will automatically call this function.

### Example

```cpp
CFile* pFile = NULL;
// Constructing a CFile object with this override may throw
// a CFile exception, and won't throw any other exceptions.
// Calling CString::Format() may throw a CMemoryException,
// so we have a catch block for such exceptions, too. Any
// other exception types this function throws will be
// routed to the calling function.
// Note that this example performs the same actions as the
// example for CATCH, but uses C++ try/catch syntax instead
// of using the MFC TRY/CATCH macros. This sample must use
// CException::Delete() to delete the exception objects
// before closing the catch block, while the CATCH example
// implicitly performs the deletion via the macros.
try
{
   pFile = new CFile(_T("C:\\WINDOWS\\SYSTEM.INI"),
      CFile::modeRead | CFile::shareDenyNone);
   ULONGLONG ullLength = pFile->GetLength();
   CString str;
   str.Format(_T("Your SYSTEM.INI file is %u bytes long."), ullLength);
   AfxMessageBox(str);
}
catch(CFileException* pEx)
{
   // Simply show an error message to the user.
   pEx->ReportError();
   pEx->Delete();
}
catch(CMemoryException* pEx)
{
   // We can't recover from this memory exception, so we'll
   // just terminate the app without any cleanup. Normally, an
   // an application should do everything it possibly can to
   // clean up properly and _not_ call AfxAbort().
   pEx->Delete();
   AfxAbort();
}
// If an exception occurrs in the CFile constructor,
// the language will free the memory allocated by new
// and will not complete the assignment to pFile.
// Thus, our clean-up code needs to test for NULL.
if (pFile != NULL)
{
   pFile->Close();
   delete pFile;
}
```

## <a name="reporterror"></a> CException::ReportError

Call this member function to report error text in a message box to the user.

```
virtual int ReportError(
    UINT nType = MB_OK,
    UINT nMessageID = 0);
```

### Parameters

*nType*<br/>
Specifies the style of the message box. Apply any combination of the [message-box styles](styles-used-by-mfc.md#message-box-styles) to the box. If you don't specify this parameter, the default is MB_OK.

*nMessageID*<br/>
Specifies the resource ID (string table entry) of a message to display if the exception object does not have an error message. If 0, the message "No error message is available" is displayed.

### Return Value

An `AfxMessageBox` value; otherwise 0 if there is not enough memory to display the message box. See [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) for the possible return values.

### Example

Here is an example of the use of `CException::ReportError`. For another example, see the example for [CATCH](exception-processing.md#catch).

```cpp
CFile fileInput;
CFileException ex;

// try to open a file for reading.
// The file will certainly not
// exist because there are too many explicit
// directories in the name.

// if the call to Open() fails, ex will be
// initialized with exception
// information.  the call to ex.ReportError() will
// display an appropriate
// error message to the user, such as
// "\Too\Many\Bad\Dirs.DAT contains an
// invalid path."  The error message text will be
// appropriate for the
// file name and error condition.

if (!fileInput.Open(_T("\\Too\\Many\\Bad\\Dirs.DAT"), CFile::modeRead, &ex))
{
  ex.ReportError();
}
else
{
  // the file was opened, so do whatever work
  // with fileInput we were planning...

  fileInput.Close();
}
```

## See also

[CObject Class](cobject-class.md)<br/>
[Hierarchy Chart](../hierarchy-chart.md)<br/>
[Exception Processing](exception-processing.md)<br/>
[How Do I: Create my Own Custom Exception Classes](https://go.microsoft.com/fwlink/p/?linkid=128045)
