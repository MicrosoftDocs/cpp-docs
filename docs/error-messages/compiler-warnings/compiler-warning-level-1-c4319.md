---
title: "Compiler Warning (level 1) C4319 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4319"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4319"]
ms.assetid: 1fac8048-9bd6-4552-a21c-192c67772bb9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4319
'operator' : zero extending 'type' to 'type' of greater size  
  
 The result of the ~ (bitwise complement) operator is unsigned and then zero-extended when it is converted to a larger type.  
  
 In the following example, ~(a - 1) is evaluated as a 32-bit unsigned long expression and then converted to 64 bits by zero extension. This could lead to unexpected operation results.  
  
```  
// C4319.cpp  
// compile with: cl /W4 C4319.cpp  
int main() {  
   unsigned long a = 0;  
   unsigned long long q = 42;  
   q = q & ~(a - 1);    // C4319 expected  
}  
```