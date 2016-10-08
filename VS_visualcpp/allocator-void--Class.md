---
title: "allocator&lt;void&gt; Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# allocator&lt;void&gt; Class
A specialization of the template class allocator to type `void`, defining the types that make sense in this context.  
  
## Syntax  
  
```  
template<>  
   class allocator<void> {  
   typedef void *pointer;  
   typedef const void *const_pointer;  
   typedef void value_type;  
   template<class Other>  
      struct rebind;  
   allocator( );  
   allocator(  
      const allocator<void>&  
   );  
   template<class Other>  
      allocator(  
         const allocator<Other>&  
      );  
   template<class Other>  
      allocator<void>& operator=(  
         const allocator<Other>&  
      );  
   };  
```  
  
## Remarks  
 The class explicitly specializes template class [allocator](../VS_visualcpp/allocator-Class.md) for type                 *void.* Its constructors and assignment operator behave the same as for the template class, but it defines only the following types:  
  
-   [const_pointer](../VS_visualcpp/allocator-Class.md#allocator__const_pointer).  
  
-   [pointer](../VS_visualcpp/allocator-Class.md#allocator__pointer).  
  
-   [value_type](../VS_visualcpp/allocator-Class.md#allocator__value_type).  
  
-   [rebind](../VS_visualcpp/allocator-Class.md#allocator__rebind), a nested template class.  
  
## Requirements  
 **Header:** <memory\>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)