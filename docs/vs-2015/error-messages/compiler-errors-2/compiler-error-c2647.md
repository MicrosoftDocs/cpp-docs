---
title: "Compiler Error C2647 | Microsoft Docs"
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
  - "C2647"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2647"
ms.assetid: 1034589e-bc3e-41a6-831f-2a1a4b8a2500
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2647
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2647](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2647).  
  
  
operator': cannot dereference a 'type1' on a 'type2'  
  
 The left operand of a pointer-to-member operator ( `->*` or `.*` ) cannot be implicitly converted to a type related to the right operator.  
  
 The following sample generates C2647:  
  
```  
// C2647.cpp  
class C {};  
class D {};  
  
int main() {  
   D d, *pd;  
   C c, *pc = 0;  
   int C::*pmc = 0;  
   pd->*pmc = 0;   // C2647  
   d.*pmc = 0;   // C2647  
  
   // OK  
   pc->*pmc = 0;  
   c.*pmc = 0;  
}  
```

