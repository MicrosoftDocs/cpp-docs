---
title: "Defining an NMAKE Macro"
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
ms.assetid: 45aae451-9d33-4a3d-8799-2e0cae17070d
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
# Defining an NMAKE Macro
## Syntax  
  
```  
  
macroname=string  
```  
  
## Remarks  
 The *macroname* is a combination of letters, digits, and underscores (_) up to 1,024 characters, and is case sensitive. The *macroname* can contain an invoked macro. If *macroname* consists entirely of an invoked macro, the macro being invoked cannot be null or undefined.  
  
 The `string` can be any sequence of zero or more characters. A null string contains zero characters or only spaces or tabs. The `string` can contain a macro invocation.  
  
## What do you want to know more about?  
 [Special characters in macros](../VS_visualcpp/Special-Characters-in-Macros.md)  
  
 [Null and undefined macros](../VS_visualcpp/Null-and-Undefined-Macros.md)  
  
 [Where to define macros](../VS_visualcpp/Where-to-Define-Macros.md)  
  
 [Precedence in macro definitions](../VS_visualcpp/Precedence-in-Macro-Definitions.md)  
  
## See Also  
 [Macros and NMAKE](../VS_visualcpp/Macros-and-NMAKE.md)