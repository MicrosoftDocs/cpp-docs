---
title: "General Language Changes (C++-CLI)"
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
H1: General Language Changes (C++/CLI)
ms.assetid: 79a70768-225c-4ae2-84d1-178b20a9b042
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
# General Language Changes (C++-CLI)
A number of CLR language features changed from Managed Extensions for C++ to Visual C++.  
  
 The changes described in this section are a sort of language miscellany. It includes a change in the handling of string literals, a change in the overload resolution between an ellipsis and the `Param` attribute, the change of `typeof` to `typeid`, a change in the calling of constructor initializer lists, and the introduction of a new cast notation, that of `safe_cast`.  
  
 [String Literal](../VS_visualcpp/String-Literal.md)  
 Discusses how the handling of string literals has changed.  
  
 [Param Array and Ellipsis](../VS_visualcpp/Param-Array-and-Ellipsis.md)  
 Discusses how `ParamArray` is now given precedence over the ellipsis (`…`) for resolving function calls with varying numbers of arguments.  
  
 [typeof Goes to T::typeid](../VS_visualcpp/typeof-Goes-to-T--typeid.md)  
 Discusses how the `typeof` operator has been supplanted by `typeid`.  
  
 [Initializer Lists](../VS_visualcpp/Initializer-Lists.md)  
 Discusses changes in the calling order of initializer lists.  
  
 [Cast Notation and Introduction of safe_cast<>](../VS_visualcpp/Cast-Notation-and-Introduction-of-safe_cast--.md)  
 Discusses changes to cast notation and in particular the introduction of `safe_cast`.  
  
## See Also  
 [C++/CLI Migration Primer](../VS_visualcpp/C---CLI-Migration-Primer.md)