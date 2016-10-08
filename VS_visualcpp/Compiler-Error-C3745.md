---
title: "Compiler Error C3745"
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
ms.assetid: 1e64aec5-7e53-47e5-bc7d-3905230cfc66
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
# Compiler Error C3745
'function': only an event can be 'raised'  
  
 Only a function defined with the [__event](../VS_visualcpp/__event.md) keyword can be passed to the [__raise](../VS_visualcpp/__raise.md) keyword.  
  
 The following sample generates C3745:  
  
```  
// C3745.cpp  
struct E {  
   __event void func();  
   void func(int) {  
   }  
  
   void func2() {  
   }  
  
   void bar() {  
      __raise func();  
      __raise func(1);   // C3745  
      __raise func2();   // C3745  
   }  
};  
  
int main() {  
   E e;  
   __raise e.func();  
   __raise e.func(1);   // C3745  
   __raise e.func2();   // C3745  
}  
```