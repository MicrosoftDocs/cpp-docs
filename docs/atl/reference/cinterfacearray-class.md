---
title: "CInterfaceArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CInterfaceArray"
  - "CInterfaceArray"
  - "ATL::CInterfaceArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInterfaceArray class"
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
caps.latest.revision: 18
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
# CInterfaceArray Class
This class provides methods useful when constructing an array of COM interface pointers.  
  
## Syntax  
  
```
template <class   I,
    const IID* piid
 =& __uuidof(I)>
    class CInterfaceArray : public CAtlArray<
    ATL::CComQIPtr<I,
 piid>,
    CComQIPtrElementTraits<I,
 piid>>
```  
  
#### Parameters  
 `I`  
 A COM interface specifying the type of pointer to be stored.  
  
 `piid`  
 A pointer to the IID of `I`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInterfaceArray::CInterfaceArray](#cinterfacearray__cinterfacearray)|The constructor for the interface array.|  
  
## Remarks  
 This class provides a constructor and derived methods for creating an array of COM interface pointers. Use [CInterfaceList](../../atl/reference/cinterfacelist-class.md) when a list is required.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Inheritance Hierarchy  
 `CAtlArray`  
  
 `CInterfaceArray`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cinterfacearray__cinterfacearray"></a>  CInterfaceArray::CInterfaceArray  
 The constructor.  
  
```
CInterfaceArray() throw();
```  
  
### Remarks  
 Initializes the smart pointer array.  
  
## See Also  
 [CAtlArray Class](../../atl/reference/catlarray-class.md)   
 [CComQIPtr Class](../../atl/reference/ccomqiptr-class.md)   
 [CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
