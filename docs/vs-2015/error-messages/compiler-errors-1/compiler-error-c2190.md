---
title: "Compiler Error C2190 | Microsoft Docs"
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
  - "C2190"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2190"
ms.assetid: 34e15f85-d979-4948-80fc-46c414508a70
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2190
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2190](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2190).  
  
  
first parameter list longer than second  
  
 A C function was declared a second time with a shorter parameter list. C does not support overloaded functions.  
  
 The following sample generates C2190:  
  
```  
// C2190.c  
// compile with: /Za /c  
void func( int, float );  
void func( int  );   // C2190, different parameter list  
void func2( int  );   // OK  
```

