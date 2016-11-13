---
title: "Compiler Error C3068 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3068"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3068"
ms.assetid: 613e3447-b4a8-4268-a661-297bed63ccdf
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C3068
'function' : a 'naked' function cannot contain objects that would require unwinding if a C++ exception occurred  
  
 The compiler was unable to perform stack unwinding on a [naked](../../cpp/naked-cpp.md) function that threw an exception because a temporary object was created in the function and C++ exception handling ([/EHsc](../../build/reference/eh-exception-handling-model.md)) was specified.  
  
 To resolve this error, do at least one of the following:  
  
-   Do not compile with /EHsc.  
  
-   Do not mark the function as `naked`.  
  
-   Do not create a temporary object in the function.  
  
 If a function creates a temporary object on the stack, if the function throws an exception, and if C++ exception handling is enabled, the compiler will clean up the stack if an exception is thrown.  
  
 When an exception is thrown, compiler generated code, called the prolog and epilog and which are not present in a naked function, is executed for a function.  
  
## Example  
 The following sample generates C3068:  
  
```  
// C3068.cpp  
// compile with: /EHsc  
// processor: x86  
class A {  
public:  
   A(){}  
   ~A(){}  
};  
  
void b(A){}  
  
__declspec(naked) void c() {  
   b(A());   // C3068   
};  
```