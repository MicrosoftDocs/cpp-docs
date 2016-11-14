---
title: "CAutoPtrList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAutoPtrList"
  - "CAutoPtrList"
  - "ATL.CAutoPtrList"
  - "ATL::CAutoPtrList<E>"
  - "ATL.CAutoPtrList<E>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoPtrList class"
ms.assetid: 11de4aca-28b0-4ff2-a74a-cb602312ffbd
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
# CAutoPtrList Class
This class provides methods useful when constructing a list of smart pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<typename E>  class CAutoPtrList : public CAtlList<
    ATL::CAutoPtr<E>,
 CAutoPtrElementTraits<E>>
```  
  
#### Parameters  
 `E`  
 The pointer type.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoPtrList::CAutoPtrList](#cautoptrlist__cautoptrlist)|The constructor.|  
  
## Remarks  
 This class provides a constructor and derives methods from [CAtlList](../../atl/reference/catllist-class.md) and [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) to aid the creation of a list object storing smart pointers. The class [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) provides a similar function for an array object.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Inheritance Hierarchy  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CAutoPtrList`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cautoptrlist__cautoptrlist"></a>  CAutoPtrList::CAutoPtrList  
 The constructor.  
  
```
CAutoPtrList(UINT nBlockSize = 10) throw();
```  
  
### Parameters  
 `nBlockSize`  
 The block size, with a default of 10.  
  
### Remarks  
 The block size is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.  
  
## See Also  
 [CAtlList Class](../../atl/reference/catllist-class.md)   
 [CAutoPtrElementTraits Class](../../atl/reference/cautoptrelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
