---
title: "Compiler Error C3198 | Microsoft Docs"
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
  - "C3198"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3198"
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3198
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3198](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3198).  
  
  
invalid use of floating-point pragmas: fenv_access pragma operates only in precise mode  
  
 [fenv_access](../../preprocessor/fenv-access.md) pragma was used under an [/fp](../../build/reference/fp-specify-floating-point-behavior.md) setting other than **/fp:precise**.  
  
 The following sample generates C3198:  
  
```  
// C3198.cpp  
// compile with: /fp:fast  
#pragma fenv_access(on)   // C3198  
```

