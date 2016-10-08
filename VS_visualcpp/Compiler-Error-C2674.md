---
title: "Compiler Error C2674"
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
ms.assetid: 7cbd70d8-d992-44d7-a5cb-dd8cf9c759d2
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
# Compiler Error C2674
a generic declaration is not allowed in this context  
  
 A generic was declared incorrectly. For more information, see [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C2674.  
  
```  
// C2674.cpp  
// compile with: /clr /c  
void F(generic <class T> ref class R1);   // C2674  
generic <class T> ref class R2 {};   // OK  
```