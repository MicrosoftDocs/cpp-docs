---
title: "CDefaultHashTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CDefaultHashTraits', 'ATLCOLL/ATL::CDefaultHashTraits', 'ATLCOLL/ATL::CDefaultHashTraits::Hash']
dev_langs: ["C++"]
helpviewer_keywords: ["CDefaultHashTraits class"]
ms.assetid: d8ec4b37-6d58-447b-a0c1-8580c5b1ab85
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDefaultHashTraits Class
This class provides a static function for calculating hash values.  
  
## Syntax  
  
```
template<typename T>  
class CDefaultHashTraits
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDefaultHashTraits::Hash](#hash)|(Static) Call this function to calculate a hash value for a given element.|  
  
## Remarks  
 This class contains a single static function that returns a hash value for a given element. This class is utilized by the [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md).  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="hash"></a>  CDefaultHashTraits::Hash  
 Call this function to calculate a hash value for a given element.  
  
```
static ULONG Hash(const T& element) throw();
```  
  
### Parameters  
 `element`  
 The element.  
  
### Return Value  
 Returns the hash value.  
  
### Remarks  
 The default hashing algorithm is very simple: the return value is the element number. Override this function if a more complicated algorithm is required.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
