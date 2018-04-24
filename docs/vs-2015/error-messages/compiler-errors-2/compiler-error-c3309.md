---
title: "Compiler Error C3309 | Microsoft Docs"
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
  - "C3309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3309"
ms.assetid: 75ee16e3-7d4e-4c41-b3cb-64e9849c3aab
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3309
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3309](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3309).  
  
  
macro_name': module name cannot be a macro or a keyword  
  
 The value that you pass to the name property of the module attribute cannot be a symbol for the preprocessor to expand; it must be a string literal.  
  
 The following sample generates C3309:  
  
```  
// C3309.cpp  
#define NAME MyModule  
[module(name="NAME")];   // C3309  
// Try the following line instead  
// [module(name="MyModule")];  
[coclass]  
class MyClass {  
public:  
   void MyFunc();  
};  
  
int main() {  
}  
```

