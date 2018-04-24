---
title: "Compiler Warning (level 1) C4163 | Microsoft Docs"
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
  - "C4163"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4163"
ms.assetid: b08413fd-03fc-4f41-9167-a98976ac12f2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4163
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4163](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4163).  
  
  
identifier' : not available as an intrinsic function  
  
 The specified function cannot be used as an [intrinsic](../../preprocessor/intrinsic.md) function. The compiler ignores the invalid function name.  
  
 The following sample generates C4163:  
  
```  
// C4163.cpp  
// compile with: /W1 /LD  
#include <math.h>  
#pragma intrinsic(mysin)   // C4163  
// try the following line instead  
// #pragma intrinsic(sin)  
```

