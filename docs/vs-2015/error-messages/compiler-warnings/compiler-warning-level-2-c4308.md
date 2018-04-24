---
title: "Compiler Warning (level 2) C4308 | Microsoft Docs"
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
  - "C4308"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4308"
ms.assetid: d4e5c53c-71b2-4bbc-8a7c-3a2a3180d9d9
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4308
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4308](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4308).  
  
  
negative integral constant converted to unsigned type  
  
 An expression converts a negative integer constant to an unsigned type. The result of the expression is probably meaningless.  
  
## Example  
  
```  
// C4308.cpp  
// compile with: /W2  
unsigned int u = (-5 + 3U);   // C4308  
  
int main()  
{  
}  
```

