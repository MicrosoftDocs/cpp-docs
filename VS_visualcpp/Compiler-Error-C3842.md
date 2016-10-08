---
title: "Compiler Error C3842"
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
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
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
# Compiler Error C3842
'function': 'const' and 'volatile' qualifiers on member functions of WinRT or managed types are not supported  
  
 [const](../VS_visualcpp/const--C---.md) and [volatile](../VS_visualcpp/volatile--C---.md) are not supported on member functions of Windows Runtime or managed types.  
  
 The following sample generates C3842:  
  
```  
// C3842a.cpp  
// compile with: /clr /c  
public ref struct A {  
   void f() const {}   // C3842  
   void f() volatile {}   // C3842  
  
   void f() {}  
};  
```