---
title: "Compiler Error C3244 | Microsoft Docs"
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
  - "C3244"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3244"
ms.assetid: dae6c49b-5212-4206-8f61-d4010c0b9969
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3244
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3244](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3244).  
  
  
method' : this method was introduced by 'interface' not by 'interface'  
  
 You tried to [explicitly override](../../cpp/explicit-overrides-cpp.md) a member that does not exist in the specified interface but does exist in another base class.  
  
 The following sample generates C3244:  
  
```  
// C3244.cpp  
#pragma warning(disable:4199)  
  
__interface IX15A {  
   void f();  
};  
  
__interface IX15B {  
   void g();  
};  
  
class CX15 : public IX15A, public IX15B {  
public:        
   void IX15A::f();  
   void IX15B::g();  
};  
  
void CX15::IX15A::g()   // C3244 occurs here  
{  
}  
```

