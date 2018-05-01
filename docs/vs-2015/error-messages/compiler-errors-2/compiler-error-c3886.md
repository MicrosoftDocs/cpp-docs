---
title: "Compiler Error C3886 | Microsoft Docs"
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
  - "C3886"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3886"
ms.assetid: 485f6c12-cc1b-4146-9034-409a0a5e615e
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3886
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3886](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3886).  
  
  
var' : a literal data member must be initialized  
  
 A [literal](../../windows/literal-cpp-component-extensions.md) variable must be initialized when it is declaraed.  
  
 The following sample generates C3886:  
  
```  
// C3886.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal int staticConst;   // C3886  
   literal int staticConst2 = 0;   // OK  
};  
```

