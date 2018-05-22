---
title: "Compiler Error C2902 | Microsoft Docs"
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
  - "C2902"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2902"
ms.assetid: 89d78d0e-78e5-4c2c-a0f9-a60110e9395e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2902
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2902](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2902).  
  
  
token' : unexpected token following 'template', identifier expected  
  
 The token following the keyword `template` was not an identifier.  
  
 The following sample generates C2902:  
  
```  
// C2902.cpp  
// compile with: /c  
namespace N {  
   template<class T> class X {};  
   class Y {};  
}  
void g() {  
   N::template + 1;   // C2902  
}  
  
void f() {  
   N::template X<int> x1;   // OK  
}  
```  
  
 C2902 can also occur when using generics:  
  
```  
// C2902b.cpp  
// compile with: /clr /c  
namespace N {  
   generic<class T> ref class GC {};  
}  
  
void f() {  
   N::generic + 1;   // C2902  
   N::generic GC<int>^ x;  
}  
```

