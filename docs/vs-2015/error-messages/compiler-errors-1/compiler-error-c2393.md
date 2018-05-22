---
title: "Compiler Error C2393 | Microsoft Docs"
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
  - "C2393"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2393"
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2393
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2393](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2393).  
  
  
symbol' : per-appdomain symbol cannot be allocated in segment 'segment'  
  
 The use of [appdomain](../../cpp/appdomain.md) variables implies that you are compiling with **/clr:pure** or **/clr:safe**, and a safe or pure image cannot contain data segments.  
  
 See [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) for more information.  
  
## Example  
 The following sample generates C2393.  
  
```  
// C2393.cpp  
// compile with: /clr:pure /c  
#pragma data_seg("myseg")  
int n = 0;   // C2393  
```

