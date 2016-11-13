---
title: "pointer_traits Struct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "memory/std::pointer_traits::element_type"
  - "memory/std::pointer_traits::pointer"
  - "memory/std::pointer_traits"
  - "memory/std::pointer_traits::difference_type"
  - "memory/std::pointer_traits::rebind"
  - "xmemory0/std::pointer_traits::element_type"
  - "xmemory0/std::pointer_traits::pointer"
  - "xmemory0/std::pointer_traits"
  - "xmemory0/std::pointer_traits::difference_type"
  - "xmemory0/std::pointer_traits::rebind"
dev_langs: 
  - "C++"
ms.assetid: 545aecf1-3561-4859-8b34-603c079fe1b3
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
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
# pointer_traits Struct
Supplies information that is needed by an object of template class `allocator_traits` to describe an allocator with pointer type `Ptr`.  
  
## Syntax  
  
```cpp
template <class Ptr>
struct pointer_traits;
```  
  
## Remarks  
 Ptr can be a raw pointer of type `Ty *` or a class with the following properties.  
```  
struct Ptr
   { // describes a pointer type usable by allocators
   typedef Ptr pointer;
   typedef T1 element_type; // optional
   typedef T2 difference_type; // optional
   template <class Other>
   using rebind = typename Ptr<Other, Rest...>; // optional
   static pointer pointer_to(element_type& obj);
   // optional
   };  
```
### Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`typedef T2 difference_type`|The type `T2` is `Ptr::difference_type` if that type exists, otherwise `ptrdiff_t`. If `Ptr` is a raw pointer, the type is `ptrdiff_t`.|  
|`typedef T1 element_type`|The type `T1` is `Ptr::element_type` if that type exists, otherwise `Ty`. If `Ptr` is a raw pointer, the type is `Ty`.|  
|`typedef Ptr pointer`|The type is `Ptr`.|  
  
### Structs  
  
|Name|Description|  
|----------|-----------------|  
|`pointer_traits::rebind`|Attempts to convert the underlying pointer type to a specified type.|  
  
### Methods  
  
|Name|Description|  
|----------|-----------------|  
|[pointer_to](#pointer_traits__pointer_to_method)|Converts an arbitrary reference to an object of class `Ptr`.|  
  
## Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
##  <a name="pointer_traits__pointer_to_method"></a>  pointer_to  
 Static method that returns `Ptr::pointer_to(obj)`, if that function exists. Otherwise, it is not possible to convert an arbitrary reference to an object of class `Ptr`. If `Ptr` is a raw pointer, this method returns `addressof(obj)`.  
  
```cpp
static pointer pointer_to(element_type& obj);
```  
  
## See Also  
 [\<memory>](../standard-library/memory.md)   
 [allocator_traits Class](../standard-library/allocator-traits-class.md)

