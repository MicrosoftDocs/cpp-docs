---
title: "Compiler Error C3612"
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
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
caps.latest.revision: 11
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
# Compiler Error C3612
'type': a sealed class cannot be abstract  
  
 Types defined with `value` (or [__value](../Topic/__value.md)) are sealed by default and a class is abstract unless it implements all methods of its base. A sealed abstract class can neither be a base class nor can it be instantiated.  
  
 For more information, see [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md).  
  
 The following sample generates C3612:  
  
```  
// C3612.cpp  
// compile with: /clr /c  
value struct V: public System::ICloneable {};   // C3612  
  
// OK  
value struct V2: public System::ICloneable {  
   Object^ Clone();  
};  
```