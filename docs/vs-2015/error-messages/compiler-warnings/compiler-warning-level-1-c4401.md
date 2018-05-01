---
title: "Compiler Warning (level 1) C4401 | Microsoft Docs"
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
  - "C4401"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4401"
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4401
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4401](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4401).  
  
  
bitfield' : member is bit field  
  
 Inline assembly code tries to access a bit-field member. Inline assembly cannot access bit-field members, so the last packing boundary before the bit-field member is used.  
  
 To avoid this warning, cast the bit field to an appropriate type before making the reference in inline assembly code. The following sample generates C4401:  
  
```  
// C4401.cpp  
// compile with: /W1  
// processor: x86  
typedef struct bitfield {  
   signed bit : 1;  
} mybitfield;  
  
int main() {  
   mybitfield bf;  
   bf.bit = 0;  
   __asm {  
      mov bf.bit,0;   // C4401  
   }  
  
   /* use the following __asm block to resolve the warning  
   int i = (int)bf.bit;  
   __asm {  
      mov i,0;  
   }  
   */  
}  
```

