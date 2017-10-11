---
title: "Compiler Error C2423 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2423"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2423"]
ms.assetid: 8797fb8b-b58b-4add-b6e6-2a9a3cd9084d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2423
'number' : illegal scale  
  
 Inline assembly code uses a number other than 1, 2, 4, or 8 to scale a register.  
  
 The following sample generates C2423:  
  
```  
// C2423.cpp  
// processor: x86  
int main() {  
   _asm {  
      lea EAX, [EAX*3]   // C2423  
      lea EAX, [EAX+EAX*2]   // OK  
   }  
}  
```