---
title: "Compiler Error C2638 | Microsoft Docs"
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
  - "C2638"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2638"
ms.assetid: 9d4275e8-406d-455e-afee-3a37799230e0
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2638
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2638](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2638).  
  
  
identifier' : __based modifier illegal on pointer to member  
  
 The `__based`modifier cannot be used for pointers to members.  
  
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

