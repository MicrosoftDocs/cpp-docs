---
title: "Compiler Warning (level 1) C4006 | Microsoft Docs"
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
  - "C4006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4006"
ms.assetid: f1a59819-0fd2-4361-8e3a-99e4b514b8e1
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4006
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4006](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4006).  
  
  
undef expected an identifier  
  
 The `#undef` directive did not specify an identifier to undefine. The directive is ignored. To resolve the warning, be sure to specify an identifier. The following sample generates C4006:  
  
```  
// C4006.cpp  
// compile with: /W1  
#undef   // C4006  
  
// try..  
// #undef TEST  
  
int main() {  
}  
```

