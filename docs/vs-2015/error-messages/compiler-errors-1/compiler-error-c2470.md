---
title: "Compiler Error C2470 | Microsoft Docs"
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
  - "C2470"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2470"
ms.assetid: e17d2cb8-b84c-447c-976a-625f0c96f3fe
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2470
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2470](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2470).  
  
  
function' : looks like a function definition, but there is no parameter list; skipping apparent body  
  
 A function definition is missing its argument list.  
  
 The following sample generates C2470:  
  
```  
// C2470.cpp  
int MyFunc {};  // C2470  
void MyFunc2() {};  //OK  
  
int main(){  
   MyFunc();  
   MyFunc2();  
}  
```

