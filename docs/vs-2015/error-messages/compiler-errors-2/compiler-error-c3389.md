---
title: "Compiler Error C3389 | Microsoft Docs"
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
  - "C3389"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3389"
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3389
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3389](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3389).  
  
  
__declspec(keyword) cannot be used with /clr:pure or /clr:safe  
  
 A [__declspec](../../cpp/declspec.md) modifier used implies a per process state.  [/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md) implies a per [appdomain](../../cpp/appdomain.md) state.  So, declaring a variable with the `keyword`**__declspec** modifier and compiling with **/clr:pure** is not allowed.  
  
 The following sample generates C3389:  
  
```  
// C3389.cpp  
// compile with: /clr:pure /c  
__declspec(dllexport) int g2 = 0;   // C3389  
```

