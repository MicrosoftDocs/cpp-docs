---
title: "Compiler Error C2638 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2638"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2638"]
ms.assetid: 9d4275e8-406d-455e-afee-3a37799230e0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2638
'identifier' : __based modifier illegal on pointer to member  
  
 The `__based` modifier cannot be used for pointers to members.  
  
 The following sample generates C2638:  
  
```  
// C2638.cpp  
void *a;  
  
class C {  
public:  
   int i;  
   int j;  
   int func();  
};  
int __based (a) C::* cpi = &C::i;  // C2638  
int (__based (a) C::* cpf)() = &C::func; // c2638  
```