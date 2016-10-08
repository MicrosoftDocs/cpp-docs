---
title: "Compiler Error C2969"
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
ms.assetid: e4ea3d66-b937-4b2c-b42a-96e03fb11579
caps.latest.revision: 7
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
# Compiler Error C2969
syntax error : 'symbol' : expected member function definition to end with '}'  
  
 A template member function definition has an unmatched closing brace.  
  
 The following sample generates C2969:  
  
```  
// C2969.cpp  
// compile with: /c  
class A {  
   int i;  
public:  
   A(int i) {}  
};  
  
A anA(1);  
  
class B {  
   A a;  
   B() : a(anA);   // C2969  
   // try the following line instead  
   // B() : a(anA) {}  
};  
```