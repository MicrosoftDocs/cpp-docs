---
title: "Compiler Error C2633 | Microsoft Docs"
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
  - "C2633"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2633"
ms.assetid: a7aceb65-4255-42d6-a8fb-e3cb6c4d2270
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2633
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2633](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2633).  
  
  
identifier' : 'inline' is the only legal storage class for constructors  
  
 A constructor is declared as a storage class other than inline.  
  
 The following sample generates C2633:  
  
```  
// C2633.cpp  
// compile with: /c  
class C {  
   extern C();   // C2633, not inline  
   inline C();   // OK  
};  
```

