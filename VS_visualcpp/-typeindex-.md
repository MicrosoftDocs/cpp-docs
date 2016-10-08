---
title: "&lt;typeindex&gt;"
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
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
caps.latest.revision: 12
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
# &lt;typeindex&gt;
Include the standard header <typeindex\> to define a class and function that support the indexing of objects of class [type_info](../VS_visualcpp/type_info-Class.md).  
  
## Syntax  
  
```cpp  
#include <typeindex>  
```  
  
## Remarks  
 The [hash Structure](../VS_visualcpp/hash-Structure.md) defines a `hash function` that's suitable for mapping values of type [type_index](../VS_visualcpp/type_index-Class.md) to a distribution of index values.  
  
 The `type_index` class wraps a pointer to a `type_info` object to assist in indexing.  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)