---
title: "Compiler Error C2731 | Microsoft Docs"
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
  - "C2731"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2731"
ms.assetid: 9b563999-febd-4582-9147-f355083c091e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2731
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2731](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2731).  
  
  
identifier' : function cannot be overloaded  
  
 The functions `main`, `WinMain`, `DllMain`, and `LibMain` cannot be overloaded.  
  
 The following sample generates C2731:  
  
```  
// C2731.cpp  
extern "C" void WinMain(int, char *, char *);  
void WinMain(int, short, char *, char*);   // C2731  
```

