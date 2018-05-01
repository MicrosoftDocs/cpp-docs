---
title: "Compiler Error C2806 | Microsoft Docs"
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
  - "C2806"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2806"
ms.assetid: 7c9ff1f4-1590-4c47-991d-b1075a173b48
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2806
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2806](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2806).  
  
  
operator operator' has too many formal parameters  
  
 An overloaded operator has too many parameters.  
  
 The following sample generates C2806:  
  
```  
// C2806.cpp  
// compile with: /c  
class X {  
public:  
   X operator++ ( int, int );   // C2806 more than 1 parameter  
   X operator++ ( int );   // OK  
} ;  
```

