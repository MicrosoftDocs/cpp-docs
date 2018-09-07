---
title: "Compiler Warning (level 1) C4550 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4550"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4550"]
ms.assetid: f902b4ed-5f17-48ea-b693-92f4fb8c8054
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4550
expression evaluates to a function which is missing an argument list  
  
 A dereferenced pointer to a function is missing an argument list.  
  
## Example  
  
```  
// C4550.cpp  
// compile with: /W1  
bool f()  
{  
   return true;  
}  
  
typedef bool (*pf_t)();  
  
int main()  
{  
   pf_t pf = f;  
   if (*pf) {}  // C4550  
   return 0;  
}  
```