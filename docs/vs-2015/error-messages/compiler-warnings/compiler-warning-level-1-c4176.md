---
title: "Compiler Warning (level 1) C4176 | Microsoft Docs"
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
  - "C4176"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4176"
ms.assetid: cfffb934-219a-4a63-9df6-ba54405bf766
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4176
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4176](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4176).  
  
  
subcomponent' : unknown subcomponent for #pragma component browser  
  
 The **component** pragma contains an invalid subcomponent. To exclude references to a particular name, you must use the **references** option before the name.  
  
## Example  
  
```  
// C4176.cpp  
// compile with: /W1 /LD  
#pragma component(browser, off, i)  // C4176  
#pragma component(browser, off, references, i) // ok  
```

