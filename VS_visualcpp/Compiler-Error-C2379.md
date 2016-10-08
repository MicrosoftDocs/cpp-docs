---
title: "Compiler Error C2379"
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
ms.topic: error-reference
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
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
# Compiler Error C2379
formal parameter number has different type when promoted  
  
 The type of the specified parameter is not compatible, through default promotions, with the type in a previous declaration. This is an error in ANSI C ([/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)) and a warning with Microsoft extensions (**/Ze**).  
  
 The following sample generates C2379:  
  
```  
// C2379.c  
// compile with: /Za  
void func();  
void func(char);   // C2379, char promotes to int  
```