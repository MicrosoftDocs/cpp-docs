---
title: "virtual (C++)"
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
ms.topic: language-reference
ms.assetid: c2eb987d-6cf3-43b6-aa0c-29a6f561b1ae
caps.latest.revision: 9
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
# virtual (C++)
The `virtual` keyword declares a virtual function or a virtual base class.  
  
## Syntax  
  
```  
virtual [type-specifiers] member-function-declarator  
virtual [access-specifier] base-class-name  
```  
  
#### Parameters  
 `type-specifiers`  
 Specifies the return type of the virtual member function.  
  
 `member-function-declarator`  
 Declares a member function.  
  
 `access-specifier`  
 Defines the level of access to the base class, `public`, `protected` or `private`. Can appear before or after the `virtual` keyword.  
  
 `base-class-name`  
 Identifies a previously declared class type.  
  
## Remarks  
 See [Virtual Functions](../VS_visualcpp/Virtual-Functions.md) and [Virtual Base Classes](../Topic/Virtual%20Base%20Classes.md) for more information.  
  
 Also see the following keywords: [class](../VS_visualcpp/class--C---.md), [private](../VS_visualcpp/private--C---.md), [public](../VS_visualcpp/public--C---.md), and [protected](../VS_visualcpp/protected--C---.md).  
  
## See Also  
 [Keywords](../VS_visualcpp/Keywords--C---.md)