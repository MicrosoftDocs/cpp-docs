---
title: "Using a Template Library"
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
ms.assetid: 5e80ec6e-a61c-41ce-b34b-9a6252c46265
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
# Using a Template Library
A template is somewhat like a macro. As with a macro, invoking a template causes it to expand (with appropriate parameter substitution) to code you have written. However, a template goes further than this to allow the creation of new classes based on types that you pass as parameters. These new classes implement type-safe ways of performing the operation expressed in your template code.  
  
 Template libraries such as ATL differ from traditional C++ class libraries in that they are typically supplied only as source code (or as source code with a little, supporting run time) and are not inherently or necessarily hierarchical in nature. Rather than deriving from a class to get the functionality you desire, you instantiate a class from a template.  
  
## See Also  
 [Introduction to ATL](../VS_visualcpp/Introduction-to-ATL.md)