---
title: "Compiler Error C3865 | Microsoft Docs"
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
  - "C3865"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3865"
ms.assetid: 9bc62bb0-4fb8-4856-a5cf-c7cb4029a596
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3865
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3865](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3865).  
  
  
calling_convention' : can only be used on native member functions  
  
 A calling convention was used on a function that was either a global function or on a managed member function. The calling convention can only be used on a native (not managed) member function.  
  
 For more information, see [Calling Conventions](../../cpp/calling-conventions.md).  
  
 The following sample generates C3865:  
  
```  
// C3865.cpp  
// compile with: /clr  
// processor: x86  
void __thiscall Func(){}   // C3865  
  
// OK  
struct MyType {  
   void __thiscall Func(){}  
};  
```

