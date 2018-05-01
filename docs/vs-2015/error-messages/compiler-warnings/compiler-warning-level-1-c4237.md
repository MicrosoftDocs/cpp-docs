---
title: "Compiler Warning (level 1) C4237 | Microsoft Docs"
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
  - "C4237"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4237"
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4237
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4237](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4237).  
  
  
keyword' keyword is not yet supported, but reserved for future use  
  
 A keyword in the C++ specification is not implemented in the Visual C++ compiler, but the keyword is not available as a user-defined symbol.  
  
 The following sample generates C4237:  
  
```  
// C4237.cpp  
// compile with: /W1 /c  
int export;   // C4237  
```

