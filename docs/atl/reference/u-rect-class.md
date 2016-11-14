---
title: "_U_RECT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::_U_RECT"
  - "_U_RECT"
  - "ATL._U_RECT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U_RECT class"
  - "_U_RECT class"
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
caps.latest.revision: 20
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
# _U_RECT Class
This argument adapter class allows either `RECT` pointers or references to be passed to a function that is implemented in terms of pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class _U_RECT```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[_U_RECT::_U_RECT](#_u_rect___u_rect)|The constructor.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[_U_RECT::m_lpRect](#_u_rect__m_lprect)|Pointer to a `RECT`.|  
  
## Remarks  
 The class defines two constructor overloads: one accepts a **RECT&** argument and the other accepts an `LPRECT` argument. The first constructor stores the address of the reference argument in the class's single data member, [m_lpRect](#_u_rect__m_lprect). The argument to the pointer constructor is stored directly without conversion.  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="_u_rect__m_lprect"></a>  _U_RECT::m_lpRect  
 The class holds the value passed to either of its constructors as a public `LPRECT` data member.  
  
```
LPRECT m_lpRect;
```  
  
##  <a name="_u_rect___u_rect"></a>  _U_RECT::_U_RECT  
 The address of the reference argument is stored in the class's single data member, [m_lpRect](#_u_rect__m_lprect).  
  
```
_U_RECT(RECT& rc);

    _U_RECT(LPRECT lpRect);
```  
  
### Parameters  
 `rc`  
 A `RECT` reference.  
  
 `lpRect`  
 A `RECT` pointer.  
  
### Remarks  
 The argument to the pointer constructor is stored directly without conversion.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
