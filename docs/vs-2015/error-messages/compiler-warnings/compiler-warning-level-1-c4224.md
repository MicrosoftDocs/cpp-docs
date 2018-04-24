---
title: "Compiler Warning (level 1) C4224 | Microsoft Docs"
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
  - "C4224"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4224"
ms.assetid: 1531cae0-5040-49fd-b149-005bb5085391
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4224
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4224](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4224).  
  
  
nonstandard extension used : formal parameter 'identifier' was previously defined as a type  
  
 The identifier was previously used as a `typedef`. This causes a warning under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
## Example  
  
```  
// C4224.cpp  
// compile with: /Za /W1 /LD  
typedef int I;  
void func ( int I );  // C4224  
```

