---
title: "Compiler Error C3375 | Microsoft Docs"
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
  - "C3375"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3375"
ms.assetid: f1df78c6-e6ca-48f3-8b29-4e1710002bf3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3375
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3375](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3375).  
  
  
function' : ambiguous delegate function  
  
 A delegate instantiation could have been to a static member function, or as an unbound delegate to an instance function, so the compiler issued this error.  
  
 For more information, see [delegate  (C++ Component Extensions)](../../windows/delegate-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3375.  
  
```  
// C3375.cpp  
// compile with: /clr  
ref struct R {  
   static void f(R^) {}  
   void f() {}  
};  
  
delegate void Del(R^);  
  
int main() {  
   Del ^ a = gcnew Del(&R::f);   // C3375  
}  
```

