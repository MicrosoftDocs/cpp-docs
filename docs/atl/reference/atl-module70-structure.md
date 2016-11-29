---
title: "_ATL_MODULE70 Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# _ATL_MODULE70 Structure
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
 [_ATL_MODULE](atl-typedefs.md#_atl_module) is defined as a typedef of `_ATL_MODULE70`.  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Structures](../../atl/reference/atl-structures.md)







