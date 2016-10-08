---
title: "common_type Structure"
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
ms.assetid: 2b42722c-c3dc-4d62-8613-0271e52b6f00
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
# common_type Structure
Describes specializations of template class [common_type](../VS_visualcpp/common_type-Class.md) for instantiations of [duration](../VS_visualcpp/duration-Class.md) and [time_point](../VS_visualcpp/time_point-Class.md).  
  
## Syntax  
  
```  
template<class Rep1, class Period1,  
   class Rep2, class Period2>  
struct common_type  
<chrono::duration<Rep1, Period1>,   
chrono::duration<Rep2, Period2>>;  
  
template<class Clock,  
   class Duration1, class Duration2>  
struct common_type  
<chrono::time_point<Clock, Duration1>,  
chrono::time_point<Clock, Duration2>>;  
```  
  
## Requirements  
 **Header:** chrono  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [<chrono\>](../VS_visualcpp/-chrono-.md)