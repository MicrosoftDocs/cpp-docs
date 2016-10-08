---
title: "unchecked_array_iterator Class"
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
ms.assetid: 693b3b30-4e3a-465b-be06-409700bc50b1
caps.latest.revision: 13
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
# unchecked_array_iterator Class
The `unchecked_array_iterator` class allows you to wrap an array or pointer into an unchecked iterator. Use this class as a wrapper (using the [make_unchecked_array_iterator](../VS_visualcpp/-iterator--functions.md#make_unchecked_array_iterator) function) for raw pointers or arrays as a targeted way to manage unchecked pointer warnings instead of globally silencing these warnings. If possible, prefer the checked version of this class, [checked_array_iterator](../VS_visualcpp/checked_array_iterator-Class.md).  
  
> [!NOTE]
>  This class is a Microsoft extension of the Standard C++ Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension.  
  
## Syntax  
  
```  
template <class Iterator>  
    class unchecked_array_iterator;  
```  
  
## Remarks  
 This class is defined in the [stdext](../VS_visualcpp/stdext-Namespace.md) namespace.  
  
 This is the unchecked version of the [checked_array_iterator Class](../VS_visualcpp/checked_array_iterator-Class.md) and supports all the same overloads and members. For more information on the checked iterator feature with code examples, see [Checked Iterators](../VS_visualcpp/Checked-Iterators.md).  
  
## Requirements  
 **Header:** <iterator\>  
  
 **Namespace:** stdext  
  
## See Also  
 [<iterator\>](../VS_visualcpp/-iterator-.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)