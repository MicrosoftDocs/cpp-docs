---
title: "Compiler Error C2370 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2370"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2370"]
ms.assetid: 03403e8f-f393-47c4-bd25-5c1c7ea7d5cd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2370
'identifier' : redefinition; different storage class  
  
 The identifier is already declared with a different storage class.  
  
## Example  
 The following sample generates C2370:  
  
```  
// C2370.cpp  
// compile with: /Za /c  
extern int i;  
static int i;   // C2370  
int i;   // OK  
```  
  
## Example  
 The following sample generates C2370:  
  
```  
// C2370b.cpp  
#define Thread __declspec( thread )  
extern int tls_i;  
int Thread tls_i;   // C2370 declaration and the definition differ  
int tls_i;   // OK  
```