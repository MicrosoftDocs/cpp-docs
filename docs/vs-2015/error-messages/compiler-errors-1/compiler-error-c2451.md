---
title: "Compiler Error C2451 | Microsoft Docs"
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
  - "C2451"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2451"
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2451
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2451](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2451).  
  
  
conditional expression of type 'type' is illegal  
  
 The conditional expression evaluates to an integer type.  
  
 The following sample generates C2451:  
  
```  
// C2451.cpp  
class B {};  
  
int main () {  
   B b1;  
   int i = 0;  
   if (b1)   // C2451  
   // try the following line instead  
   // if (i)  
      ;  
}  
```

