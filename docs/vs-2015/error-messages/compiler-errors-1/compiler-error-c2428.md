---
title: "Compiler Error C2428 | Microsoft Docs"
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
  - "C2428"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2428"
ms.assetid: 74aa5714-e930-4f9e-9061-68ccce7f0d38
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2428
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2428](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2428).  
  
  
operation' : not allowed on operand of type 'bool'  
  
 You cannot apply a decrement operator to objects of type `bool`.  
  
 The following sample generates C2428:  
  
```  
// C2428.cpp  
void g(bool fFlag) {  
   --fFlag;   // C2428  
   fFlag--;   // C2428  
}  
```

