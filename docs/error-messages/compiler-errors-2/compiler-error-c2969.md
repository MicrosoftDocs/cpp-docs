---
title: "Compiler Error C2969 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2969"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2969"
ms.assetid: e4ea3d66-b937-4b2c-b42a-96e03fb11579
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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