---
title: "&lt;allocators&gt; operators"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: b55d67cb-3c69-46bf-ad40-e845fb096c4e
caps.latest.revision: 10
---
# &lt;allocators&gt; operators
|||  
|-|-|  
|[operator!=](#operator_neq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests for inequality between allocator objects of a specified class.  
  
```
template <class Type, class Sync>
    bool operator!=(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|One of the allocator objects to be tested for inequality.|  
|`right`|One of the allocator objects to be tested for inequality.|  
  
### Return Value  
 **true** if the allocator objects are not equal; **false** if allocator objects are equal.  
  
### Remarks  
 The template operator returns `!(left == right)`.  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Tests for equality between allocator objects of a specified class.  
  
```
template <class Type, class Sync>
    bool operator==(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|One of the allocator objects to be tested for equality.|  
|`right`|One of the allocator objects to be tested for equality.|  
  
### Return Value  
 **true** if the allocator objects are equal; **false** if allocator objects are not equal.  
  
### Remarks  
 This template operator returns `left.equals(right)`.  
  
## See Also  
 [\<allocators>](../stdcpplib/-allocators-.md)

