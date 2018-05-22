---
title: "Compiler Error C2831 | Microsoft Docs"
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
  - "C2831"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2831"
ms.assetid: c8c04288-0889-4265-a077-17f94cbcdcc9
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2831
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2831](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2831).  
  
  
operator operator' cannot have default parameters  
  
 Only three operators can have default parameters:  
  
-   [new](../../cpp/new-operator-cpp.md)  
  
-   Assignment =  
  
-   Left parenthesis (  
  
 The following sample generates C2831:  
  
```  
// C2831.cpp  
// compile with: /c  
#define BINOP <=  
class A {  
public:  
   int i;  
   int operator BINOP(int x = 1) {   // C2831  
   // try the following line instead  
   // int operator BINOP(int x) {  
      return i+x;  
   }  
};  
```

