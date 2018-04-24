---
title: "Compiler Error C2711 | Microsoft Docs"
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
  - "C2711"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2711"
ms.assetid: 9df9f808-7419-4e63-abdd-e6538ff0871f
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2711
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2711](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2711).  
  
  
function' : this function cannot be compiled as managed, consider using #pragma unmanaged  
  
 Some instructions will prevent the compiler from generating MSIL for the enclosing function.  
  
 The following sample generates C2711:  
  
```  
// C2711.cpp  
// compile with: /clr  
// processor: x86  
using namespace System;  
value struct V {  
   static const t = 10;  
};  
  
void bar() {  
   V::t;  
   __asm int 3   // C2711 inline asm can't be compiled managed  
}  
```

