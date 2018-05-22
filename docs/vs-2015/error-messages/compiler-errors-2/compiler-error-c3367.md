---
title: "Compiler Error C3367 | Microsoft Docs"
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
  - "C3367"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3367"
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3367
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3367](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3367).  
  
  
static_member_function' : cannot use static function to create an unbound delegate  
  
 When you call an unbound delegate, you must pass an instance of an object. Since a static member function is called through the class name, you can only instantiate an unbound delegate with an instance member function.  
  
 For more information, see [Unbound Delegates](../../misc/unbound-delegates.md).  
  
## Example  
 The following sample generates C3367.  
  
```  
// C3367.cpp  
// compile with: /clr  
ref struct R {  
   void b() {}  
   static void f() {}  
};  
  
delegate void Del(R^);  
  
int main() {  
   Del ^ a = gcnew Del(&R::b);   // OK  
   Del ^ b = gcnew Del(&R::f);   // C3367  
}  
```

