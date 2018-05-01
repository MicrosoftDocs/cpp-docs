---
title: "Compiler Error C2013 | Microsoft Docs"
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
  - "C2013"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2013"
ms.assetid: 6b5c955c-53da-48ee-8533-64ef5b905173
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2013
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2013](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2013).  
  
  
missing '>'  
  
 An `#include` directive lacks a closing angle bracket. Add the closing bracket to resolve the error.  
  
 The following sample generates C2013:  
  
```  
// C2013.cpp  
#include <stdio.h    // C2013  
```  
  
 Possible resolution:  
  
```  
// C2013b.cpp  
// compile with: /c  
#include <stdio.h>  
```

