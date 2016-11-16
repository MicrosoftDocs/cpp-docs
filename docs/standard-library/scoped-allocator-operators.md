---
title: "&lt;scoped_allocator&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
caps.latest.revision: 10
manager: "ghogen"
---
# &lt;scoped_allocator&gt; operators
|||  
|-|-|  
|[operator!=](#operator_neq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests two `scoped_allocator_adaptor` objects for inequality.  
  
```cpp  
template <class Outer, class... Inner>  
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
template <class Outer, class... Inner>  
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
 [<scoped_allocator>](../standard-library/scoped-allocator.md)

