---
title: "CSimpleArrayEqualHelper Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CSimpleArrayEqualHelper", "ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper", "ATLSIMPCOLL/ATL::CSimpleArrayEqualHelper::IsEqual"]
dev_langs: ["C++"]
helpviewer_keywords: ["CSimpleArrayEqualHelper class"]
ms.assetid: a2b55d89-78c9-42ef-842c-5304c6d20ad6
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# CSimpleArrayEqualHelper Class
This class is a helper for the [CSimpleArray](../../atl/reference/csimplearray-class.md) class.  
  
## Syntax  
  
```
template <class T>  
class CSimpleArrayEqualHelper
```  
  
#### Parameters  
 `T`  
 A derived class.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleArrayEqualHelper::IsEqual](#isequal)|(Static) Tests two `CSimpleArray` object elements for equality.|  
  
## Remarks  
 This traits class is a supplement to the `CSimpleArray` class. It provides a method for comparing two elements stored in a `CSimpleArray` object. By default, the elements are compared using **operator=()**, but if the array contains complex data types that lack their own equality operator, you will need to override this class.  
  
## Requirements  
 **Header:** atlsimpcoll.h  
  
##  <a name="isequal"></a>  CSimpleArrayEqualHelper::IsEqual  
 Tests two `CSimpleArray` object elements for equality.  
  
```
static bool IsEqual(
    const T& t1,
    const T& t2);
```  
  
### Parameters  
 *t1*  
 An object of type T.  
  
 *t2*  
 An object of type T.  
  
### Return Value  
 Returns true if the elements are equal, false otherwise.  
  
## See Also  
 [CSimpleArray Class](../../atl/reference/csimplearray-class.md)   
 [CSimpleArrayEqualHelperFalse Class](../../atl/reference/csimplearrayequalhelperfalse-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
