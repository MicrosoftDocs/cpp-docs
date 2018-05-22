---
title: "Compiler Error C3634 | Microsoft Docs"
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
  - "C3634"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3634"
ms.assetid: fd09f10c-f863-483b-9756-71c16b760b02
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3634
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3634](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3634).  
  
  
function' : cannot define an abstract method of a managed or WinRTclass  
  
 An abstract method can be declared in a managed or WinRT class, but it cannot be defined.  
  
 The following sample generates C3634:  
  
```  
// C3634.cpp  
// compile with: /clr  
ref class C {  
   virtual void f() = 0;  
};  
  
void C::f() {   // C3634 - don't define managed class' pure virtual method  
}  
```  
  
 **Managed Extensions for C++**  
  
 The following sample generates C3634:  
  
```  
// C3634b.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
  
__gc class C {  
   virtual void f() = 0;  
};  
  
void C::f() {   // C3634 - don't define managed class' pure virtual method  
}  
```

