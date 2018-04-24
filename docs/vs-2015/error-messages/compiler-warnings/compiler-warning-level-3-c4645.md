---
title: "Compiler Warning (level 3) C4645 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4645"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4645"
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4645
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4645](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4645).  
  
  
function declared with __declspec(noreturn) has a return statement  
  
 A [return](../../cpp/return-statement-in-program-termination-cpp.md) statement was found in a function that is marked with the [noreturn](../../cpp/noreturn.md) `__declspec` modifier. The `return` statement was ignored.  
  
 The following sample generates C4645:  
  
```  
// C4645.cpp  
// compile with:  /W3  
void __declspec(noreturn) func() {  
   return;   // C4645, delete this line to resolve  
}  
  
int main() {  
}  
```

