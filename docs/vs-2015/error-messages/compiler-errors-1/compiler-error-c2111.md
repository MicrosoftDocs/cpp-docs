---
title: "Compiler Error C2111 | Microsoft Docs"
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
  - "C2111"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2111"
ms.assetid: 38fd42ec-1480-4a44-aaca-ae4593ed5f50
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2111
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2111](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2111).  
  
  
pointer addition requires integral operand  
  
 An attempt was made to add a nonintegral value to a pointer using the plus ( `+` ) operator.  
  
 The following sample generates C2111:  
  
```  
// C2111.cpp  
int main() {  
   int *a = 0, *pa = 0, b = 0;  
   double d = 0.00;  
  
   a = pa + d;   // C2111  
   a = pa + b;   // OK  
}  
```

