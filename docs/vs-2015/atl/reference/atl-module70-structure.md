---
title: "_ATL_MODULE70 Structure | Microsoft Docs"
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
  - "_ATL_MODULE70"
  - "ATL::_ATL_MODULE70"
  - "ATL._ATL_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL_MODULE70 structure"
  - "_ATL_MODULE70 structure"
ms.assetid: b059b2c8-dfd1-4ac9-b07d-39df638cc7b3
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _ATL_MODULE70 Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ATL_MODULE70 Structure](https://docs.microsoft.com/cpp/atl/reference/atl-module70-structure).  
  
  
Contains data used by every ATL module.  
  
## Syntax  
  
```
struct _ATL_MODULE70 {
    UINT cbSize;
    LONG m_nLockCnt;
    _ATL_TERMFUNC_ELEM* m_pTermFuncs;
    CComCriticalSection m_csStaticDataInitAndTypeInfo;
};
```  
  
## Members  
 `cbSize`  
 The size of the structure, used for versioning.  
  
 `m_nLockCnt`  
 Reference count to determine how long the module should stay alive.  
  
 **m_pTermFuncs**  
 Tracks functions that have been registered to be called when ATL shuts down.  
  
 **m_csStaticDataInitAndTypeInfo**  
 Used to coordinate access to internal data in multithreaded situations.  
  
## Remarks  
 [_ATL_MODULE](http://msdn.microsoft.com/library/23af4915-ecdb-4ca6-9c89-7e01c3e762e7) is defined as a typedef of `_ATL_MODULE70`.  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Structures](../../atl/reference/atl-structures.md)















