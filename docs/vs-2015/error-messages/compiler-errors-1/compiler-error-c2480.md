---
title: "Compiler Error C2480 | Microsoft Docs"
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
  - "C2480"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2480"
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2480
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2480](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2480).  
  
  
identifier' : 'thread' is only valid for data items of static extent  
  
 You cannot use the `thread` attribute with an automatic variable, nonstatic data member, function parameter, or on function declarations or definitions.  
  
 Use the `thread` attribute for global variables, static data members, and local static variables only.  
  
 The following sample generates C2480:  
  
```  
// C2480.cpp  
// compile with: /c  
__declspec( thread ) void func();   // C2480  
__declspec( thread ) static int i;   // OK  
```

