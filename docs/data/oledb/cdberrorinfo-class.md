---
description: "Learn more about: CDBErrorInfo Class"
title: "CDBErrorInfo Class"
ms.date: "11/04/2016"
f1_keywords: ["CDBErrorInfo", "ATL::CDBErrorInfo", "ATL.CDBErrorInfo", "ATL.CDBErrorInfo.GetAllErrorInfo", "CDBErrorInfo::GetAllErrorInfo", "ATL::CDBErrorInfo::GetAllErrorInfo", "CDBErrorInfo.GetAllErrorInfo", "CDBErrorInfo::GetBasicErrorInfo", "ATL.CDBErrorInfo.GetBasicErrorInfo", "CDBErrorInfo.GetBasicErrorInfo", "ATL::CDBErrorInfo::GetBasicErrorInfo", "CDBErrorInfo::GetCustomErrorObject", "ATL.CDBErrorInfo.GetCustomErrorObject", "CDBErrorInfo.GetCustomErrorObject", "ATL::CDBErrorInfo::GetCustomErrorObject", "ATL.CDBErrorInfo.GetErrorInfo", "CDBErrorInfo.GetErrorInfo", "ATL::CDBErrorInfo::GetErrorInfo", "CDBErrorInfo::GetErrorInfo", "ATL.CDBErrorInfo.GetErrorParameters", "CDBErrorInfo::GetErrorParameters", "ATL::CDBErrorInfo::GetErrorParameters", "CDBErrorInfo.GetErrorParameters", "CDBErrorInfo.GetErrorRecords", "ATL.CDBErrorInfo.GetErrorRecords", "ATL::CDBErrorInfo::GetErrorRecords", "CDBErrorInfo::GetErrorRecords"]
helpviewer_keywords: ["CDBErrorInfo class", "GetAllErrorInfo method", "GetBasicErrorInfo method", "GetCustomErrorObject method", "GetErrorInfo method", "GetErrorParameters method", "GetErrorRecords method"]
ms.assetid: 9a5c18a2-ee3e-40f5-ab4c-581288d7f737
---
# CDBErrorInfo Class

Provides support for OLE DB error processing using the OLE DB [IErrorRecords](/previous-versions/windows/desktop/ms718112(v=vs.85)) interface.

## Syntax

```cpp
class CDBErrorInfo
```

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[GetAllErrorInfo](#getallerrorinfo)|Returns all error information contained in an error record.|
|[GetBasicErrorInfo](#getbasicerrorinfo)|Calls [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) to return basic information about the specified error.|
|[GetCustomErrorObject](#getcustomerrorobject)|Calls [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) to return a pointer to an interface on a custom error object.|
|[GetErrorInfo](#geterrorinfo)|Calls [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) to return an `IErrorInfo` interface pointer to the specified record.|
|[GetErrorParameters](#geterrorparameters)|Calls [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) to return the error parameters.|
|[GetErrorRecords](#geterrorrecords)|Gets error records for the specified object.|

## Remarks

This interface returns one or more error records to the user. Call [CDBErrorInfo::GetErrorRecords](#geterrorrecords) first, to get a count of error records. Then call one of the access functions, such as [CDBErrorInfo::GetAllErrorInfo](#getallerrorinfo), to retrieve error information for each record.

## <a name="getallerrorinfo"></a> CDBErrorInfo::GetAllErrorInfo

Returns all the types of error information contained in an error record.

### Syntax

```cpp
HRESULT GetAllErrorInfo(ULONG ulRecordNum,
   LCID lcid,  BSTR* pbstrDescription,
   BSTR* pbstrSource = NULL,
   GUID* pguid = NULL,
   DWORD* pdwHelpContext = NULL,
   BSTR* pbstrHelpFile = NULL) const throw();
```

#### Parameters

*ulRecordNum*<br/>
[in] The zero-based number of the record for which to return error information.

*lcid*<br/>
[in] The locale ID for the error information to be returned.

*pbstrDescription*<br/>
[out] A pointer to a text description of the error or NULL if the locale is not supported. See Remarks.

*pbstrSource*<br/>
[out] A pointer to a string containing the name of the component that generated the error.

*pguid*<br/>
[out] A pointer to the GUID of the interface that defined the error.

*pdwHelpContext*<br/>
[out] A pointer to the help context ID for the error.

*pbstrHelpFile*<br/>
[out] A pointer to a string containing the path to the help file that describes the error.

### Return Value

S_OK if successful. See [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) in the *OLE DB Programmer's Reference* for other return values.

### Remarks

The output value of *pbstrDescription* is obtained internally by calling `IErrorInfo::GetDescription`, which sets the value to NULL if the locale is not supported, or if both of the following conditions are true:

1. the value of *lcid* is NOT U.S. English and

1. the value of *lcid* is NOT equal to the value returned by GetUserDefaultLCID.

## <a name="getbasicerrorinfo"></a> CDBErrorInfo::GetBasicErrorInfo

Calls [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) to return basic information about the error, such as the return code and provider-specific error number.

### Syntax

```cpp
HRESULT GetBasicErrorInfo(ULONG ulRecordNum,
   ERRORINFO* pErrorInfo) const throw();
```

#### Parameters

See [IErrorRecords::GetBasicErrorInfo](/previous-versions/windows/desktop/ms723907(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="getcustomerrorobject"></a> CDBErrorInfo::GetCustomErrorObject

Calls [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) to return a pointer to an interface on a custom error object.

### Syntax

```cpp
HRESULT GetCustomErrorObject(ULONG ulRecordNum,
   REFIID riid,IUnknown** ppObject) const throw();
```

#### Parameters

See [IErrorRecords::GetCustomErrorObject](/previous-versions/windows/desktop/ms725417(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="geterrorinfo"></a> CDBErrorInfo::GetErrorInfo

Calls [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) to return an [IErrorInfo](/previous-versions/windows/desktop/ms718112(v=vs.85)) interface pointer to the specified record.

### Syntax

```cpp
HRESULT GetErrorInfo(ULONG ulRecordNum,
   LCID lcid,IErrorInfo** ppErrorInfo) const throw();
```

#### Parameters

See [IErrorRecords::GetErrorInfo](/previous-versions/windows/desktop/ms711230(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="geterrorparameters"></a> CDBErrorInfo::GetErrorParameters

Calls [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) to return the error parameters.

### Syntax

```cpp
HRESULT GetErrorParameters(ULONG ulRecordNum,
   DISPPARAMS* pdispparams) const throw();
```

#### Parameters

See [IErrorRecords::GetErrorParameters](/previous-versions/windows/desktop/ms715793(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT.

## <a name="geterrorrecords"></a> CDBErrorInfo::GetErrorRecords

Gets error records for the specified object.

### Syntax

```cpp
HRESULT GetErrorRecords(IUnknown* pUnk,
   const IID& iid,
   ULONG* pcRecords) throw();

HRESULT GetErrorRecords(ULONG* pcRecords) throw();
```

#### Parameters

*pUnk*<br/>
[in] Interface to the object for which to get error records.

*iid*<br/>
[in] The IID of the interface associated with the error.

*pcRecords*<br/>
[out] A pointer to the (one-based) count of error records.

### Return Value

A standard HRESULT.

### Remarks

Use the first form of the function if you want to check which interface to get the error information from. Otherwise, use the second form.

## See also

[DBViewer](../../overview/visual-cpp-samples.md)<br/>
[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
