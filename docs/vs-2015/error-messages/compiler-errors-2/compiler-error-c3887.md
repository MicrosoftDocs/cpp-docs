---
title: "Compiler Error C3887 | Microsoft Docs"
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
  - "C3887"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3887"
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3887
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3887](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3887).  
  
  
var' : the initializer for a literal data member must be a constant expression  
  
 A [literal](../../windows/literal-cpp-component-extensions.md) data member can only be initialized with a constant expresion.  
  
 The following sample generates C3887:  
  
```  
// C3887.cpp  
// compile with: /clr  
ref struct Y1 {  
   static int i = 9;  
   literal  
   int staticConst = i;   // C3887  
};  
```  
  
 Possible resolution:  
  
```  
// C3887b.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal  
   int staticConst = 9;  
};  
```

