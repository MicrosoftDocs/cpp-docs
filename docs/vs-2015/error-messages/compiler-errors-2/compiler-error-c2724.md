---
title: "Compiler Error C2724 | Microsoft Docs"
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
  - "C2724"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2724"
ms.assetid: 4e4664bc-8c96-4156-b79f-03436f532ea8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2724
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2724](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2724).  
  
  
identifier' : 'static' should not be used on member functions defined at file scope  
  
 Static member functions should be declared with external linkage.  
  
 The following sample generates C2724:  
  
```  
// C2724.cpp  
class C {  
   static void func();  
};  
  
static void C::func(){};   // C2724  
// try the following line instead  
// void C::func(){};  
```

