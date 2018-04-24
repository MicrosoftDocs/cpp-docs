---
title: "Compiler Error C3199 | Microsoft Docs"
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
  - "C3199"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3199"
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3199
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3199](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3199).  
  
  
invalid use of floating-point pragmas: exceptions are not supported in non-precise mode  
  
 The [float_control](../../preprocessor/float-control.md) pragma was used to specify floating-point exception model under an [/fp](../../build/reference/fp-specify-floating-point-behavior.md) setting other than **/fp:precise**.  
  
 The following sample generates C3199:  
  
```  
// C3199.cpp  
// compile with: /fp:fast  
#pragma float_control(except, on)   // C3199  
```

