---
title: "Compiler Error C2807 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2807"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2807"
ms.assetid: bd7a207a-f379-4de6-8ee8-c7cab78b3480
caps.latest.revision: 7
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
# Compiler Error C2807
the second formal parameter to postfix 'operator operator' must be 'int'  
  
 The second parameter to a postfix operator has the wrong type.  
  
 The following sample generates C2807:  
  
```  
// C2807.cpp  
// compile with: /c  
class X {  
public:  
   X operator++ ( X );   // C2807 nonvoid parameter  
   X operator++ ( int );   // OK, int parameter  
};  
```