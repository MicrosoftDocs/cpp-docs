---
title: "Compiler Error C2640 | Microsoft Docs"
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
  - "C2640"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2640"
ms.assetid: e4d137ab-ed1d-457c-9eec-b70d97f1b0b4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2640
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2640](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2640).  
  
  
identifier' : __based modifier illegal on reference  
  
 The `__based` modifier can be used on pointers only.  
  
 The following sample generates C2640:  
  
```  
// C2640.cpp  
void f(int i) {  
    void *vp;  
    int _based(vp) &vr = I;  // C2640  
}  
```

