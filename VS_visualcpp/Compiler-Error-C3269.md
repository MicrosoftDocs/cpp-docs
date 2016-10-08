---
title: "Compiler Error C3269"
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
ms.assetid: c575f067-244d-4dd5-bf58-9e7630ea58b7
caps.latest.revision: 9
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
# Compiler Error C3269
'function' : a member-function of a managed or WinRTtype cannot be declared with '...'  
  
 Managed and WinRT class member functions cannot declare variable-length parameter lists.  
  
 The following sample generates C3269 and shows how to fix it:  
  
```  
// C3269_2.cpp  
// compile with: /clr  
  
ref struct A  
{  
   void func(int i, ...)   // C3269  
   // try the following line instead  
   // void func(int i )  
   {  
   }  
};  
  
int main()  
{  
}  
```  
  
 The following sample generates C3269 and shows how to fix it:  
  
```  
// C3269.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc struct A  
{  
   void func(int i, ...)   // C3269  
   // try the following line instead  
   // void func(int i )  
   {  
   }  
};  
  
int main()  
{  
}  
```