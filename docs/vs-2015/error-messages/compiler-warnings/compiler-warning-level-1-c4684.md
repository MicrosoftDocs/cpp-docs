---
title: "Compiler Warning (level 1) C4684 | Microsoft Docs"
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
  - "C4684"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4684"
ms.assetid: e95f1a83-2784-4b05-ae94-12148e056e26
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4684
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4684](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4684).  
  
  
attribute' : WARNING!! attribute may cause invalid code generation: use with caution  
  
 You used an attribute that should not commonly be used.  
  
 The following sample generates C4684:  
  
```  
// C4684.cpp  
// compile with: /W1 /LD  
 [module(name="xx")]; // C4684 expected  
[no_injected_text];  
```

