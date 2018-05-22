---
title: "Compiler Error C2735 | Microsoft Docs"
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
  - "C2735"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2735"
ms.assetid: 6ce45600-7148-4bc0-8699-af0ef137571e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2735
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2735](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2735).  
  
  
keyword' keyword is not permitted in formal parameter type specifier  
  
 The keyword is invalid in this context.  
  
 The following sample generates C2735:  
  
```  
// C2735.cpp  
void f(inline int){}   // C2735  
```

