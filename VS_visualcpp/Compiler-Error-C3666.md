---
title: "Compiler Error C3666"
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
ms.assetid: 459e51dd-cefb-4346-99b3-644f2d8b65b2
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
# Compiler Error C3666
'constructor' : override specifier 'keyword' not allowed on a constructor  
  
 An override specifier was used on a constructor, and that is not allowed. For more information, see [Override Specifiers](../VS_visualcpp/Override-Specifiers---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3666.  
  
```  
// C3666.cpp  
// compile with: /clr /c  
ref struct R {  
   R() new {}   // C3666  
   R(int i) {}   // OK  
};  
```