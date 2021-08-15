---
description: "Learn more about: CDaoException Class"
title: "CDaoException Class"
ms.date: "09/17/2019"
f1_keywords: ["CDaoException", "AFXDAO/CDaoException", "AFXDAO/CDaoException::CDaoException", "AFXDAO/CDaoException::GetErrorCount", "AFXDAO/CDaoException::GetErrorInfo", "AFXDAO/CDaoException::m_nAfxDaoError", "AFXDAO/CDaoException::m_pErrorInfo", "AFXDAO/CDaoException::m_scode"]
helpviewer_keywords: ["CDaoException [MFC], CDaoException", "CDaoException [MFC], GetErrorCount", "CDaoException [MFC], GetErrorInfo", "CDaoException [MFC], m_nAfxDaoError", "CDaoException [MFC], m_pErrorInfo", "CDaoException [MFC], m_scode"]
ms.assetid: b2b01fa9-7ce2-42a1-842e-40f13dc50da4
---
# CDaoException Class

Represents an exception condition arising from the MFC database classes based on data access objects (DAO). DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
class CDaoException : public CException
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDaoException::CDaoException](#cdaoexception)|Constructs a `CDaoException` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoException::GetErrorCount](#geterrorcount)|Returns the number of errors in the database engine's Errors collection.|
|[CDaoException::GetErrorInfo](#geterrorinfo)|Returns error information about a particular error object in the Errors collection.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoException::m_nAfxDaoError](#m_nafxdaoerror)|Contains an extended error code for any error in the MFC DAO classes.|
|[CDaoException::m_pErrorInfo](#m_perrorinfo)|A pointer to a [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) object that contains information about one DAO error object.|
|[CDaoException::m_scode](#m_scode)|The [SCODE](#m_scode) value associated with the error.|

## Remarks

The class includes public data members you can use to determine the cause of the exception. `CDaoException` objects are constructed and thrown by member functions of the DAO database classes.

> [!NOTE]
> The DAO database classes are distinct from the MFC database classes based on Open Database Connectivity (ODBC). All DAO database class names have the "CDao" prefix. You can still access ODBC data sources with the DAO classes. In general, the MFC classes based on DAO are more capable than the MFC classes based on ODBC; the DAO-based classes can access data, including through ODBC drivers, via their own database engine. The DAO-based classes also support Data Definition Language (DDL) operations, such as adding tables via the classes, without having to call DAO directly. For information on exceptions thrown by the ODBC classes, see [CDBException](../../mfc/reference/cdbexception-class.md).

You can access exception objects within the scope of a [CATCH](../../mfc/reference/exception-processing.md#catch) expression. You can also throw `CDaoException` objects from your own code with the [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception) global function.

In MFC, all DAO errors are expressed as exceptions, of type `CDaoException`. When you catch an exception of this type, you can use `CDaoException` member functions to retrieve information from any DAO error objects stored in the database engine's Errors collection. As each error occurs, one or more error objects are placed in the Errors collection. (Normally the collection contains only one error object; if you are using an ODBC data source, you are more likely to get multiple error objects.) When another DAO operation generates an error, the Errors collection is cleared, and the new error object is placed in the Errors collection. DAO operations that do not generate an error have no effect on the Errors collection.

For DAO error codes, see the file DAOERR.H. For related information, see the topic "Trappable Data Access Errors" in DAO Help.

For more information about exception handling in general, or about `CDaoException` objects, see the articles [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md) and [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md). The second article contains example code that illustrates exception handling in DAO.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CDaoException`

## Requirements

**Header:** afxdao.h

## <a name="cdaoexception"></a> CDaoException::CDaoException

Constructs a `CDaoException` object.

```
CDaoException();
```

### Remarks

Ordinarily, the framework creates exception objects when its code throws an exception. You seldom need to construct an exception object explicitly. If you want to throw a `CDaoException` from your own code, call the global function [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception).

However, you might want to explicitly create an exception object if you are making direct calls to DAO via the DAO interface pointers that MFC classes encapsulate. In that case, you might need to retrieve error information from DAO. Suppose an error occurs in DAO when you call a DAO method via the DAODatabases interface to a workspace's Databases collection.

##### To retrieve the DAO error information

1. Construct a `CDaoException` object.

1. Call the exception object's [GetErrorCount](#geterrorcount) member function to determine how many error objects are in the database engine's Errors collection. (Normally only one, unless you are using an ODBC data source.)

1. Call the exception object's [GetErrorInfo](#geterrorinfo) member function to retrieve one specific error object at a time, by index in the collection, via the exception object. Think of the exception object as a proxy for one DAO error object.

1. Examine the current [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) structure that `GetErrorInfo` returns in the [m_pErrorInfo](#m_perrorinfo) data member. Its members provide information on the DAO error.

1. In the case of an ODBC data source, repeat steps 3 and 4 as needed, for more error objects.

1. If you constructed the exception object on the heap, delete it with the **`delete`** operator when you finish.

For more information about handling errors in the MFC DAO classes, see the article [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md).

## <a name="geterrorcount"></a> CDaoException::GetErrorCount

Call this member function to retrieve the number of DAO error objects in the database engine's Errors collection.

```
short GetErrorCount();
```

### Return Value

The number of DAO error objects in the database engine's Errors collection.

### Remarks

This information is useful for looping through the Errors collection to retrieve each of the one or more DAO error objects in the collection. To retrieve an error object by index or by DAO error number, call the [GetErrorInfo](#geterrorinfo) member function.

> [!NOTE]
> Normally there is only one error object in the Errors collection. If you are working with an ODBC data source, however, there could be more than one.

## <a name="geterrorinfo"></a> CDaoException::GetErrorInfo

Returns error information about a particular error object in the Errors collection.

```cpp
void GetErrorInfo(int nIndex);
```

### Parameters

*nIndex*<br/>
The index of the error information in the database engine's Errors collection, for lookup by index.

### Remarks

Call this member function to obtain the following kinds of information about the exception:

- Error code

- Source

- Description

- Help file

- Help context

`GetErrorInfo` stores the information in the exception object's `m_pErrorInfo` data member. For a brief description of the information returned, see [m_pErrorInfo](#m_perrorinfo). If you catch an exception of type `CDaoException` thrown by MFC, the `m_pErrorInfo` member will already be filled in. If you choose to call DAO directly, you must call the exception object's `GetErrorInfo` member function yourself to fill `m_pErrorInfo`. For a more detailed description, see the [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) structure.

For information about DAO exceptions, and example code, see the article [Exceptions: Database Exceptions](../../mfc/exceptions-database-exceptions.md).

## <a name="m_nafxdaoerror"></a> CDaoException::m_nAfxDaoError

Contains an MFC extended error code.

### Remarks

This code is supplied in cases where a specific component of the MFC DAO classes has erred.

Possible values are:

- NO_AFX_DAO_ERROR The most recent operation did not result in an MFC extended error. However, the operation could have produced other errors from DAO or OLE, so you should check [m_pErrorInfo](#m_perrorinfo) and possibly [m_scode](#m_scode).

- AFX_DAO_ERROR_ENGINE_INITIALIZATION MFC could not initialize the Microsoft Jet database engine. OLE might have failed to initialize, or it might have been impossible to create an instance of the DAO database engine object. These problems usually suggest a bad installation of either DAO or OLE.

- AFX_DAO_ERROR_DFX_BIND An address used in a DAO record field exchange (DFX) function call does not exist or is invalid (the address was not used to bind data). You might have passed a bad address in a DFX call, or the address might have become invalid between DFX operations.

- AFX_DAO_ERROR_OBJECT_NOT_OPEN You attempted to open a recordset based on a querydef or a tabledef object that was not in an open state.

## <a name="m_perrorinfo"></a> CDaoException::m_pErrorInfo

Contains a pointer to a `CDaoErrorInfo` structure that provides information on the DAO error object that you last retrieved by calling [GetErrorInfo](#geterrorinfo).

### Remarks

This object contains the following information:

|CDaoErrorInfo member|Information|Meaning|
|--------------------------|-----------------|-------------|
|`m_lErrorCode`|Error Code|The DAO error code|
|`m_strSource`|Source|The name of the object or application that originally generated the error|
|`m_strDescription`|Description|A descriptive string associated with the error|
|`m_strHelpFile`|Help File|A path to a Windows Help file in which the user can get information about the problem|
|`m_lHelpContext`|Help Context|The context ID for a topic in the DAO Help file|

For full details about the information contained in the `CDaoErrorInfo` object, see the [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) structure.

## <a name="m_scode"></a> CDaoException::m_scode

Contains a value of type `SCODE` that describes the error.

### Remarks

This is an OLE code. You will seldom need to use this value because, in almost all cases, more specific MFC or DAO error information is available in the other `CDaoException` data members.

For information about SCODE, see the topic [Structure of OLE Error Codes](/windows/win32/com/structure-of-com-error-codes) in the Windows SDK. The SCODE data type maps to the HRESULT data type.

## See also

[CException Class](../../mfc/reference/cexception-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CException Class](../../mfc/reference/cexception-class.md)
