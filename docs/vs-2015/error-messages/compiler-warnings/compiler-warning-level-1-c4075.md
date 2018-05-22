---
title: "Compiler Warning (level 1) C4075 | Microsoft Docs"
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
  - "C4075"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4075"
ms.assetid: 19a700b6-f210-4b9d-a2f2-76cfe39ab178
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4075
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4075](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4075).  
  
  
initializers put in unrecognized initialization area  
  
 A [#pragma init_seg](../../preprocessor/init-seg.md) uses an unrecognized section name. The compiler ignores the **pragma** command.  
  
 The following sample generates C4075:  
  
```  
// C4075.cpp  
// compile with: /W1  
#pragma init_seg("mysegg")   // C4075  
  
// try..  
// #pragma init_seg(user)  
  
int main() {  
}  
```

