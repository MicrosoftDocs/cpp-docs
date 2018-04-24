---
title: "Compiler Error C3085 | Microsoft Docs"
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
  - "C3085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3085"
ms.assetid: 1ac40bf2-f63e-439e-8921-47e6dadc8354
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3085
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3085](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3085).  
  
  
constructor': a constructor cannot be 'keyword'  
  
 A constructor was declared incorrectly. See [Override Specifiers](../../windows/override-specifiers-cpp-component-extensions.md) for more information.  
  
## Example  
 The following sample generates C3085.  
  
```  
// C3085.cpp  
// compile with: /c /clr  
ref struct S {  
   S() abstract;   // C3085  
   S(S%) abstract;   // C3085  
};  
  
ref struct T {  
   T() sealed {}   // C3085  
   T(T%) sealed {}   // C3085  
};  
```

