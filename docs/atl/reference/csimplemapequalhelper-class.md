---
title: "CSimpleMapEqualHelper Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSimpleMapEqualHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleMapEqualHelper class"
ms.assetid: 9bb2968a-d609-405c-8272-ff3b42df6164
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
# CSimpleMapEqualHelper Class
This class is a helper for the [CSimpleMap](../../atl/reference/csimplemap-class.md) class.  
  
## Syntax  
  
```
template <class TKey,  class TVal>  class CSimpleMapEqualHelper
```  
  
#### Parameters  
 `TKey`  
 The key element.  
  
 `TVal`  
 The value element.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleMapEqualHelper::IsEqualKey](#csimplemapequalhelper__isequalkey)|(Static) Tests two keys for equality.|  
|[CSimpleMapEqualHelper::IsEqualValue](#csimplemapequalhelper__isequalvalue)|(Static) Tests two values for equality.|  
  
## Remarks  
 This traits class is a supplement to the `CSimpleMap` class. It provides methods for comparing two `CSimpleMap` object elements (specifically, the key and value components) for equality. By default, the keys and values are compared using `operator==()`, but if the map contains complex data types that lack their own equality operator, this class can be overridden to provide the extra required functionality.  
  
## Requirements  
 **Header:** atlsimpcoll.h  
  
##  <a name="csimplemapequalhelper__isequalkey"></a>  CSimpleMapEqualHelper::IsEqualKey  
 Tests two keys for equality.  
  
```
static bool IsEqualKey(const TKey& k1,  const TKey& k2);
```  
  
### Parameters  
 `k1`  
 The first key.  
  
 `k2`  
 The second key.  
  
### Return Value  
 Returns true if the keys are equal, false otherwise.  
  
##  <a name="csimplemapequalhelper__isequalvalue"></a>  CSimpleMapEqualHelper::IsEqualValue  
 Tests two values for equality.  
  
```
static bool IsEqualValue(const TVal& v1,  const TVal& v2);
```  
  
### Parameters  
 *v1*  
 The first value.  
  
 *v2*  
 The second value.  
  
### Return Value  
 Returns true if the values are equal, false otherwise.  
  
## See Also  
 [CSimpleMapEqualHelperFalse Class](../../atl/reference/csimplemapequalhelperfalse-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
