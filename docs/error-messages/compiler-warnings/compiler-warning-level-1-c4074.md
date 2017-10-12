---
title: "Compiler Warning (level 1) C4074 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4074"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4074"]
ms.assetid: cd510e66-c338-4a86-a4d7-bfa1df9b16c3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4074
initializers put in compiler reserved initialization area  
  
 The compiler initialization area, which is specified by [#pragma init_seg](../../preprocessor/init-seg.md), is reserved by Microsoft. Code in this area may be executed before initialization of the C run-time library.  
  
 The following sample generates C4074:  
  
```  
// C4074.cpp  
// compile with: /W1  
#pragma init_seg( compiler )   // C4074  
  
// try this line to resolve the warning  
// #pragma init_seg(user)  
  
int main() {  
}  
```