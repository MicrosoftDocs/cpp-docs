---
title: "Registry and TypeLib Global Functions"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 21
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
|[AtlRegisterTypeLib](../Topic/AtlRegisterTypeLib.md)|This function is called to register a type library.|  
|[AtlUnRegisterTypeLib](../Topic/AtlUnRegisterTypeLib.md)|This function is called to unregister a type library|  
|[AtlLoadTypeLib](../Topic/AtlLoadTypeLib.md)|This function is called to load a type library.|  
|[AtlUpdateRegistryFromResourceD](../Topic/AtlUpdateRegistryFromResourceD.md)|This function is called to update the registry from the supplied resource.|  
|[RegistryDataExchange](../Topic/RegistryDataExchange.md)|This function is called to read from, or write to, the system registry. Called by the [Registry Data Exchange Macros](../../atl/reference/registry-data-exchange-macros.md).|  
  
 These functions control which node in the registry the program uses to store information.  
  
|||  
|-|-|  
|[AtlGetPerUserRegistration](../Topic/AtlGetPerUserRegistration.md)|Retrieves whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|  
|[AtlSetPerUserRegistration](../Topic/AtlSetPerUserRegistration.md)|Sets whether the application redirects registry access to the **HKEY_CURRENT_USER** ( **HKCU**) node.|  
  
##  <a name="atlregistertypelib"></a>  AtlRegisterTypeLib  
 This function is called to register a type library.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
ATLAPI AtlRegisterTypeLib(
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
 This helper function is utilized by [AtlComModuleUnregisterServer](../Topic/AtlComModuleUnregisterServer.md) and [CAtlComModule::RegisterTypeLib](../Topic/CAtlComModule::RegisterTypeLib.md).  
  
##  <a name="atlunregistertypelib"></a>  AtlUnRegisterTypeLib  
 This function is called to unregister a type library.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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
 This helper function is utilized by [CAtlComModule::UnRegisterTypeLib](../Topic/CAtlComModule::UnRegisterTypeLib.md) and [AtlComModuleUnregisterServer](../Topic/AtlComModuleUnregisterServer.md).  
  
##  <a name="atlloadtypelib"></a>  AtlLoadTypeLib  
 This function is called to load a type library.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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
 This helper function is utilized by [AtlRegisterTypeLib](../Topic/AtlRegisterTypeLib.md) and [AtlUnRegisterTypeLib](../Topic/AtlUnRegisterTypeLib.md).  
  
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
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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
 The macros [BEGIN_RDX_MAP](../Topic/BEGIN_RDX_MAP.md) and [END_RDX_MAP](../Topic/END_RDX_MAP.md) expand to a function that calls `RegistryDataExchange`.  
  
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
|[BEGIN_RDX_MAP](../Topic/BEGIN_RDX_MAP.md)|Marks the beginning of the Registry Data Exchange map.|  
|[END_RDX_MAP](../Topic/END_RDX_MAP.md)|Marks the end of the Registry Data Exchange map.|  
|[RDX_BINARY](../Topic/RDX_BINARY.md)|Associates the specified registry entry with a specified member variable of type BYTE.|  
|[RDX_CSTRING_TEXT](../Topic/RDX_CSTRING_TEXT.md)|Associates the specified registry entry with a specified member variable of type CString.|  
|[RDX_DWORD](../Topic/RDX_DWORD.md)|Associates the specified registry entry with a specified member variable of type DWORD.|  
|[RDX_TEXT](../Topic/RDX_TEXT.md)|Associates the specified registry entry with a specified member variable of type TCHAR.|  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)





