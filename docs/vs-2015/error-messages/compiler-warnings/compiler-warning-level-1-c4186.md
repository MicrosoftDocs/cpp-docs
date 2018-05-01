---
title: "Compiler Warning (level 1) C4186 | Microsoft Docs"
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
  - "C4186"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4186"
ms.assetid: caf3f7d8-f305-426b-8d4e-2b96f5c269ea
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4186
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4186](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4186).  
  
  
import attribute 'attribute' requires count arguments; ignored  
  
 A `#import` attribute has the wrong number of arguments.  
  
## Example  
  
```  
// C4186.cpp  
// compile with: /W1 /c  
#import "stdole2.tlb" no_namespace("abc") rename("a","b","c")  // C4186  
```  
  
 The `no_namespace` attribute takes no arguments. The **rename** attribute takes only two arguments.

