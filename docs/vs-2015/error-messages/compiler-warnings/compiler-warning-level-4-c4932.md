---
title: "Compiler Warning (level 4) C4932 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4932"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4932"
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4932
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4932](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4932).  
  
  
__identifier(identifier) and \__identifier(identifier) are indistinguishable  
  
 The compiler is unable to distinguish between **_finally** and `__finally` or `__try` and **_try** as a parameter passed to [__identifier](../../windows/identifier-cpp-cli.md). You should not attempt to use them both as identifiers in the same program, as it will result in a [C2374](../../error-messages/compiler-errors-1/compiler-error-c2374.md) error.  
  
 The following sample generates C4932:  
  
```  
// C4932.cpp  
// compile with: /clr /W4 /WX  
int main() {  
   int __identifier(_finally) = 245;   // C4932  
   int __identifier(__finally) = 25;   // C4932  
}  
```

