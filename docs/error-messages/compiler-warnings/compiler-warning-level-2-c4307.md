---
title: "Compiler Warning (level 2) C4307 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4307"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4307"]
ms.assetid: 7cca11e9-be61-49e4-8b15-88b84f0cbf07
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4307
'operator' : integral constant overflow  
  
 The operator is used in an expression that results in an integer constant overflowing the space allocated for it. You may need to use a larger type for the constant. A **signed int** holds a smaller value than an `unsigned int` because the **signed int** uses one bit to represent the sign.  
  
 The following sample generates C4307:  
  
```  
// C4307.cpp  
// compile with: /W2  
int i = 2000000000 + 2000000000;   // C4307  
int j = (unsigned)2000000000 + 2000000000;   // OK  
  
int main()  
{  
}  
```