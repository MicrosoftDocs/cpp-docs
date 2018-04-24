---
title: "Compiler Error C2549 | Microsoft Docs"
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
  - "C2549"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2549"
ms.assetid: 29310094-54a3-4605-bc6d-a312a68daf5d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2549
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2549](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2549).  
  
  
user-defined conversion cannot specify a return type  
  
 The following sample generates C2549:  
  
```  
// C2549.cpp  
// compile with: /c  
class X {  
public:  
   int operator int() { return value; }   // C2549  
  
   // try the following line instead  
   // operator int() { return value; }  
private:  
   int value;  
};  
```

