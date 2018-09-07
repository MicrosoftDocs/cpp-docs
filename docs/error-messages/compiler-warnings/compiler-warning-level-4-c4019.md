---
title: "Compiler Warning (level 4) C4019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4019"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4019"]
ms.assetid: 4ecfe85d-673f-4334-8154-36fe7f0b3444
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4019
empty statement at global scope  
  
 A semicolon at global scope is not preceded by a statement.  
  
 This warning may be fixed if you remove the extra semicolon.  
  
## Example  
  
```  
// C4019.c  
// compile with: /Za /W4  
#define declint( varname ) int varname;  
declint( a );   // C4019, int a;;  
declint( b )   // OK, int b;  
  
int main()  
{  
}  
```