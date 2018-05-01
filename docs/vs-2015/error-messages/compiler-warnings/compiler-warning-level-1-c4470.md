---
title: "Compiler Warning (level 1) C4470 | Microsoft Docs"
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
  - "C4470"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4470"
ms.assetid: f52a3eaa-a235-4747-a47d-9ec4ad4cb0ea
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4470
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4470](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4470).  
  
  
floating-point control pragmas ignored under /clr  
  
 The float-control pragmas:  
  
-   [fenv_access](../../preprocessor/fenv-access.md)  
  
-   [float_control](../../preprocessor/float-control.md)  
  
-   [fp_contract](../../preprocessor/fp-contract.md)  
  
 have no effect under [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 The following sample generates C4470:  
  
```  
// C4470.cpp  
// compile with: /clr /W1 /LD  
#pragma float_control(except, on)   // C4470  
```

