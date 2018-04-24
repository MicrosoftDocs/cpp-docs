---
title: "Compiler Error C2702 | Microsoft Docs"
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
  - "C2702"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2702"
ms.assetid: 6def15d4-9a8d-43e7-ae35-42d7cb57c27e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2702
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2702](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2702).  
  
  
__except may not appear in termination block  
  
 An exception handler (`__try`/`__except`) cannot be nested inside a `__finally` block.  
  
 The following sample generates C2702:  
  
```  
// C2702.cpp  
// processor: x86 IPF  
int Counter;  
int main() {  
   __try {}  
   __finally {  
      __try {}   // C2702  
      __except( Counter ) {}   // C2702  
   }  
}  
```

