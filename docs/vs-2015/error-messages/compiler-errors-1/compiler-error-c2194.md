---
title: "Compiler Error C2194 | Microsoft Docs"
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
  - "C2194"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2194"
ms.assetid: df6e631c-0062-4844-9088-4cc7a0ff879f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2194
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2194](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2194).  
  
  
identifier' : is a text segment  
  
 The `data_seg` pragma uses a segment name used with `code_seg`.  
  
 The following sample generates C2194:  
  
```  
// C2194.cpp  
// compile with: /c  
#pragma code_seg("MYCODE")  
#pragma data_seg("MYCODE")   // C2194  
#pragma data_seg("MYCODE2")   // OK  
```

