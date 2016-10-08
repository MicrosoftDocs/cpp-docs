---
title: "Compiler Error C3266"
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
ms.assetid: 7375c099-acb7-42f6-898d-57cfefa010b8
caps.latest.revision: 9
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
# Compiler Error C3266
'class' : a class-constructor must have a 'void' parameter list  
  
 Class-constructors in a class using /clr programming cannot take parameters.  
  
 The following sample generates C3266:  
  
```  
// C3266.cpp  
// compile with: /clr  
  
ref class X {  
   static X(int i) { // C3266  
   // try the following line instead  
   // static X() {  
   }  
};  
  
int main() {  
}  
```  
  
 The following sample generates C3266:  
  
```  
// C3266b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class X {  
   static X(int i) { // C3266  
   // try the following line instead  
   // static X() {  
   }  
};  
  
int main() {  
}  
```