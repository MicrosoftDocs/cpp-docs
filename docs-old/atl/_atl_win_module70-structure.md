---
title: "_ATL_WIN_MODULE70 Structure"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 11
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
# _ATL_WIN_MODULE70 Structure
Used by windowing code in ATL.  
  
## Syntax  
  
```
struct _ATL_WIN_MODULE70{  UNIT cbSize;  CRITICAL_SECTION m_csWindowCreate;
    _AtlCreateWndData*  m_pCreateWndList;
    CSimpleArray<ATOM>  m_rgWindowClassAtoms;
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
 [_ATL_WIN_MODULE](../Topic/_ATL_WIN_MODULE.md) is defined as a typedef of `_ATL_WIN_MODULE70`.  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Structures](../atl/atl-structures.md)

