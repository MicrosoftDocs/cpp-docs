---
title: "Compiler Error C3669"
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
ms.assetid: be9c7ae4-e96f-47ab-922a-39a3537d5ca6
caps.latest.revision: 10
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
# Compiler Error C3669
'member' : override specifier 'override' not allowed on static member functions or constructors  
  
 An override was specified incorrectly. For more information, see [Explicit Overrides](../VS_visualcpp/Explicit-Overrides---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3669.  
  
```  
// C3669.cpp  
// compile with: /clr  
public ref struct R {  
   R() override {}   // C3669  
};  
```