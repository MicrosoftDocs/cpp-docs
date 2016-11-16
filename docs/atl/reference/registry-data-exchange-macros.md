---
title: "Registry Data Exchange Macros | Microsoft Docs"
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
  - "RegistryDataExchange function, macros"
ms.assetid: c1bc5e79-2307-43d2-9d10-3a62ffadf473
caps.latest.revision: 16
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
# Registry Data Exchange Macros
These macros perform Registry Data Exchange operations.  
  
|||  
|-|-|  
|[BEGIN_RDX_MAP](#begin_rdx_map)|Marks the beginning of the Registry Data Exchange map.|  
|[END_RDX_MAP](#end_rdx_map)|Marks the end of the Registry Data Exchange map.|  
|[RDX_BINARY](#rdx_binary)|Associates the specified registry entry with a specified member variable of type BYTE.|  
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associates the specified registry entry with a specified member variable of type CString.|  
|[RDX_DWORD](#rdx_dword)|Associates the specified registry entry with a specified member variable of type DWORD.|  
|[RDX_TEXT](#rdx_text)|Associates the specified registry entry with a specified member variable of type TCHAR.|  
  
##  <a name="begin_rdx_map"></a>  BEGIN_RDX_MAP  
 Marks the beginning of the Registry Data Exchange map.  
  
```
BEGIN_RDX_MAP
```  
  
### Remarks  
 The following macros are used within the Registry Data Exchange map to read and write entries in the system registry:  
  
|Macro|Description|  
|-----------|-----------------|  
|[RDX_BINARY](#rdx_binary)|Associates the specified registry entry with a specified member variable of type BYTE.|  
|[RDX_DWORD](#rdx_dword)|Associates the specified registry entry with a specified member variable of type DWORD.|  
|[RDX_CSTRING_TEXT](#rdx_cstring_text)|Associates the specified registry entry with a specified member variable of type CString.|  
|[RDX_TEXT](#rdx_text)|Associates the specified registry entry with a specified member variable of type TCHAR.|  
  
 The global function [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), or the member function of the same name created by the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros, should be used whenever your code needs to exchange data between the system registry and the variables specified in the RDX map.  
  
##  <a name="end_rdx_map"></a>  END_RDX_MAP  
 Marks the end of the Registry Data Exchange map.  
  
```
END_RDX_MAP
```  
  
##  <a name="rdx_binary"></a>  RDX_BINARY  
 Associates the specified registry entry with a specified member variable of type BYTE.  
  
```
RDX_BINARY(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### Parameters  
 `rootkey`  
 The registry key root.  
  
 `subkey`  
 The registry subkey.  
  
 `valuename`  
 The registry key.  
  
 `member`  
 The member variable to associate with the specified registry entry.  
  
 `member_size`  
 The size, in bytes, of the member variable.  
  
### Remarks  
 This macro is used in conjunction with the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros to associate a member variable with a given registry entry. The global function [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), or the member function of the same name created by the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros, should be used to perform exchange of data between the system registry and the member variables in the RDX map.  
  
##  <a name="rdx_cstring_text"></a>  RDX_CSTRING_TEXT  
 Associates the specified registry entry with a specified member variable of type CString.  
  
```
RDX_CSTRING_TEXT(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### Parameters  
 `rootkey`  
 The registry key root.  
  
 `subkey`  
 The registry subkey.  
  
 `valuename`  
 The registry key.  
  
 `member`  
 The member variable to associate with the specified registry entry.  
  
 `member_size`  
 The size, in bytes, of the member variable.  
  
### Remarks  
 This macro is used in conjunction with the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros to associate a member variable with a given registry entry. The global function [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), or the member function of the same name created by the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros, should be used to perform exchange of data between the system registry and the member variables in the RDX map.  
  
##  <a name="rdx_dword"></a>  RDX_DWORD  
 Associates the specified registry entry with a specified member variable of type DWORD.  
  
```
RDX_DWORD(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### Parameters  
 `rootkey`  
 The registry key root.  
  
 `subkey`  
 The registry subkey.  
  
 `valuename`  
 The registry key.  
  
 `member`  
 The member variable to associate with the specified registry entry.  
  
 `member_size`  
 The size, in bytes, of the member variable.  
  
### Remarks  
 This macro is used in conjunction with the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros to associate a member variable with a given registry entry. The global function [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), or the member function of the same name created by the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros, should be used to perform exchange of data between the system registry and the member variables in the RDX map.  
  
##  <a name="rdx_text"></a>  RDX_TEXT  
 Associates the specified registry entry with a specified member variable of type TCHAR.  
  
```
RDX_TEXT(
    rootkey, 
    subkey, 
    valuename, 
    member, 
    member_size )
```  
  
### Parameters  
 `rootkey`  
 The registry key root.  
  
 `subkey`  
 The registry subkey.  
  
 `valuename`  
 The registry key.  
  
 `member`  
 The member variable to associate with the specified registry entry.  
  
 `member_size`  
 The size, in bytes, of the member variable.  
  
### Remarks  
 This macro is used in conjunction with the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros to associate a member variable with a given registry entry. The global function [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange), or the member function of the same name created by the `BEGIN_RDX_MAP` and `END_RDX_MAP` macros, should be used to perform exchange of data between the system registry and the member variables in the RDX map.  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)   
 [RegistryDataExchange](../../atl/reference/registry-and-typelib-global-functions.md#registrydataexchange)







