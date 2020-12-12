---
description: "Learn more about: Registry and TypeLib Global Functions"
title: "Registry and TypeLib Global Functions"
ms.date: "03/27/2019"
f1_keywords: ["atlbase/ATL::AtlGetPerUserRegistration", "afxpriv/ATL::AfxRegCreateKey", "afxpriv/ATL::AfxRegDeleteKey", "atlbase/ATL::AtlRegisterTypeLib", "afxpriv/ATL::AfxRegOpenKey", "afxpriv/ATL::AfxRegOpenKeyEx", "afxdisp/ATL::AfxUnregisterPreviewHandler", "atlbase/ATL::AtlSetPerUserRegistration", "atlbase/ATL::AtlUnRegisterTypeLib", "atlbase/ATL::AtlLoadTypeLib", "atlbase/ATL::AtlUpdateRegistryFromResourceD", "atlbase/ATL::RegistryDataExchange"]
helpviewer_keywords: ["RegistryDataExchange function, global functions"]
ms.assetid: d58b8a4e-975c-4417-8b34-d3c847f679b3
---
# Registry and TypeLib Global Functions

These functions provide support for loading and registering a type library.

> [!IMPORTANT]
> The functions listed in the following tables cannot be used in applications that execute in the Windows Runtime.

|Name|Description|
|-|-|
|[AfxRegCreateKey](#afxregcreatekey)|Creates the specified registry key.|
|[AfxRegDeleteKey](#afxregdeletekey)|Deletes the specified registry key.|
|[AfxRegisterPreviewHandler](#afxregisterpreviewhandler)|A helper to register a preview handler.|
|[AfxUnregisterPreviewHandler](#afxunregisterpreviewhandler)| A helper to unregister a preview handler. |
|[AtlRegisterTypeLib](#atlregistertypelib)|This function is called to register a type library.|
|[AtlUnRegisterTypeLib](#atlunregistertypelib)|This function is called to unregister a type library|
|[AfxRegOpenKey](#afxregopenkey)|Opens the specified registry key.|
|[AfxRegOpenKeyEx](#afxregopenkeyex)|Opens the specified registry key.|
|[AtlLoadTypeLib](#atlloadtypelib)|This function is called to load a type library.|
|[AtlUpdateRegistryFromResourceD](#atlupdateregistryfromresourced)|This function is called to update the registry from the supplied resource.|
|[RegistryDataExchange](#registrydataexchange)|This function is called to read from, or write to, the system registry. Called by the [Registry Data Exchange Macros](../../atl/reference/registry-data-exchange-macros.md).|

These functions control which node in the registry the program uses to store information.

|Name|Description|
|-|-|
|[AtlGetPerUserRegistration](#atlgetperuserregistration)|Retrieves whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|
|[AtlSetPerUserRegistration](#atlsetperuserregistration)|Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|

### Requirements

**Header:** atlbase.h

## <a name="atlgetperuserregistration"></a> AtlGetPerUserRegistration

Use this function to determine whether the application redirects registry access to the **HKEY_CURRENT_USER** (**HKCU**) node.

### Syntax

```
ATLINLINE ATLAPI AtlGetPerUserRegistration(bool* pEnabled);
```

### Parameters

*pEnabled*<br/>
[out] TRUE indicates that the registry information is directed to the **HKCU** node; FALSE indicates that the application writes registry information to the default node. The default node is **HKEY_CLASSES_ROOT** (**HKCR**).

### Return Value

S_OK if the method is successful, otherwise the HRESULT error code if an error occurs.

### Remarks

Registry redirection is not enabled by default. If you enable this option, registry access is redirected to **HKEY_CURRENT_USER\Software\Classes**.

The redirection is not global. Only the MFC and ATL frameworks are affected by this registry redirection.

### Requirements

**Header:** atlbase.h

## <a name="afxregcreatekey"></a> AfxRegCreateKey

Creates the specified registry key.

### Syntax

```
LONG AFXAPI AfxRegCreateKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### Parameters

*hKey*<br/>
A handle to an open registry key.

*lpSubKey*<br/>
The name of a key that this function opens or creates.

*phkResult*<br/>
A pointer to a variable that receives a handle to the opened or created key.

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Requirements

**Header:** afxpriv.h

## <a name="afxregdeletekey"></a> AfxRegDeleteKey

Deletes the specified registry key.

### Syntax

```
LONG AFXAPI AfxRegDeleteKey(HKEY hKey, LPCTSTR lpSubKey, CAtlTransactionManager* pTM = NULL);
```

### Parameters

*hKey*<br/>
A handle to an open registry key.

*lpSubKey*<br/>
The name of the key to be deleted.

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Requirements

**Header:** afxpriv.h

## <a name="afxregisterpreviewhandler"></a>

A helper to register a preview handler.

### Syntax

```
BOOL AFXAPI AfxRegisterPreviewHandler(LPCTSTR lpszCLSID, LPCTSTR lpszShortTypeName, LPCTSTR lpszFilterExt);
```

### Parameters

*lpszCLSID*<br/>
Specifies the CLSID of handler.

*lpszShortTypeName*<br/>
Specifies the ProgID of handler.

*lpszFilterExt*<br/>
Specifies the file extension registered with this handler.

### Requirements

**Header:** afxdisp.h

## <a name="atlregistertypelib"></a> AtlRegisterTypeLib

This function is called to register a type library.

```
ATLAPI AtlRegisterTypeLib(HINSTANCE hInstTypeLib, LPCOLESTR lpszIndex);
```

### Parameters

*hInstTypeLib*<br/>
The handle to the module instance.

*lpszIndex*<br/>
String in the format "\\\N", where N is the integer index of the type library resource. Can be NULL if no index is required.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This helper function is utilized by [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver) and [CAtlComModule::RegisterTypeLib](../../atl/reference/catlcommodule-class.md#registertypelib).

### Requirements

**Header:** atlbase.h

## <a name="afxregopenkey"></a> AfxRegOpenKey

Opens the specified registry key.

### Syntax

```
LONG AFXAPI AfxRegOpenKey(HKEY hKey, LPCTSTR lpSubKey, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### Parameters

*hKey*<br/>
A handle to an open registry key.

*lpSubKey*<br/>
The name of a key that this function opens or creates.

*phkResult*<br/>
A pointer to a variable that receives a handle to the created key.

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Requirements

**Header:** afxpriv.h

## <a name="afxregopenkeyex"></a> AfxRegOpenKeyEx

Opens the specified registry key.

### Syntax

```
LONG AFXAPI AfxRegOpenKeyEx(HKEY hKey, LPCTSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, CAtlTransactionManager* pTM = NULL);
```

### Parameters

*hKey*<br/>
A handle to an open registry key.

*lpSubKey*<br/>
The name of a key that this function opens or creates.

*ulOptions*<br/>
This parameter is reserved and must be zero.

*samDesired*<br/>
A mask that specifies the desired access rights to the key.

*phkResult*<br/>
A pointer to a variable that receives a handle to the opened key.

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

If the function succeeds, the return value is ERROR_SUCCESS. If the function fails, the return value is a nonzero error code defined in Winerror.h.

### Requirements

**Header:** afxpriv.h

## <a name="afxunregisterpreviewhandler"></a> AfxUnregisterPreviewHandler

A helper to unregister a preview handler.

### Syntax

```
BOOL AFXAPI AfxUnRegisterPreviewHandler(LPCTSTR lpszCLSID);
```

### Parameters

*lpszCLSID*<br/>
Specifies the CLSID of the handler to be unregistered.

### Requirements

**Header:** afxdisp.h

## <a name="atlsetperuserregistration"></a> AtlSetPerUserRegistration

Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** (**HKCU**) node.

### Syntax

```
ATLINLINE ATLAPI AtlSetPerUserRegistration(bool bEnable);
```

### Parameters

*bEnable*<br/>
[in] TRUE indicates that the registry information is directed to the **HKCU** node; FALSE indicates that the application writes registry information to the default node. The default node is **HKEY_CLASSES_ROOT** (**HKCR**).

### Return Value

S_OK if the method is successful, otherwise the HRESULT error code if an error occurs.

### Remarks

Registry redirection is not enabled by default. If you enable this option, registry access is redirected to **HKEY_CURRENT_USER\Software\Classes**.

The redirection is not global. Only the MFC and ATL frameworks are affected by this registry redirection.

### Requirements

**Header:** atlbase.h

## <a name="atlunregistertypelib"></a> AtlUnRegisterTypeLib

This function is called to unregister a type library.

### Syntax

```
ATLAPI AtlUnRegisterTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex);
```

### Parameters

*hInstTypeLib*<br/>
The handle to the module instance.

*lpszIndex*<br/>
String in the format "\\\N", where N is the integer index of the type library resource. Can be NULL if no index is required.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This helper function is utilized by [CAtlComModule::UnRegisterTypeLib](../../atl/reference/catlcommodule-class.md#unregistertypelib) and [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).

### Requirements

**Header:** atlbase.h

## <a name="atlloadtypelib"></a> AtlLoadTypeLib

This function is called to load a type library.

### Syntax

```
ATLINLINE ATLAPI AtlLoadTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex,
    BSTR* pbstrPath,
    ITypeLib** ppTypeLib);
```

### Parameters

*hInstTypeLib*<br/>
Handle to the module associated with the type library.

*lpszIndex*<br/>
String in the format "\\\N", where N is the integer index of the type library resource. Can be NULL if no index is required.

*pbstrPath*<br/>
On successful return, contains the full path of the module associated with the type library.

*ppTypeLib*<br/>
On successful return, contains a pointer to a pointer to the loaded type library.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

This helper function is utilized by [AtlRegisterTypeLib](#atlregistertypelib) and [AtlUnRegisterTypeLib](#atlunregistertypelib).

## <a name="atlupdateregistryfromresourced"></a> AtlUpdateRegistryFromResourceD

This function was deprecated in Visual Studio 2013 and is removed in Visual Studio 2015.

```
<removed>
```

## <a name="registrydataexchange"></a> RegistryDataExchange

This function is called to read from, or write to, the system registry.

### Syntax

```
HRESULT RegistryDataExchange(
    T* pT,
    enum RDXOperations rdxOp,
    void* pItem = NULL);
```

### Parameters

*pT*<br/>
A pointer to the current object.

*rdxOp*<br/>
An enum value that indicates which operation the function should perform. See the table in the Remarks section for the allowed values.

*pItem*<br/>
Pointer to the data that is to be read from, or written to, the registry. The data can also represent a key to be deleted from the registry. The default value is NULL.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The macros [BEGIN_RDX_MAP](registry-data-exchange-macros.md#begin_rdx_map) and [END_RDX_MAP](registry-data-exchange-macros.md#end_rdx_map) expand to a function that calls `RegistryDataExchange`.

The possible enum values that indicate the operation the function should perform are shown in the following table:

|Enum value|Operation|
|----------------|---------------|
|eReadFromReg|Read data from the registry.|
|eWriteToReg|Write data to the registry.|
|eDeleteFromReg|Delete the key from the registry.|

### Requirements

**Header:** atlbase.h

## See also

[Functions](atl-functions.md)<br/>
[Registry Data Exchange Macros](registry-data-exchange-macros.md)
