---
title: "Compiler Warning (level 1) C4440 | Microsoft Docs"
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
  - "C4440"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4440"
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4440
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4440](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4440).  
  
  
calling convention redefinition from 'calling_convention1' to 'calling_convention2' ignored  
  
 An attempt to change the calling convention was ignored.  
  
 The following sample generates C4440:  
  
```  
// C4440.cpp  
// compile with: /W1 /LD /clr  
typedef void __clrcall F();  
typedef F __cdecl *PFV;   // C4440  
```

