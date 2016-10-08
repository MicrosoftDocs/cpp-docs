---
title: "Compiler Error C2959"
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
ms.assetid: d66bb2a8-70c3-4209-a358-b0c47f111a50
caps.latest.revision: 6
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
# Compiler Error C2959
a generic class or function may not be a member of a template  
  
 For more information, see [Windows Runtime and Managed Templates](../VS_visualcpp/Windows-Runtime-and-Managed-Templates--C---Component-Extensions-.md) and [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C2959.  
  
```  
// C2959.cpp  
// compile with: /clr /c  
template <class T> ref struct S {  
   generic <class U> ref struct GR1;   // C2959  
};  
```