---
title: "Compiler Warning (level 4) C4389 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["c4389"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4389"]
ms.assetid: fc0e3a8e-f766-437c-b7f1-e61abb2a8765
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4389
'operator' : signed/unsigned mismatch  
  
 An operation involved signed and unsigned variables. This could result in a loss of data.  
  
 The following sample generates C4389:  
  
```  
// C4389.cpp  
// compile with: /W4  
#pragma warning(default: 4389)  
  
int main()  
{  
   int a = 9;  
   unsigned int b = 10;  
   if (a == b)   // C4389  
      return 0;  
   else  
      return 0;  
};  
```