---
title: "Compiler Error C2034 | Microsoft Docs"
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
  - "C2034"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2034"
ms.assetid: 953d70fa-bde9-4ce6-a55d-741e7bc63ff4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2034
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2034](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2034).  
  
  
identifier' : type of bit field too small for number of bits  
  
 The number of bits in the bit-field declaration exceeds the size of the base type.  
  
 The following sample generates C2034:  
  
```  
// C2034.cpp  
struct A {  
   char test : 9;   // C2034, char has 8 bits  
};  
```  
  
 Possible resolution:  
  
```  
// C2034b.cpp  
// compile with: /c  
struct A {  
   char test : 8;  
};  
```

