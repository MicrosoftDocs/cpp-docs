---
title: "CDynamicParameterAccessor Class | Microsoft Docs"
ms.custom: ""
ms.date: "02/14/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CDynamicParameterAccessor", "ATL::CDynamicParameterAccessor", "CDynamicParameterAccessor", "CDynamicParameterAccessor::CDynamicParameterAccessor", "CDynamicParameterAccessor.CDynamicParameterAccessor", "CDynamicParameterAccessor::GetParam", "ATL.CDynamicParameterAccessor.GetParam", "CDynamicParameterAccessor::GetParam<ctype>", "CDynamicParameterAccessor.GetParam", "GetParam", "ATL::CDynamicParameterAccessor::GetParam<ctype>", "ATL::CDynamicParameterAccessor::GetParam", "ATL::CDynamicParameterAccessor::GetParamCount", "CDynamicParameterAccessor::GetParamCount", "CDynamicParameterAccessor.GetParamCount", "GetParamCount", "ATL.CDynamicParameterAccessor.GetParamCount", "GetParamIO", "CDynamicParameterAccessor::GetParamIO", "ATL.CDynamicParameterAccessor.GetParamIO", "CDynamicParameterAccessor.GetParamIO", "ATL::CDynamicParameterAccessor::GetParamIO", "ATL::CDynamicParameterAccessor::GetParamLength", "ATL.CDynamicParameterAccessor.GetParamLength", "CDynamicParameterAccessor.GetParamLength", "CDynamicParameterAccessor::GetParamLength", "GetParamLength", "CDynamicParameterAccessor::GetParamName", "ATL.CDynamicParameterAccessor.GetParamName", "GetParamName", "CDynamicParameterAccessor.GetParamName", "ATL::CDynamicParameterAccessor::GetParamName", "CDynamicParameterAccessor::GetParamStatus", "CDynamicParameterAccessor.GetParamStatus","ATL.CDynamicParameterAccessor.GetParamStatus", "ATL::CDynamicParameterAccessor::GetParamStatus", "GetParamStatus", "CDynamicParameterAccessor.GetParamString", "GetParamString", "CDynamicParameterAccessor::GetParamString", "ATL.CDynamicParameterAccessor.GetParamString", "ATL::CDynamicParameterAccessor::GetParamString",  "CDynamicParameterAccessor.GetParamType", "CDynamicParameterAccessor:GetParamType", "CDynamicParameterAccessor::GetParamType", "ATL.CDynamicParameterAccessor.GetParamType", "GetParamType", "ATL::CDynamicParameterAccessor::GetParamType", "ATL::CDynamicParameterAccessor::SetParam", "ATL::CDynamicParameterAccessor::SetParam<ctype>", "CDynamicParameterAccessor.SetParam", "ATL.CDynamicParameterAccessor.SetParam", "SetParam", "CDynamicParameterAccessor:SetParam", "CDynamicParameterAccessor::SetParam<ctype>", "CDynamicParameterAccessor::SetParam", "ATL::CDynamicParameterAccessor::SetParamLength", "CDynamicParameterAccessor.SetParamLength", "ATL.CDynamicParameterAccessor.SetParamLength", "CDynamicParameterAccessor::SetParamLength", "SetParamLength", "CDynamicParameterAccessor::SetParamStatus", "ATL.CDynamicParameterAccessor.SetParamStatus", "ATL::CDynamicParameterAccessor::SetParamStatus", "CDynamicParameterAccessor.SetParamStatus", "SetParamStatus", "ATL.CDynamicParameterAccessor.SetParamString", "ATL::CDynamicParameterAccessor::SetParamString", "SetParamString", "CDynamicParameterAccessor::SetParamString", "CDynamicParameterAccessor.SetParamString"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDynamicParameterAccessor class", "CDynamicParameterAccessor class, constructor", "CDynamicParameterAccessor method", "GetParam method", 
  "GetParamCount method", "GetParamIO method", "GetParamLength method", "GetParamName method", "GetParamStatus method", "GetParamString method", "GetParamType method", "SetParam method", "SetParamLength method", "SetParamStatus method", "SetParamString method"]
ms.assetid: 5f22626e-e80d-491f-8b3b-cedc50331960
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicParameterAccessor Class

Similar to [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) but obtains parameter information to be set by calling the [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) interface.

## Syntax

```cpp
class CDynamicParameterAccessor : public CDynamicAccessor
```

## Requirements

**Header**: atldbcli.h

## Members

### Methods

|||
|-|-|
|[CDynamicParameterAccessor](#cdynamicparameteraccessor)|The constructor.|
|[GetParam](#getparam)|Retrieves the parameter data from the buffer.|
|[GetParamCount](#getparamcount)|Retrieves the number of parameters in the accessor.|
|[GetParamIO](#getparamio)|Determines whether the specified parameter is an input or output parameter.|
|[GetParamLength](#getparamlength)|Retrieves the length of the specified parameter stored in the buffer.|
|[GetParamName](#getparamname)|Retrieves the name of a specified parameter.|
|[GetParamStatus](#getparamstatus)|Retrieves the status of the specified parameter stored in the buffer.|
|[GetParamString](#getparamstring)|Retrieves the string data of the specified parameter stored in the buffer.|
|[GetParamType](#getparamtype)|Retrieves the data type of a specified parameter.|
|[SetParam](#setparam)|Sets the buffer using the parameter data.|
|[SetParamLength](#setparamlength)|Sets the length of the specified parameter stored in the buffer.|
|[SetParamStatus](#setparamstatus)|Sets the status of the specified parameter stored in the buffer.|
|[SetParamString](#setparamstring)|Sets the string data of the specified parameter stored in the buffer.|

## Remarks

The provider must support `ICommandWithParameters` for the consumer to use this class.

The parameter information is stored in a buffer created and managed by this class. Obtain parameter data from the buffer by using [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) and [GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).

For an example demonstrating how to use this class to execute a SQL Server stored procedure and get the output parameter values, see the [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) sample code in the [Microsoft VCSamples](https://github.com/Microsoft/VCSamples) repository on GitHub.

## <a name="cdynamicparameteraccessor"></a> CDynamicParameterAccessor::CDynamicParameterAccessor
The constructor.  
  
### Syntax  
  
```cpp
typedef CDynamicParameterAccessor _ParamClass;  
CDynamicParameterAccessor(DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000 )   
   : CDynamicAccessor(eBlobHandling, nBlobSize )  
```  
  
#### Parameters  
 *eBlobHandling*  
 Specifies how the BLOB data is to be handled. The default value is DBBLOBHANDLING_DEFAULT. See [CDynamicAccessor::SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) for a description of the DBBLOBHANDLINGENUM values.  
  
 *nBlobSize*  
 The maximum BLOB size in bytes; column data over this value is treated as a BLOB. The default value is 8,000. See [CDynamicAccessor::SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) for details.  
  
### Remarks  
 See the [CDynamicAccessor::CDynamicAccessor](../../data/oledb/cdynamicaccessor-cdynamicaccessor.md) constructor for more information on BLOB handling. 

## <a name="getparam"></a> CDynamicParameterAccessor::GetParam
Retrieves the nonstring data for a specified parameter from the parameter buffer.  
  
### Syntax  
  
```cpp
template <class ctype>bool GetParam(DBORDINAL nParam,   
   ctype* pData) const throw();  

template <class ctype> bool GetParam(TCHAR* pParamName,   
   ctype* pData) const throw();  

void* GetParam(DBORDINAL nParam) const throw();  

void* GetParam(TCHAR* pParamName) const throw();  
```  
  
#### Parameters  
 *ctype*  
 A templated parameter that is the data type.  
  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pParamName*  
 [in] The parameter name.  
  
 *pData*  
 [out] The pointer to the memory containing the data retrieved from the buffer.  
  
### Return Value  
 For nontemplated versions, points to the memory containing the data retrieved from the buffer. For templated versions, returns **true** on success or **false** on failure.  
  
 Use `GetParam` to retrieve nonstring parameter data from the buffer. Use [GetParamString](../../data/oledb/cdynamicparameteraccessor-getparamstring.md) to retrieve string parameter data from the buffer.  

## <a name="getparamcount"></a> CDynamicParameterAccessor::GetParamCount
Retrieves the number of parameters stored in the buffer.  
  
### Syntax  
  
```cpp
DB_UPARAMS GetParamCount() const throw();  
```  
  
### Return Value  
 The number of parameters.  

## <a name="getparamio"></a> CDynamicParameterAccessor::GetParamIO
Determines whether the specified parameter is an input or output parameter.  
  
### Syntax  
  
```cpp
bool GetParamIO(DBORDINAL nParam,   
   DBPARAMIO* pParamIO) const throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pParamIO*  
 A pointer to the variable containing the `DBPARAMIO` type (input or output) of the specified parameter. It is defined as follows:  
  
```cpp  
typedef DWORD DBPARAMIO;  
  
enum DBPARAMIOENUM {  
    DBPARAMIO_NOTPARAM   = 0,  
    DBPARAMIO_INPUT      = 0x1,  
    DBPARAMIO_OUTPUT     = 0x2  
};  
```  
  
### Return Value  
 Returns **true** on success or **false** on failure.  

## <a name="getparamlength"></a> CDynamicParameterAccessor::GetParamLength
Retrieves the length of the specified parameter stored in the buffer.  
  
### Syntax  
  
```cpp
bool GetParamLength(DBORDINAL nParam,  
   DBLENGTH* pLength);  

DBLENGTH* GetParamLength(DBORDINAL nParam) const throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pLength*  
 [out] A pointer to the variable containing the length in bytes of the specified parameter.  
  
### Remarks  
 The first override returns **true** on success or **false** on failure. The second override points to the memory containing the length of the parameter. 

## <a name="getparamname"></a> CDynamicParameterAccessor::GetParamName
Retrieves the name of the specified parameter.  
  
### Syntax  
  
```cpp
LPOLESTR GetParamName(DBORDINAL nParam) const throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
### Return Value  
 The name of the specified parameter.  

## <a name="getparamstatus"></a> CDynamicParameterAccessor::GetParamStatus
Retrieves the status of the specified parameter stored in the buffer.  
  
### Syntax  
  
```cpp
bool GetParamStatus(DBORDINAL nParam,  
   DBSTATUS* pStatus);  

DBSTATUS* GetParamStatus(DBORDINAL nParam) const throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pStatus*  
 [out] A pointer to the variable containing the DBSTATUS status of the specified parameter. For information on DBSTATUS values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for DBSTATUS in oledb.h.  
  
### Remarks  
 The first override returns **true** on success or **false** on failure. The second override points to the memory containing the status of the specified parameter.

## <a name="getparamstring"></a> CDynamicParameterAccessor::GetParamString
Retrieves the string data of the specified parameter stored in the buffer.  
  
### Syntax  
  
```cpp
bool GetParamString(DBORDINAL nParam,  
   CSimpleStringA& strOutput) throw();

bool GetParamString(DBORDINAL nParam,  
   CSimpleStringW& strOutput) throw();
   
bool GetParamString(DBORDINAL nParam,  
   CHAR* pBuffer,  
   size_t* pMaxLen) throw();

bool GetParamString(DBORDINAL nParam,  
   WCHAR* pBuffer,  
   size_t* pMaxLen) throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *strOutput*  
 [out] The ANSI (`CSimpleStringA`) or Unicode (`CSimpleStringW`) string data of the specified parameter. You should pass a parameter of type `CString`, for example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#9](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-getparamstring_1.cpp)]  
  
 *pBuffer*  
 [out] A pointer to the ANSI (**CHAR**) or Unicode (**WCHAR**) string data of the specified parameter.  
  
 *pMaxLen*  
 [out] A pointer to the size of the buffer pointed to by *pBuffer* (in characters, including the terminating NULL).  
  
### Remarks  
 Returns **true** on success or **false** on failure.  
  
 If *pBuffer* is NULL, this method will set the required buffer size in the memory pointed to by *pMaxLen* and return **true** without copying the data.  
  
 This method will fail if the buffer *pBuffer* is not large enough to contain the whole string.  
  
 Use `GetParamString` to retrieve string parameter data from the buffer. Use [GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) to retrieve nonstring parameter data from the buffer.  

## <a name="getparamtype"></a> CDynamicParameterAccessor::GetParamType
Retrieves the data type of a specified parameter.  
  
### Syntax  
  
```cpp
bool GetParamType(DBORDINAL nParam,  
   DBTYPE* pType) const throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pType*  
 [out] A pointer to the variable containing the data type of the specified parameter.  
  
### Return Value  
 Returns **true** on success or **false** on failure.  

## <a name="setparam"></a> CDynamicParameterAccessor::SetParam
Sets the parameter buffer using the specified (non-string) data.  
  
### Syntax  
  
```cpp
template <class ctype>
bool SetParam(DBORDINAL nParam,  
   constctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK) throw();  

template <class ctype>  
bool SetParam(TCHAR* pParamName,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK) throw();  
```  
  
#### Parameters  
 *ctype*  
 A templated parameter that is the data type.  
  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. For example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#8](../../data/oledb/codesnippet/cpp/cdynamicparameteraccessor-setparam_1.cpp)]  
  
 *pParamName*  
 [in] The parameter name.  
  
 *pData*  
 [in] The pointer to the memory containing the data to be written to the buffer.  
  
 *status*  
 [in] The DBSTATUS column status. For information on DBSTATUS values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for DBSTATUS in oledb.h.  
  
### Return Value  
 Returns **true** on success or **false** on failure.  
  
 Use `SetParam` to set nonstring parameter data in the buffer. Use [SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md) to set string parameter data in the buffer.  

## <a name="setparamlength"></a> CDynamicParameterAccessor::SetParamLength
Sets the length of the specified parameter stored in the buffer.  
  
### Syntax  
  
```cpp
bool SetParamLength(DBORDINAL nParam,  
   DBLENGTH length);  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *length*  
 [in] The length in bytes of the specified parameter.  
  
### Remarks  
 Returns **true** on success or **false** on failure. 

## <a name="setparamstatus"></a> CDynamicParameterAccessor::SetParamStatus
Sets the status of the specified parameter stored in the buffer.  
  
### Syntax  
  
```cpp
bool SetParamStatus(DBORDINAL nParam,  
   DBSTATUS status);  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *status*  
 [in] The DBSTATUS status of the specified parameter. For information on DBSTATUS values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for DBSTATUS in oledb.h.  
  
### Remarks  
 Returns **true** on success or **false** on failure. 

## <a name="setparamstring"></a> CDynamicParameterAccessor::SetParamString
Sets the string data of the specified parameter stored in the buffer.  
  
### Syntax  
  
```cpp
bool SetParamString(DBORDINAL nParam,   
   constCHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK) throw();bool SetParamString(DBORDINAL nParam,   
   constWCHAR* pString,   
   DBSTATUS status = DBSTATUS_S_OK) throw();  
```  
  
#### Parameters  
 *nParam*  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pString*  
 [in] A pointer to the ANSI (**CHAR**) or Unicode (**WCHAR**) string data of the specified parameter. See DBSTATUS in oledb.h.  
  
 *status*  
 [in] The DBSTATUS status of the specified parameter. For information on DBSTATUS values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for DBSTATUS in oledb.h.  
  
### Remarks  
 Returns **true** on success or **false** on failure.  
  
 `SetParamString` will fail if you try to set a string that is larger than the maximum size specified for *pString*.  
  
 Use `SetParamString` to set string parameter data in the buffer. Use [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) to set nonstring parameter data in the buffer. 

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)  
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)  
[CAccessor Class](../../data/oledb/caccessor-class.md)  
[CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)  
[CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)  