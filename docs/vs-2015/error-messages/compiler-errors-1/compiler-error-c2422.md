---
title: "Compiler Error C2422 | Microsoft Docs"
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
  - "C2422"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2422"
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2422
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2422](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2422).  
  
  
illegal segment override in 'operand'  
  
 Inline assembly code incorrectly uses a segment override operator (colon) on an operand.  Possible causes include:  
  
-   The register preceding the operator is not a segment register.  
  
-   The register preceding the operator is not the only segment register in the operand.  
  
-   The segment override operator appears within an indirection operator (brackets).  
  
-   The expression following the segment override operator is not an immediate operand or a memory operand.  
  
 The following sample generates C2422:  
  
```  
// C2422.cpp  
// processor: x86  
int main() {  
   _asm {  
      mov AX, [BX:ES]   // C2422  
      mov AX, ES   // OK  
   }  
}  
```

