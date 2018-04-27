---
title: "CElementTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CElementTraits", "atlcoll/ATL::CElementTraits"]
dev_langs: ["C++"]
helpviewer_keywords: ["CElementTraits class"]
ms.assetid: 496528e5-7f80-4b45-be0c-6f646feb43c5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CElementTraits Class
This class is used by collection classes to provide methods and functions for moving, copying, comparison, and hashing operations.  
  
## Syntax  
  
```
template<typename T>  
class CElementTraits : public CDefaultElementTraits<T>
```  
  
#### Parameters  
 `T`  
 The type of data to be stored in the collection.  
  
## Remarks  
 This class provides default static functions and methods for moving, copying, comparing, and hashing elements stored in a collection class object. `CElementTraits` is specified as the default provider of these operations by the collection classes [CAtlArray](../../atl/reference/catlarray-class.md), [CAtlList](../../atl/reference/catllist-class.md), [CRBMap](../../atl/reference/crbmap-class.md), [CRBMultiMap](../../atl/reference/crbmultimap-class.md), and [CRBTree](../../atl/reference/crbtree-class.md).  
  
 The default implementations will suffice for simple data types, but if the collection classes are used to store more complex objects, the functions and methods must be overridden by user-supplied implementations.  
  
 For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
## See Also  
 [CDefaultElementTraits Class](../../atl/reference/cdefaultelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
