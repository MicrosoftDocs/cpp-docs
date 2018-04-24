---
title: "Compiler Error C3890 | Microsoft Docs"
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
  - "C3890"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3890"
ms.assetid: 2f22c2fd-c14e-45e1-b936-b739ffc0b135
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3890
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3890](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3890).  
  
  
var' : you cannot take the address of a literal data member  
  
 A literal data member exists on the garbage-collected heap.  An object on the garbage-collected heap can be moved, so taking the address is not useful.  
  
 The following sample generates C3890:  
  
```  
// C3890.cpp  
// compile with: /clr  
ref struct Y1 {  
   literal int staticConst = 9;  
};  
  
int main() {  
   int p = &Y1::staticConst;   // C3890  
   int p2 = Y1::staticConst;   // OK  
}  
```

