---
title: "Compiler Warning (level 4) C4434"
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
ms.assetid: 24b8785e-353a-4c37-8bed-ed61001a871d
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 4) C4434
a class constructor must have private accessibility; changing to private access  
  
 C4434 indicates that the compiler changed the accessibility of a static constructor. Static constructors must have private accessibility, as they are only meant to be called by the common language runtime. For more information, see [Static constructors](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Static_constructors).  
  
## Example  
 The following sample generates C4434.  
  
```  
// C4434.cpp  
// compile with: /W4 /c /clr  
public ref struct R {  
   static R(){}   // C4434  
};  
```