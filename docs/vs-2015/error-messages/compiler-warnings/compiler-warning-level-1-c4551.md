---
title: "Compiler Warning (level 1) C4551 | Microsoft Docs"
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
  - "C4551"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4551"
ms.assetid: 458b59bd-e2d7-425f-9ba6-268ff200424f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4551
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4551](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4551).  
  
  
function call missing argument list  
  
 A function call must include the open and close parentheses after the function name even if the function takes no parameters.  
  
 The following sample generates C4551:  
  
```  
// C4551.cpp  
// compile with: /W1  
void function1() {  
}  
  
int main() {  
   function1;   // C4551  
   function1();   // OK  
}  
```

