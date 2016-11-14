---
title: "_U_STRINGorID Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL._U_STRINGorID"
  - "ATL::_U_STRINGorID"
  - "_U_STRINGorID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_U_STRINGorID class"
  - "U_STRINGorID class"
ms.assetid: 443cdc00-d265-4b27-8ef3-2feb95f3e5e3
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
# _U_STRINGorID Class
This argument adapter class allows either resource names ( `LPCTSTR`s) or resource IDs ( **UINT**s) to be passed to a function without requiring the caller to convert the ID to a string using the **MAKEINTRESOURCE** macro.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class _U_STRINGorID
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[_U_STRINGorID::_U_STRINGorID](#_u_stringorid___u_stringorid)|The constructor.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[_U_STRINGorID::m_lpstr](#_u_stringorid__m_lpstr)|The resource identifier.|  
  
## Remarks  
 This class is designed for implementing wrappers to the Windows resource management API such as the [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042), [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072), and [LoadMenu](http://msdn.microsoft.com/library/windows/desktop/ms647990) functions, which accept an `LPCTSTR` argument that may be either the name of a resource or its ID.  
  
 The class defines two constructor overloads: one accepts a `LPCTSTR` argument and the other accepts a **UINT** argument. The **UINT** argument is converted to a resource type compatible with Windows resource-management functions using the **MAKEINTRESOURCE** macro and the result stored in the class's single data member, [m_lpstr](#_u_stringorid__m_lpstr). The argument to the `LPCTSTR` constructor is stored directly without conversion.  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="_u_stringorid__m_lpstr"></a>  _U_STRINGorID::m_lpstr  
 The class holds the value passed to either of its constructors as a public `LPCTSTR` data member.  
  
```
LPCTSTR m_lpstr;
```  
  
##  <a name="_u_stringorid___u_stringorid"></a>  _U_STRINGorID::_U_STRINGorID  
 The **UINT** constructor converts its argument to a resource type compatible with Windows resource-management functions using the **MAKEINTRESOURCE** macro and the result is stored in the class's single data member, [m_lpstr](#_u_stringorid__m_lpstr).  
  
```
_U_STRINGorID(UINT nID);

    _U_STRINGorID(LPCTSTR lpString);
```  
  
### Parameters  
 `nID`  
 A resource ID.  
  
 `lpString`  
 A resource name.  
  
### Remarks  
 The argument to the `LPCTSTR` constructor is stored directly without conversion.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
