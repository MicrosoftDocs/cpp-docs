---
title: "Compiler Error C2712 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2712"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2712"]
ms.assetid: f7d4ffcc-7ed2-459b-8067-a728ce647071
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2712
cannot use __try in functions that require object unwinding  
  
 Error C2712 can occur if you use [/EHsc](../../build/reference/eh-exception-handling-model.md), and a function with structured exception handling also has objects that require unwinding (destruction).  
  
 Possible solutions:  
  
-   Move code that requires SEH to another function  
  
-   Rewrite functions that use SEH to avoid the use of local variables and parameters that have destructors. Do not use SEH in constructors or destructors  
  
-   Compile without /EHsc  
  
 Error C2712 can also occur if you call a method declared by using the [__event](../../cpp/event.md) keyword. Because the event might be used in a multithreaded environment, the compiler generates code that prevents manipulation of the underlying event object, and then encloses the generated code in an SEH [try-finally statement](../../cpp/try-finally-statement.md). Consequently, error C2712 will occur if you call the event method and pass by value an argument whose type has a destructor. One solution in this case is to pass the argument as a constant reference.  
  
## Example  
 C2712 can also occur if you compile with **/clr:pure** and declare a static array of pointers-to-functions in a `__try` block. A static member requires the compiler to use dynamic initialization under **/clr:pure**, which implies C++ exception handling. However, C++ exception handling is not allowed in a `__try` block.  
  
 The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 The following sample generates C2712 and shows how to fix it.  
  
```  
// C2712.cpp  
// compile with: /clr:pure /c  
struct S1 {  
   static int smf();  
   void fnc();  
};  
  
void S1::fnc() {  
   __try {  
      static int (*array_1[])() = {smf,};   // C2712  
  
      // OK  
      static int (*array_2[2])();  
      array_2[0] = smf;  
    }  
    __except(0) {}  
}  
```