---
title: "Compiler Error C2448 | Microsoft Docs"
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
  - "C2448"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2448"
ms.assetid: e255df3c-f861-4b4d-a193-8768cef061a5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2448
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2448](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2448).  
  
  
identifier' : function-style initializer appears to be a function definition  
  
 The function definition is incorrect.  
  
 This error can be caused by an old-style C-language formal list.  
  
 The following sample generates C2448:  
  
```  
// C2448.cpp  
void func(c)  
   int c;  
{}   // C2448  
```

