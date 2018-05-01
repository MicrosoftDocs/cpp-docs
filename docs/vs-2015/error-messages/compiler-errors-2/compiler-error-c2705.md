---
title: "Compiler Error C2705 | Microsoft Docs"
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
  - "C2705"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2705"
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2705
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2705](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2705).  
  
  
label' : illegal jump into 'exception handler block' scope  
  
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

