---
title: "Compiler Warning (level 1) C4288"
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
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
caps.latest.revision: 8
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
# Compiler Warning (level 1) C4288
nonstandard extension used : 'var' : loop control variable declared in the for-loop is used outside the for-loop scope; it conflicts with the declaration in the outer scope  
  
 When compiling with [/Ze](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md) and **/Zc:forscope-**, a variable declared in a **for** loop was used after the [for](../VS_visualcpp/for-Statement--C---.md)-loop scope. A Microsoft extension to the C++ language allows this variable to remain in scope, and C4288 reminds you that the first declaration of the variable is not used.  
  
 See [/Zc:forScope](../VS_visualcpp/-Zc-forScope--Force-Conformance-in-for-Loop-Scope-.md) for information about how to specify the Microsoft extension in **for** loops with /Ze.  
  
 The following sample generates C4288:  
  
```  
// C4288.cpp  
// compile with: /W1 /c /Zc:forScope-  
int main() {  
   int i = 0;    // not used in this program  
   for (int i = 0 ; ; ) ;  
   i++;   // C4288 using for-loop declaration of i  
}  
```