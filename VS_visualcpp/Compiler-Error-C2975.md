---
title: "Compiler Error C2975"
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
ms.assetid: 526f6b9d-6c76-4c12-9252-1b1d7c1e06c7
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
# Compiler Error C2975
'arg' : invalid template argument for 'type', expected compile-time constant expression  
  
 The template argument does not match the template declaration; a constant expression should appear within the angle brackets. Variables are not allowed as template actual arguments. Check the template definition to find the correct types.  
  
 The following sample generates C2975:  
  
```  
// C2975.cpp  
template<int I>  
class X {};  
  
int main() {  
   int i = 4, j = 2;  
   X<i + j> x1;   // C2975  
   X<6> x2;   // OK  
}  
```  
  
 C2975 will also occur when you use __LINE\_\_ as a compile-time constant with [/ZI](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md). One solution would be to compile with [/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) instead of **/ZI**.  
  
```  
// C2975b.cpp  
// compile with: /ZI  
// processor: x86  
template<long line>   
void test(void) {}  
  
int main() {  
   test<__LINE__>();   // C2975  
}  
```