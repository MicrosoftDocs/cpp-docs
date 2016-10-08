---
title: "Requirements for STL-CLR Container Elements"
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
ms.topic: reference
H1: Requirements for STL/CLR Container Elements
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
caps.latest.revision: 8
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
# Requirements for STL-CLR Container Elements
All reference types that are inserted into STL/CLR containers must have, at a minimum, the following elements:  
  
-   A public copy constructor.  
  
-   A public assignment operator.  
  
-   A public destructor.  
  
 Furthermore, associative containers such as [set](../VS_visualcpp/set--STL-CLR-.md) and [map](../VS_visualcpp/map--STL-CLR-.md) must have a public comparison operator defined, which is `operator<` by default. Some operations on containers might also require a public default constructor and a public equivalence operator to be defined.  
  
 Like reference types, value types and handles to reference types that are to be inserted into an associative container must have a comparison operator such as `operator<` defined. The requirements for a public copy constructor, public assignment operator, and a public destructor do not exist for value types or handles to reference types.  
  
## See Also  
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)