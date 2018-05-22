---
title: "Compiler Error C2812 | Microsoft Docs"
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
  - "C2812"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2812"
ms.assetid: 22aadb8c-7232-489d-a3ad-60662dda30a8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2812
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2812](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2812).  
  
  
import is not supported with /clr:pure and /clr:safe  
  
 [#import Directive](../../preprocessor/hash-import-directive-cpp.md) is not supported with **/clr:pure** and **/clr:safe** because `#import` requires the use of native compiler support libraries.  
  
## Example  
 The following sample generates C2812.  
  
```  
// C2812.cpp  
// compile with: /clr:pure /c  
#import "importlib.tlb"   // C2812  
```

