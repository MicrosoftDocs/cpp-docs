---
title: "Compiler Error C2130"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c6fd5a7e-8f28-4f67-99d1-95a13b0dff90
caps.latest.revision: 10
manager: douge
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
# Compiler Error C2130
\#line expected a string containing the filename, found 'token'  
  
 The optional file name token following [#line](../VS_visualcpp/#line-Directive--C-C---.md) `linenumber` must be a string.  
  
 The following sample generates C2130:  
  
```  
// C2130.cpp  
int main() {  
   #line 1000 test   // C2130  
   #line 1000 "test"   // OK  
}  
```