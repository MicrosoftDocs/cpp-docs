---
title: "Compiler Error C2645 | Microsoft Docs"
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
  - "C2645"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2645"
ms.assetid: 6609c2fa-c3b2-4a6b-8e8d-58fb52f67175
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2645
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2645](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2645).  
  
  
no qualified name for pointer to member (found ':: *')  
  
 The declaration of a pointer to a member does not specify a class.  
  
 The following sample generates C2645:  
  
```  
// C2645.cpp  
class A {};  
int main() {  
   int B::* bp;   // C2645 B not defined  
   int A::* ap;   // OK  
}  
```

