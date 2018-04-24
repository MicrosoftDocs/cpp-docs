---
title: "Fatal Error C1021 | Microsoft Docs"
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
  - "C1021"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1021"
ms.assetid: e23171f4-ca6b-40c0-a913-a2edc6fa3766
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1021
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1021](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1021).  
  
  
invalid preprocessor command 'string'  
  
 `string` is not a valid [preprocessor directive](../../preprocessor/preprocessor-directives.md). To resolve the error, use a valid preprocessor name for `string`.  
  
 The following sample generates C1021:  
  
```  
// C1021.cpp  
#BadPreProcName    // C1021 delete line  
```

