---
title: "Compiler Warning (level 1) C4185 | Microsoft Docs"
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
  - "C4185"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4185"
ms.assetid: 37e7063a-35b1-4e05-ae31-e811dced02b9
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4185
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4185](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4185).  
  
  
ignoring unknown #import attribute 'attribute'  
  
 The attribute is not a valid attribute of `#import`. It is ignored.  
  
## Example  
  
```  
// C4185.cpp  
// compile with: /W1 /c  
#import "stdole2.tlb" no_such_attribute   // C4185  
```

