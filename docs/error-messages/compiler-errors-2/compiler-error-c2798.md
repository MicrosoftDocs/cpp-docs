---
title: "Compiler Error C2798 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2798"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2798"
ms.assetid: fb0cd861-b228-4f81-8090-e28344a727e0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2798
'super::member' is ambiguous  
  
 Multiple inherited structures contain the member you referenced with [super](../../cpp/super.md). You could fix the error by either:  
  
-   Removing B1 or B2 from the inheritance list of D.  
  
-   Changing the name of the data member in B1 or B2.  
  
 The following sample generates C2798:  
  
```  
// C2798.cpp  
struct B1 {  
   int i;  
};  
  
struct B2 {  
   int i;  
};  
  
struct D : B1, B2 {  
   void g() {  
      __super::i = 4; // C2798  
   }  
};  
```