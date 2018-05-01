---
title: "Compiler Error C2177 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2177"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2177"
ms.assetid: 2a39a880-cddb-4d3e-a572-645a14c4c478
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2177
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2177](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2177).  
  
  
constant too big  
  
 A constant value is too large for the variable type it is assigned.  
  
 The following sample generates C2177:  
  
```  
// C2177.cpp  
int main() {  
   int a=18446744073709551616;   // C2177  
   int b=18446744073709551615;   // OK  
}  
```

