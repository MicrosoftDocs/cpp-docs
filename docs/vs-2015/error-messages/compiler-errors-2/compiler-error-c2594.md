---
title: "Compiler Error C2594 | Microsoft Docs"
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
  - "C2594"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2594"
ms.assetid: 68cd708f-266e-44b0-a211-3e3ab63b11bf
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2594
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2594](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2594).  
  
  
operator' : ambiguous conversions from 'type1' to 'type2'  
  
 No conversion from *type1* to *type2* was more direct than any other. We suggest two possible solutions to converting from *type1* to *type2*. The first option is to define a direct conversion from *type1* to *type2*, and the second option is to specify a sequence of conversions from *type1* to *type2*.  
  
 The following sample generates C2594. The suggested resolution to the error is a sequence of conversions:  
  
```  
// C2594.cpp  
// compile with: /c  
struct A{};  
struct I1 : A {};  
struct I2 : A {};  
struct D : I1, I2 {};  
  
A *f (D *p) {  
   return (A*) (p);    // C2594  
  
// try the following line instead  
// return static_cast<A *>(static_cast<I1 *>(p));  
}  
```

