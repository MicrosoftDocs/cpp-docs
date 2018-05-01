---
title: "Compiler Error C3120 | Microsoft Docs"
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
  - "C3120"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3120"
ms.assetid: 9b6b210f-9948-4517-a4cc-b4aaadebde68
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3120
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3120](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3120).  
  
  
method_name' : interface methods cannot take a variable argument list  
  
 An interface method cannot take a variable argument list. For example, the following interface definition generates C3120:  
  
```  
// C3120.cpp  
__interface A {  
int X(int i, ...);    // C3120  
};  
  
int main(void) { return(0); }  
```

