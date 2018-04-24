---
title: "Compiler Error C2192 | Microsoft Docs"
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
  - "C2192"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2192"
ms.assetid: a147197e-e72d-4620-939b-f9e08d7c7c12
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2192
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2192](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2192).  
  
  
parameter 'number' declaration different  
  
 A C function was declared a second time with a different parameter list. C does not support overloaded functions.  
  
 The following sample generates C2192:  
  
```  
// C2192.c  
// compile with: /Za /c  
void func( float, int );  
void func( int, float );   // C2192, different parameter list  
void func2( int, float );   // OK  
```

