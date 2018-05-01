---
title: "Compiler Error C3697 | Microsoft Docs"
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
  - "C3697"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3697"
ms.assetid: 2d3f63c4-b7f8-421d-a7a5-2bf17fd054f9
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3697
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3697](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3697).  
  
  
qualifier' : cannot use this qualifier on '^'  
  
 The tracking handle (^) was applied to a qualifier for which it was not designed.  
  
 The following sample generates C3697:  
  
```  
// C3697.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   String ^__restrict s;   // C3697  
   String ^ s2;   // OK  
}  
```

