---
title: "Compiler Warning (level 2) C4244 | Microsoft Docs"
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
  - "C4244"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4244"
ms.assetid: 2c19d157-21d1-42c2-a6c0-3f30f2ce3813
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 2) C4244
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 2) C4244](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4244).  
  
  
argument' : conversion from 'type1' to 'type2', possible loss of data  
  
 A floating point type was converted to an integer type.  A possible loss of data may have occurred.  
  
 If you get C4244, you should either change your program to use compatible types, or add some logic to your code, to ensure that the range of possible values will always be compatible with the types you are using.  
  
 C4244 can also fire at level 3, and 4; see [Compiler Warning (levels 3 and 4) C4244](../../error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244.md) for more information.  
  
## Example  
 The following sample generates C4244:  
  
```  
// C4244_level2.cpp  
// compile with: /W2  
  
int f(int x){ return 0; }  
int main() {  
   double x = 10.1;  
   int i = 10;  
   return (f(x));   // C4244  
   // try the following line instead  
   // return (f(i));  
}  
```

