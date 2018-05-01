---
title: "Compiler Error C2850 | Microsoft Docs"
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
  - "C2850"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2850"
ms.assetid: f3efe86c-4168-4e76-a133-3f8314c69f51
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2850
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2850](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2850).  
  
  
construct' : only allowed at file scope; may not be in a nested construct  
  
 Constructs, such as some pragmas, can only appear at global scope.  
  
 The following sample generates C2850:  
  
```  
// C2850.cpp  
// compile with: /c /Yc  
// try the following line instead  
// #pragma hdrstop  
namespace X {  
   #pragma hdrstop   // C2850  
};  
```

