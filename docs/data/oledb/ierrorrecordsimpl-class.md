---
description: "Learn more about: IErrorRecordsImpl Class"
title: "IErrorRecordsImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::IErrorRecordsImpl", "ATL.IErrorRecordsImpl", "IErrorRecordsImpl", "GetErrorDescriptionString", "IErrorRecordsImpl.GetErrorDescriptionString", "IErrorRecordsImpl::GetErrorDescriptionString", "GetErrorGUID", "IErrorRecordsImpl.GetErrorGUID", "IErrorRecordsImpl::GetErrorGUID", "GetErrorHelpContext", "IErrorRecordsImpl::GetErrorHelpContext", "IErrorRecordsImpl.GetErrorHelpContext", "IErrorRecordsImpl::GetErrorHelpFile", "GetErrorHelpFile", "IErrorRecordsImpl.GetErrorHelpFile", "IErrorRecordsImpl.GetErrorSource", "GetErrorSource", "IErrorRecordsImpl::GetErrorSource", "IErrorRecordsImpl.AddErrorRecord", "AddErrorRecord", "IErrorRecordsImpl::AddErrorRecord", "ATL::IErrorRecordsImpl::GetBasicErrorInfo", "IErrorRecordsImpl::GetBasicErrorInfo", "GetBasicErrorInfo", "ATL.IErrorRecordsImpl.GetBasicErrorInfo", "IErrorRecordsImpl.GetBasicErrorInfo", "ATL::IErrorRecordsImpl::GetCustomErrorObject", "IErrorRecordsImpl::GetCustomErrorObject", "ATL.IErrorRecordsImpl.GetCustomErrorObject", "IErrorRecordsImpl.GetCustomErrorObject", "IErrorRecordsImpl.GetErrorInfo", "IErrorRecordsImpl::GetErrorInfo", "IErrorRecordsImpl::GetErrorParameters", "ATL.IErrorRecordsImpl.GetErrorParameters", "IErrorRecordsImpl.GetErrorParameters", "GetErrorParameters", "ATL::IErrorRecordsImpl::GetErrorParameters", "IErrorRecordsImpl::GetRecordCount", "ATL::IErrorRecordsImpl::GetRecordCount", "IErrorRecordsImpl.GetRecordCount", "ATL.IErrorRecordsImpl.GetRecordCount", "IErrorRecordsImpl::m_rgErrors", "IErrorRecordsImpl.m_rgErrors", "ATL.IErrorRecordsImpl.m_rgErrors", "m_rgErrors", "ATL::IErrorRecordsImpl::m_rgErrors"]
helpviewer_keywords: ["IErrorRecordsImpl class", "GetErrorDescriptionString method", "GetErrorGUID method", "GetErrorHelpContext method", "GetErrorHelpFile method", "GetErrorSource method", "AddErrorRecord method", "GetBasicErrorInfo method", "GetCustomErrorObject method", "GetErrorInfo method", "GetErrorParameters method", "GetRecordCount method", "m_rgErrors"]
ms.assetid: dea8e938-c5d8-45ab-86de-eb8fbf534ffb
---
# IErrorRecordsImpl Class

Implements the OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) interface, adding records to and retrieving records from a data member ([m_rgErrors](#rgerrors)) of type **CAtlArray<**`RecordClass`**>**.

## Syntax

```cpp
template <class T, class RecordClass = ATLERRORINFO>
class IErrorRecordsImpl : public IErrorRecords
```

### Parameters

*T*<br/>
A class derived from `IErrorRecordsImpl`.

*RecordClass*<br/>
A class that represents an OLE DB error object.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[GetErrorDescriptionString](#geterrordescriptionstring)|Gets the error description string from an error record.|
|[GetErrorGUID](#geterrorguid)|Gets the error GUID from an error record.|
|[GetErrorHelpContext](#geterrorhelpcontext)|Gets the help context ID from an error record.|
|[GetErrorHelpFile](#geterrorhelpfile)|Gets the full pathname of the help file from an error record.|
|[GetErrorSource](#geterrorsource)|Gets the error source code from an error record.|

### Interface Methods

| Name | Description |
|-|-|
|[AddErrorRecord](#adderrorrecord)|Adds a record to the OLE DB error object.|
|[GetBasicErrorInfo](#getbasicerrorinfo)|Returns basic information about the error, such as the return code and provider-specific error number.|
|[GetCustomErrorObject](#getcustomerrorobject)|Returns a pointer to an interface on a custom error object.|
|[GetErrorInfo](#geterrorinfo)|Returns an [IErrorInfo](/previous-versions/windows/desktop/ms718112(v=vs.85)) interface pointer on the specified record.|
|[GetErrorParameters](#geterrorparameters)|Returns the error parameters.|
|[GetRecordCount](#getrecordcount)|Returns the number of records in the OLE DB record object.|

### Data Members

| Name | Description |
|-|-|
|[m_rgErrors](#rgerrors)|An array of error records.|

## <a name="geterrordescriptionstring"></a> IErrorRecordsImpl::GetErrorDescriptionString

Gets the error description string from an error record.

### Syntax

```cpp
LPOLESTR GetErrorDescriptionString(ERRORINFO& rCurError);
```

#### Parameters

*rCurError*<br/>
An `ERRORINFO` record in an `IErrorInfo` interface.

### Return Value

A pointer to a string describing the error.

## <a name="geterrorguid"></a> IErrorRecordsImpl::GetErrorGUID

Gets the error GUID from an error record.

### Syntax

```cpp
REFGUID GetErrorGUID(ERRORINFO& rCurError);
```

#### Parameters

*rCurError*<br/>
An `ERRORINFO` record in an `IErrorInfo` interface.

### Return Value

A reference to a GUID for the error.

## <a name="geterrorhelpcontext"></a> IErrorRecordsImpl::GetErrorHelpContext

Gets the help context ID from an error record.

### Syntax

```cpp
DWORD GetErrorHelpContext(ERRORINFO& rCurError);
```

#### Parameters

*rCurError*<br/>
An `ERRORINFO` record in an `IErrorInfo` interface.

### Return Value

The help context ID for the error.

## <a name="geterrorhelpfile"></a> IErrorRecordsImpl::GetErrorHelpFile

Gets the path name of the help file from an error record.

### Syntax

```cpp
LPOLESTR GetErrorHelpFile(ERRORINFO& rCurError);
```

#### Parameters

*rCurError*<br/>
An `ERRORINFO` record in an `IErrorInfo` interface.

### Return Value

Pointer to a string that contains the path name of the help file for the error.

## <a name="geterrorsource"></a> IErrorRecordsImpl::GetErrorSource

Gets the source code that caused the error from an error record.

### Syntax

```cpp
LPOLESTR GetErrorSource(ERRORINFO& rCurError);
```

#### Parameters

*rCurError*<br/>
An `ERRORINFO` record in an `IErrorInfo` interface.

### Return Value

Pointer to a string containing the source code for the error.

## <a name="adderrorrecord"></a> IErrorRecordsImpl::AddErrorRecord

Adds a record to the OLE DB error object.

### Syntax

```cpp
STDMETHOD(AddErrorRecord )(ERRORINFO *pErrorInfo,
   DWORD dwLookupID,
   DISPPARAMS *pdispparams,
   IUnknown *punkCustomError,
   DWORD dwDynamicErrorID);
```

#### Parameters

See [IErrorRecords::AddErrorRecord](/previous-versions/windows/desktop/ms725362(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="getbasicerrorinfo"></a> IErrorRecordsImpl::GetBasicErrorInfo

Returns basic information about the error, such as the return code and provider-specific error number.

### Syntax

```cpp
STDMETHOD(GetBasicErrorInfo )(ULONG ulRecordNum,
   ERRORINFO *pErrorInfo);
```

#### Parameters

See [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="getcustomerrorobject"></a> IErrorRecordsImpl::GetCustomErrorObject

Returns a pointer to an interface on a custom error object.

### Syntax

```cpp
STDMETHOD(GetCustomErrorObject )(ULONG ulRecordNum,
   REFIID riid,
   IUnknown **ppObject);
```

#### Parameters

See [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="geterrorinfo"></a> IErrorRecordsImpl::GetErrorInfo

Returns an [IErrorInfo](/previous-versions/windows/desktop/ms718112(v=vs.85)) interface pointer on the specified record.

### Syntax

```cpp
STDMETHOD(GetErrorInfo )(ULONG ulRecordNum,
   LCID lcid,
   IErrorInfo **ppErrorInfo);
```

#### Parameters

See [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="geterrorparameters"></a> IErrorRecordsImpl::GetErrorParameters

Returns the error parameters.

### Syntax

```cpp
STDMETHOD(GetErrorParameters )(ULONG ulRecordNum,
   DISPPARAMS *pdispparams);
```

#### Parameters

See [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="getrecordcount"></a> IErrorRecordsImpl::GetRecordCount

Returns the number of records in the OLE DB record object.

### Syntax

```cpp
STDMETHOD(GetRecordCount )(ULONG *pcRecords);
```

#### Parameters

See [IErrorRecords::GetRecordCount](/previous-versions/windows/desktop/ms722724(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="rgerrors"></a> IErrorRecordsImpl::m_rgErrors

An array of error records.

### Syntax

```cpp
CAtlArray< RecordClass > m_rgErrors;
```

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
