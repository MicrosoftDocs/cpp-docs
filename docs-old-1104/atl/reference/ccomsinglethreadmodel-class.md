---
title: "CComSingleThreadModel Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComSingleThreadModel"
  - "CComSingleThreadModel"
  - "ATL::CComSingleThreadModel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single-threaded applications"
  - "CComSingleThreadModel class"
  - "single-threaded applications, ATL"
ms.assetid: e5dc30c7-405a-4ba4-8ae9-51937243fce8
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
# CComSingleThreadModel Class
This class provides methods for incrementing and decrementing the value of a variable.  
  
## Syntax  
  
```
class CComSingleThreadModel
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CComSingleThreadModel::AutoCriticalSection](../Topic/CComSingleThreadModel::AutoCriticalSection.md)|References class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|  
|[CComSingleThreadModel::CriticalSection](../Topic/CComSingleThreadModel::CriticalSection.md)|References class `CComFakeCriticalSection`.|  
|[CComSingleThreadModel::ThreadModelNoCS](../Topic/CComSingleThreadModel::ThreadModelNoCS.md)|References `CComSingleThreadModel`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComSingleThreadModel::Decrement](../Topic/CComSingleThreadModel::Decrement.md)|Decrements the value of the specified variable. This implementation is not thread-safe.|  
|[CComSingleThreadModel::Increment](../Topic/CComSingleThreadModel::Increment.md)|Increments the value of the specified variable. This implementation is not thread-safe.|  
  
## Remarks  
 `CComSingleThreadModel` provides methods for incrementing and decrementing the value of a variable. Unlike [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), these methods are not thread-safe.  
  
 Typically, you use `CComSingleThreadModel` through one of two `typedef` names, either [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) or [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md). The class referenced by each `typedef` depends on the threading model used, as shown in the following table:  
  
|typedef|Single threading model|Apartment threading model|Free threading model|  
|-------------|----------------------------|-------------------------------|--------------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S= `CComSingleThreadModel`; M= `CComMultiThreadModel`  
  
 `CComSingleThreadModel` itself defines three `typedef` names. `ThreadModelNoCS` references `CComSingleThreadModel`. `AutoCriticalSection` and `CriticalSection` reference class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), which provides empty methods associated with obtaining and releasing ownership of a critical section.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomsinglethreadmodel__autocriticalsection"></a>  CComSingleThreadModel::AutoCriticalSection  
 When using `CComSingleThreadModel`, the `typedef` name `AutoCriticalSection` references class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection AutoCriticalSection;
```  
  
### Remarks  
 Because `CComFakeCriticalSection` does not provide a critical section, its methods do nothing.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contain definitions for `AutoCriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `AutoCriticalSection`:  
  
|Class defined in|Class referenced|  
|----------------------|----------------------|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComAutoCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 In addition to `AutoCriticalSection`, you can use the `typedef` name [CriticalSection](../Topic/CComSingleThreadModel::CriticalSection.md). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.  
  
### Example  
 See [CComMultiThreadModel::AutoCriticalSection](../Topic/CComMultiThreadModel::AutoCriticalSection.md).  
  
##  <a name="ccomsinglethreadmodel__criticalsection"></a>  CComSingleThreadModel::CriticalSection  
 When using `CComSingleThreadModel`, the `typedef` name `CriticalSection` references class [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection CriticalSection;
```  
  
### Remarks  
 Because `CComFakeCriticalSection` does not provide a critical section, its methods do nothing.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contain definitions for `CriticalSection`. The following table shows the relationship between the threading model class and the critical section class referenced by `CriticalSection`:  
  
|Class defined in|Class referenced|  
|----------------------|----------------------|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 In addition to `CriticalSection`, you can use the `typedef` name [AutoCriticalSection](../Topic/CComSingleThreadModel::AutoCriticalSection.md). You should not specify `AutoCriticalSection` in global objects or static class members if you want to eliminate the CRT startup code.  
  
### Example  
 See [CComMultiThreadModel::AutoCriticalSection](../Topic/CComMultiThreadModel::AutoCriticalSection.md).  
  
##  <a name="ccomsinglethreadmodel__decrement"></a>  CComSingleThreadModel::Decrement  
 This static function decrements the value of the variable pointed to by `p`.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw();
```  
  
### Parameters  
 `p`  
 [in] Pointer to the variable to be decremented.  
  
### Return Value  
 The result of the decrement.  
  
##  <a name="ccomsinglethreadmodel__increment"></a>  CComSingleThreadModel::Increment  
 This static function decrements the value of the variable pointed to by `p`.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw();
```  
  
### Parameters  
 `p`  
 [in] Pointer to the variable to be incremented.  
  
### Return Value  
 The result of the increment.  
  
##  <a name="ccomsinglethreadmodel__threadmodelnocs"></a>  CComSingleThreadModel::ThreadModelNoCS  
 When using `CComSingleThreadModel`, the `typedef` name `ThreadModelNoCS` simply references `CComSingleThreadModel`.  
  
```
typedef CComSingleThreadModel ThreadModelNoCS;
```  
  
### Remarks  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) and [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contain definitions for `ThreadModelNoCS`. The following table shows the relationship between the threading model class and the class referenced by `ThreadModelNoCS`:  
  
|Class defined in|Class referenced|  
|----------------------|----------------------|  
|`CComSingleThreadModel`|`CComSingleThreadModel`|  
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|  
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|  
  
### Example  
 See [CComMultiThreadModel::AutoCriticalSection](../Topic/CComMultiThreadModel::AutoCriticalSection.md).  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)







