---
title: "Compiler Error C2162 | Microsoft Docs"
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
  - "C2162"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2162"
ms.assetid: 34923628-d35e-48ab-9072-b95e3b5f6b45
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2162
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2162](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2162).  
  
  
expected macro formal parameter  
  
 The token following a stringizing operator (#) is not a formal parameter name.  
  
## Example  
 The following sample generates C2162:  
  
```  
// C2162.cpp  
// compile with: /c  
#include <stdio.h>  
  
#define print(a) printf_s(b)   // OK  
#define print(a) printf_s(#b)    // C2162  
```

