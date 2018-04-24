---
title: "Compiler Error C3217 | Microsoft Docs"
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
  - "C3217"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3217"
ms.assetid: 99070417-c23a-4d82-bdd2-04be1a07adea
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3217
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3217](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3217).  
  
  
param' : generic parameter cannot be constrained in this declaration  
  
 A constraint was ill formed; the constraint generic parameter must agree with the generic class template parameter.  
  
 The following sample generates C3217:  
  
```  
// C3217.cpp  
// compile with: /clr  
interface struct A {};  
  
generic <class T>  
ref class C {  
   generic <class T1>  
   where T : A   // C3217  
   void f();  
};  
```  
  
 The following sample demonstrates a possible resolution:  
  
```  
// C3217b.cpp  
// compile with: /clr /c  
interface struct A {};  
  
generic <class T>  
ref class C {  
   generic <class T1>  
   where T1 : A  
   void f();  
};  
```

