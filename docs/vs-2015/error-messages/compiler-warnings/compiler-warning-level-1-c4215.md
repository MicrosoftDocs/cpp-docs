---
title: "Compiler Warning (level 1) C4215 | Microsoft Docs"
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
  - "C4215"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4215"
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4215
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4215](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4215).  
  
  
nonstandard extension used : long float  
  
 The default Microsoft extensions (/Ze) treat **long float** as **double**. ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) does not. Use **double** to maintain compatibility.  
  
 The following sample generates C4215:  
  
```  
// C4215.cpp  
// compile with: /W1 /LD  
long float a;   // C4215  
  
// use the line below to resolve the warning  
// double a;  
```

