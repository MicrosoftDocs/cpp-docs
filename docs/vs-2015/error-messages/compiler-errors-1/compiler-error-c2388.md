---
title: "Compiler Error C2388 | Microsoft Docs"
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
  - "C2388"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2388"
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2388
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2388](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2388).  
  
  
symbol' : a symbol cannot be declared with both __declspec(appdomain) and \__declspec(process)  
  
 The `appdomain` and `process``__declspec` modifiers cannot be used on the same symbol. The storage for a variable exists per process or per application domain.  
  
 For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).  
  
 The following sample generates C2388:  
  
```  
// C2388.cpp  
// compile with: /clr /c  
__declspec(process) __declspec(appdomain) int i;   // C2388  
__declspec(appdomain) int i;   // OK  
```

