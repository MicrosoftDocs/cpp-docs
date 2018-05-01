---
title: "Compiler Error C2101 | Microsoft Docs"
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
  - "C2101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2101"
ms.assetid: 42f0136f-8cc1-4f2b-be1c-721ec9278e66
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2101
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2101](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2101).  
  
  
on constant  
  
 The address-of operator ( `&` ) must have an l-value as operand.  
  
 The following sample generates C2101:  
  
```  
// C2101.cpp  
int main() {  
   char test;  
   test = &'a';   // C2101  
   test = 'a';   // OK  
}  
```

