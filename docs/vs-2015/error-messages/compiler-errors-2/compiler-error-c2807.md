---
title: "Compiler Error C2807 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2807
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2807](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2807).  
  
  
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

