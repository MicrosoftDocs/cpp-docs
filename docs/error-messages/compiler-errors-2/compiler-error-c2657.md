---
title: "Compiler Error C2657 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2657"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2657"]
ms.assetid: f7cf29a9-684a-4605-9469-ecfee9ba4b03
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2657
'class::*' found at the start of a statement (did you forget to specify a type?)  
  
 The line began with a pointer-to-member identifier.  
  
 This error can be caused by a missing type specifier in the declaration of a pointer to a member.  
  
 The following sample generates C2657:  
  
```  
// C2657.cpp  
class C {};  
int main() {  
   C::* pmc1;        // C2657  
   int C::* pmc2;   // OK  
}  
```