---
title: "Compiler Error C2705 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2705"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2705"]
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2705
'label' : illegal jump into 'exception handler block' scope  
  
 Execution jumps to a label within a `try`/`catch`, `__try`/`__except`, `__try`/`__finally` block. For more information, see [Exception Handling](../../cpp/exception-handling-in-visual-cpp.md).  
  
 The following sample generates C2705:  
  
```  
// C2705.cpp  
int main() {  
goto trouble;  
   __try {  
      trouble: ;   // C2705  
   }  
   __finally {}  
  
   // try the following line instead  
   // trouble: ;  
}  
```