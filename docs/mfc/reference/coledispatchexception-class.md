---
description: "Learn more about: COleDispatchException Class"
title: "COleDispatchException Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDispatchException", "AFXDISP/COleDispatchException", "AFXDISP/COleDispatchException::m_dwHelpContext", "AFXDISP/COleDispatchException::m_strDescription", "AFXDISP/COleDispatchException::m_strHelpFile", "AFXDISP/COleDispatchException::m_strSource", "AFXDISP/COleDispatchException::m_wCode"]
helpviewer_keywords: ["COleDispatchException [MFC], m_dwHelpContext", "COleDispatchException [MFC], m_strDescription", "COleDispatchException [MFC], m_strHelpFile", "COleDispatchException [MFC], m_strSource", "COleDispatchException [MFC], m_wCode"]
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
---
# COleDispatchException Class

Handles exceptions specific to the OLE `IDispatch` interface, which is a key part of OLE automation.

## Syntax

```
class COleDispatchException : public CException
```

## Members

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COleDispatchException::m_dwHelpContext](#m_dwhelpcontext)|Help context for error.|
|[COleDispatchException::m_strDescription](#m_strdescription)|Verbal error description.|
|[COleDispatchException::m_strHelpFile](#m_strhelpfile)|Help file to use with `m_dwHelpContext`.|
|[COleDispatchException::m_strSource](#m_strsource)|Application that generated the exception.|
|[COleDispatchException::m_wCode](#m_wcode)|`IDispatch`-specific error code.|

## Remarks

Like the other exception classes derived from the `CException` base class, `COleDispatchException` can be used with the THROW, THROW_LAST, TRY, CATCH, AND_CATCH, and END_CATCH macros.

In general, you should call [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) to create and throw a `COleDispatchException` object.

For more information on exceptions, see the articles [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md) and [Exceptions: OLE Exceptions](../../mfc/exceptions-ole-exceptions.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`COleDispatchException`

## Requirements

**Header:** afxdisp.h

## <a name="m_dwhelpcontext"></a> COleDispatchException::m_dwHelpContext

Identifies a help context in your application's help (.HLP) file.

```
DWORD m_dwHelpContext;
```

### Remarks

This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.

### Example

  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="m_strdescription"></a> COleDispatchException::m_strDescription

Contains a verbal error description, such as "Disk full."

```
CString m_strDescription;
```

### Remarks

This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.

### Example

  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="m_strhelpfile"></a> COleDispatchException::m_strHelpFile

The framework fills in this string with the name of the application's help file.

```
CString m_strHelpFile;
```

## <a name="m_strsource"></a> COleDispatchException::m_strSource

The framework fills in this string with the name of the application that generated the exception.

```
CString m_strSource;
```

### Example

  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).

## <a name="m_wcode"></a> COleDispatchException::m_wCode

Contains an error code specific to your application.

```
WORD m_wCode;
```

### Remarks

This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.

## See also

[MFC Sample CALCDRIV](../../overview/visual-cpp-samples.md)<br/>
[CException Class](../../mfc/reference/cexception-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)<br/>
[COleException Class](../../mfc/reference/coleexception-class.md)
