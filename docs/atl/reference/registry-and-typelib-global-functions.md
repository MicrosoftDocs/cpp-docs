---
title: "Registry and TypeLib Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegistryDataExchange function, global functions"
ms.assetid: d58b8a4e-975c-4417-8b34-d3c847f679b3
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Registry and TypeLib Global Functions
These functions provide support for loading and registering a type library.  
  
> [!IMPORTANT]
>  The functions listed in the following tables cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlRegisterTypeLib](#atlregistertypelib)|This function is called to register a type library.|  
|[AtlUnRegisterTypeLib](#atlunregistertypelib)|This function is called to unregister a type library|  
|[AtlLoadTypeLib](#atlloadtypelib)|This function is called to load a type library.|  
|[AtlUpdateRegistryFromResourceD](#atlupdateregistryfromresourced)|This function is called to update the registry from the supplied resource.|  
|[RegistryDataExchange](#registrydataexchange)|This function is called to read from, or write to, the system registry. Called by the [Registry Data Exchange Macros](../../atl/reference/registry-data-exchange-macros.md).|  
  
 These functions control which node in the registry the program uses to store information.  
  
|||  
|-|-|  
|[AtlGetPerUserRegistration](#atlgetperuserregistration)|Retrieves whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|  
|[AtlSetPerUserRegistration](#atlsetperuserregistration)|Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|  


## <a name="atlgetperuserregistration"></a> AtlGetPerUserRegistration
Use this function to determine whether the application redirects registry access to the **HKEY_CURRENT_USER** (**HKCU**) node.  
  
## Syntax  
  
```  
ATLINLINE ATLAPI AtlGetPerUserRegistration(  
   bool* pEnabled  
);  
```  
  
### Parameters  
 [out] `pEnabled`  
 `TRUE` indicates that the registry information is directed to the **HKCU** node; `FALSE` indicates that the application writes registry information to the default node. The default node is **HKEY_CLASSES_ROOT** (**HKCR**).  
  
### Return Value  
 `S_OK` if the method is successful, otherwise the `HRESULT` error code if an error occurs.  
  
### Remarks  
 Registry redirection is not enabled by default. If you enable this option, registry access is redirected to **HKEY_CURRENT_USER\Software\Classes**.  
  
 The redirection is not global. Only the MFC and ATL frameworks are affected by this registry redirection.  
  


##  <a name="atlregistertypelib"></a>  AtlRegisterTypeLib  
 This function is called to register a type library.  
  
  
```
ATLAPI AtlRegisterTypeLib(HINSTANCE hInstTypeLib, LPCOLESTR lpszIndex);
```  
  
### Parameters  
 `hInstTypeLib`  
 The handle to the module instance.  
  
 `lpszIndex`  
 String in the format "\\\N", where N is the integer index of the type library resource. Can be NULL if no index is required.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This helper function is utilized by [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver) and [CAtlComModule::RegisterTypeLib](../../atl/reference/catlcommodule-class.md#catlcommodule__registertypelib).  
  
## <a name="atlsetperuserregistration"></a> AtlSetPerUserRegistration
Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** (**HKCU**) node.  
  
## Syntax  
  
```  
ATLINLINE ATLAPI AtlSetPerUserRegistration(  
   bool bEnable  
);  
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` indicates that the registry information is directed to the **HKCU** node; `FALSE` indicates that the application writes registry information to the default node. The default node is **HKEY_CLASSES_ROOT** (**HKCR**).  
  
### Return Value  
 `S_OK` if the method is successful, otherwise the `HRESULT` error code if an error occurs.  
  
### Remarks  
 Registry redirection is not enabled by default. If you enable this option, registry access is redirected to **HKEY_CURRENT_USER\Software\Classes**.  
  
 The redirection is not global. Only the MFC and ATL frameworks are affected by this registry redirection.  
  

##  <a name="atlunregistertypelib"></a>  AtlUnRegisterTypeLib  
 This function is called to unregister a type library.  
  

```
ATLAPI AtlUnRegisterTypeLib(
    HINSTANCE hInstTypeLib,  LPCOLESTR lpszIndex);
```  
  
### Parameters  
 `hInstTypeLib`  
 The handle to the module instance.  
  
 `lpszIndex`  
 String in the format "\\\N", where N is the integer index of the type library resource. Can be NULL if no index is required.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This helper function is utilized by [CAtlComModule::UnRegisterTypeLib](../../atl/reference/catlcommodule-class.md#catlcommodule__unregistertypelib) and [AtlComModuleUnregisterServer](#atlcommoduleunregisterserver).  
  
##  <a name="atlloadtypelib"></a>  AtlLoadTypeLib  
 This function is called to load a type library.  
  

```
ATLINLINE ATLAPI AtlLoadTypeLib(
    HINSTANCE hInstTypeLib,
    LPCOLESTR lpszIndex,
    BSTR* pbstrPath,
    ITypeLib** ppTypeLib);
```  
  
### Parameters  
 `hInstTypeLib`  
 Handle to the module associated with the type library.  
  
 `lpszIndex`  
 String in the format "\\\N", where N is the integer index of the type library resource. Can be NULL if no index is required.  
  
 *pbstrPath*  
 On successful return, contains the full path of the module associated with the type library.  
  
 `ppTypeLib`  
 On successful return, contains a pointer to a pointer to the loaded type library.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This helper function is utilized by [AtlRegisterTypeLib](#atlregistertypelib) and [AtlUnRegisterTypeLib](#atlunregistertypelib).  
  
##  <a name="atlupdateregistryfromresourced"></a>  AtlUpdateRegistryFromResourceD  
 This function was deprecated in Visual Studio 2013 and is removed in Visual Studio 2015.  
  
```
<removed>
```  
  
### Parameters  
  
### Return Value  
  
### Remarks  
  
##  <a name="registrydataexchange"></a>  RegistryDataExchange  
 This function is called to read from, or write to, the system registry.  
 
```
HRESULT RegistryDataExchange(
    T* pT,
    enum RDXOperations rdxOp,
    void* pItem = NULL);
```  
  
### Parameters  
 *pT*  
 A pointer to the current object.  
  
 *rdxOp*  
 An enum value that indicates which operation the function should perform. See the table in the Remarks section for the allowed values.  
  
 `pItem`  
 Pointer to the data that is to be read from, or written to, the registry. The data can also represent a key to be deleted from the registry. The default value is NULL.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The macros [BEGIN_RDX_MAP](http://msdn.microsoft.com/library/95bbba6a-d550-4e36-8e6e-1c619d9e660d) and [END_RDX_MAP](http://msdn.microsoft.com/library/77efa3bd-ded7-430c-b5b4-2131a2d7e71d) expand to a function that calls `RegistryDataExchange`.  
  
 The possible enum values that indicate the operation the function should perform are shown in the following table:  
  
|Enum value|Operation|  
|----------------|---------------|  
|eReadFromReg|Read data from the registry.|  
|eWriteToReg|Write data to the registry.|  
|eDeleteFromReg|Delete the key from the registry.|  
  
##  <a name="registry_data_exchange_macros"></a>  Registry Data Exchange Macros  
 These macros perform Registry Data Exchange operations.  
  
|||  
|-|-|  
|[BEGIN_RDX_MAP](http://msdn.microsoft.com/library/95bbba6a-d550-4e36-8e6e-1c619d9e660d)|Marks the beginning of the Registry Data Exchange map.|  
|[END_RDX_MAP](http://msdn.microsoft.com/library/77efa3bd-ded7-430c-b5b4-2131a2d7e71d)|Marks the end of the Registry Data Exchange map.|  
|[RDX_BINARY](http://msdn.microsoft.com/library/cc872cdb-fe5a-45cd-8ed8-00be54911f2a)|Associates the specified registry entry with a specified member variable of type BYTE.|  
|[RDX_CSTRING_TEXT](http://msdn.microsoft.com/library/897ac6dc-2700-4818-8327-3a779aa7bc6c)|Associates the specified registry entry with a specified member variable of type CString.|  
|[RDX_DWORD](http://msdn.microsoft.com/library/1e7d4888-284f-4fe7-99de-5f193af19c4d)|Associates the specified registry entry with a specified member variable of type DWORD.|  
|[RDX_TEXT](http://msdn.microsoft.com/library/47566a2e-f293-4b67-8e1c-fa83a0a0c558)|Associates the specified registry entry with a specified member variable of type TCHAR.|  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)





