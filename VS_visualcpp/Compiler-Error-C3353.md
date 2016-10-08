---
title: "Compiler Error C3353"
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
ms.assetid: 5699c04b-d504-46ce-bf71-c200318fed71
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
# Compiler Error C3353
'delegate' : a delegate can only be created from a global function or a member function of a managed or WinRT type  
  
 Delegates, declared with the [__delegate](../Topic/__delegate.md) or [delegate  (C++ Component Extensions)](../VS_visualcpp/delegate---C---Component-Extensions-.md) keyword, can only be declared at global scope.  
  
 The following sample generates C3353:  
  
```  
// C3353.cpp  
// compile with: /clr  
delegate int f;   // C3353  
```