---
title: "Compiler Error C3896 | Microsoft Docs"
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
  - "C3896"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3896"
ms.assetid: eb8be0f6-5b4e-4d71-8285-8a2a94f8ba29
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3896
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3896](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3896).  
  
  
member' : improper initializer: this literal data member can only be initialized with 'nullptr'  
  
 A [literal](../../windows/literal-cpp-component-extensions.md) data member was initialized incorrectly.  See [nullptr](../../windows/nullptr-cpp-component-extensions.md) for more information.  
  
 The following sample generates C3896:  
  
```  
// C3896.cpp  
// compile with: /clr /c  
ref class R{};  
  
value class V {  
   literal R ^ r = "test";   // C3896  
   literal R ^ r2 = nullptr;   // OK  
};  
```

