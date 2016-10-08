---
title: "Application Domains and Visual C++"
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
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
caps.latest.revision: 7
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
# Application Domains and Visual C++
If you have a `__clrcall` virtual function, the vtable will be per application domain (appdomain). If you create an object in one appdomain, you can only call the virtual function from within that appdomain. All functions defined in **/clr:pure** compilands use the `__clrcall` calling convention. Therefore, all vtables defined in **/clr:pure** compilands are per appdomain. In mixed mode (**/clr**) you will have per process vtables if your type has no `__clrcall` virtual functions.  
  
 For more information, see  
  
-   [appdomain](../VS_visualcpp/appdomain.md)  
  
-   [__clrcall](../VS_visualcpp/__clrcall.md)  
  
-   [How to: Migrate to /clr:pure (C++/CLI)](../VS_visualcpp/How-to--Migrate-to--clr-pure--C---CLI-.md)  
  
-   [process](../VS_visualcpp/process.md)  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../VS_visualcpp/Mixed--Native-and-Managed--Assemblies.md)