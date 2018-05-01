---
title: "Compiler Error C2671 | Microsoft Docs"
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
  - "C2671"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2671"
ms.assetid: fc0ee40f-c8f3-408f-b89d-745d149c4169
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2671
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2671](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2671).  
  
  
function' : static member functions do not have 'this' pointers  
  
 A `static` member function tried to access `this`.  
  
 The following sample generates C2671:  
  
```  
// C2671.cpp  
struct S {  
   static S* const func() { return this; }  // C2671  
};  
```

