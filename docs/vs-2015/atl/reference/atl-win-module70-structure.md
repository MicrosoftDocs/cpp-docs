---
title: "_ATL_WIN_MODULE70 Structure | Microsoft Docs"
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
  - "_ATL_WIN_MODULE70"
  - "ATL::_ATL_WIN_MODULE70"
  - "ATL._ATL_WIN_MODULE70"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_WIN_MODULE70 structure"
  - "ATL_WIN_MODULE70 structure"
ms.assetid: a0aaf3ea-ca77-46ec-bd53-4dfb61dffbea
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _ATL_WIN_MODULE70 Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ATL_WIN_MODULE70 Structure](https://docs.microsoft.com/cpp/atl/reference/atl-win-module70-structure).  
  
  
Used by windowing code in ATL.  
  
## Syntax  
  
```
struct _ATL_WIN_MODULE70 {
    UNIT cbSize; 
    CRITICAL_SECTION m_csWindowCreate;
    _AtlCreateWndData* m_pCreateWndList;
    CSimpleArray<ATOM> m_rgWindowClassAtoms;
};
```  
  
## Members  
 `cbSize`  
 The size of the structure, used for versioning.  
  
 `m_csWindowCreate`  
 Used to serialize access to window registration code. Used internally by ATL.  
  
 **m_pCreateWndList**  
 Used to bind windows to their objects. Used internally by ATL.  
  
 **m_rgWindowClassAtoms**  
 Used to track window class registrations so that they can be properly unregistered at termination. Used internally by ATL.  
  
## Remarks  
 [_ATL_WIN_MODULE](http://msdn.microsoft.com/library/fcfb5891-d0fc-4d9b-9e69-9e3cbd63f958) is defined as a typedef of `_ATL_WIN_MODULE70`.  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Structures](../../atl/reference/atl-structures.md)











