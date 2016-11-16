---
title: "Compiler Error C2062 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2062"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2062"
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
caps.latest.revision: 9
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
# Compiler Error C2062
type 'type' unexpected  
  
 The compiler did not expect a type name.  
  
 The following sample generates C2062:  
  
```  
// C2062.cpp  
// compile with: /c  
struct A {  : int l; };   // C2062  
struct B { private: int l; };   // OK  
```  
  
 C2062 can also occur due to the way the compiler handles undefined types in a constructor's parameter list. If the compiler encounters an undefined (misspelled?) type, it assumes the constructor is an expression, and issues C2062. To resolve, only use defined types in a constructor parameter list.