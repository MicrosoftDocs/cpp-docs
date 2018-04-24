---
title: "_ATL_BASE_MODULE70 Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::_ATL_BASE_MODULE70"
  - "ATL._ATL_BASE_MODULE70"
  - "_ATL_BASE_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL_BASE_MODULE70 structure"
  - "_ATL_BASE_MODULE70 structure"
ms.assetid: 4539282f-15b8-4d7c-aafa-a85dc56f4980
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _ATL_BASE_MODULE70 Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ATL_BASE_MODULE70 Structure](https://docs.microsoft.com/cpp/atl/reference/atl-base-module70-structure).  
  
  
Used by any project that uses ATL.  
  
## Syntax  
  
```
struct _ATL_BASE_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInst;
    HINSTANCE m_hInstResource;
    bool m_bNT5orWin98;
    DWORD dwAtlBuildVer;
    GUID* pguidVer;
    CRITICAL_SECTION m_csResource;
    CSimpleArray<HINSTANCE> m_rgResourceInstance;
};
```  
  
## Members  
 `cbSize`  
 The size of the structure, used for versioning.  
  
 `m_hInst`  
 The **hInstance** for this module (either exe or dll).  
  
 `m_hInstResource`  
 Default instance resource handle.  
  
 **m_bNT5orWin98**  
 Operating system version information. Used internally by ATL.  
  
 **dwAtlBuildVer**  
 Stores the version of ATL. Currently 0x0700.  
  
 **pguidVer**  
 ATL's internal GUID.  
  
 **m_csResource**  
 Used to synchronize access to the **m_rgResourceInstance** array. Used internally by ATL.  
  
 **m_rgResourceInstance**  
 Array used to search for resources in all the resource instances of which ATL is aware. Used internally by ATL.  
  
## Remarks  
 [_ATL_BASE_MODULE](../Topic/_ATL_BASE_MODULE.md) is defined as a typedef of `_ATL_BASE_MODULE70`.  
  
## Requirements  
 **Header:** atlcore.h  
  
## See Also  
 [Structures](../../atl/reference/atl-structures.md)











