---
title: "Compiler Error C2090 | Microsoft Docs"
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
  - "C2090"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2090"
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2090
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2090](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2090).  
  
  
function returns array  
  
 A function cannot return an array. Return a pointer to an array instead.  
  
 The following sample generates C2090:  
  
```  
// C2090.cpp  
int func1(void)[] {}   // C2090  
```  
  
 Possible resolution:  
  
```  
// C2090b.cpp  
// compile with: /c  
int* func2(int * i) {  
   return i;  
}  
```

