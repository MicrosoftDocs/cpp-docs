---
title: "&lt;scoped_allocator&gt; operators"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
caps.latest.revision: 9
---
# &lt;scoped_allocator&gt; operators
|||  
|-|-|  
|[operator!=](#operator_neq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests two `scoped_allocator_adaptor` objects for inequality.  
  
```cpp  
template<class Outer, class... Inner>  
    bool operator!=(  
        const scoped_allocator_adaptor<Outer, Inner...>& left,  
        const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;  
```  
  
### Parameters  
 `left`  
 The left `scoped_allocator_adaptor` object.  
  
 `right`  
 The right `scoped_allocator_adaptor` object.  
  
### Return Value  
 `!(left == right)`  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Tests two `scoped_allocator_adaptor` objects for equality.  
  
```cpp  
template<class Outer, class... Inner>  
    bool operator==(  
        const scoped_allocator_adaptor<Outer, Inner...>& left,  
        const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;  
```  
  
### Parameters  
 `left`  
 The left `scoped_allocator_adaptor` object.  
  
 `right`  
 The right `scoped_allocator_adaptor` object.  
  
### Return Value  
 `left.outer_allocator() == right.outer_allocator() && left.inner_allocator() == right.inner_allocator()`  
  
## See Also  
 [<scoped_allocator>](../stdcpplib/-scoped_allocator-.md)