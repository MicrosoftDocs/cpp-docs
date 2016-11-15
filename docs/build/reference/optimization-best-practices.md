---
title: "Optimization Best Practices | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Visual C++, optimization"
  - "optimization, best practices"
ms.assetid: f3433148-7255-4ca6-8a4f-7c31aac88508
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Optimization Best Practices
This document describes some best practices for optimization in Visual C++. The following topics are discussed:  
  
-   Compiler and Linker Options  
  
    -   Profile-Guided Optimization  
  
    -   Which Level of Optimization Should I Use?  
  
    -   Floating Point Switches  
  
-   Optimization Declspecs  
  
-   Optimization Pragmas  
  
-   __restrict and \__assume  
  
-   Intrinsic Support  
  
-   Exceptions  
  
## Compiler and Linker Options  
  
### Profile-Guided Optimization  
 Visual C++ supports profile-guided optimization (PGO). This optimization uses profile data from past executions of an instrumented version of an application to drive later optimization of the application. Using PGO can be time consuming, so it may not be something that every developer uses, but we do recommend using PGO for the final release build of a product. For more information, see [Profile-Guided Optimizations](../../build/reference/profile-guided-optimizations.md).  
  
 In addition, Whole Program Optimization (also knows as Link Time Code Generation) and the **/O1** and **/O2** optimizations has been improved. In general, an application compiled with one of these options will be faster than the same application compiled with an earlier compiler.  
  
 For more information, see [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md) and [/O1, /O2 (Minimize Size, Maximize Speed)](../../build/reference/o1-o2-minimize-size-maximize-speed.md).  
  
### Which Level of Optimization Should I Use?  
 If at all possible, final release builds should be compiled with Profile Guided Optimizations. If it is not possible to build with PGO, whether due to insufficient infrastructure for running the instrumented builds or not having access to scenarios, then we suggest building with Whole Program Optimization.  
  
 The **/Gy** switch is also very useful. It generates a separate COMDAT for each function, giving the linker more flexibility when it comes to removing unreferenced COMDATs and COMDAT folding. The only downside to using **/Gy** is that it can have a minor effect on build time. Therefore, it is generally recommended to use it. For more information, see [/Gy (Enable Function-Level Linking)](../../build/reference/gy-enable-function-level-linking.md).  
  
 For linking in 64-bit environments, it is recommended to use the **/OPT:REF,ICF** linker option, and in 32-bit environments, **/OPT:REF** is recommended. For more information, see [/OPT (Optimizations)](../../build/reference/opt-optimizations.md).  
  
 It is also strongly recommended to generate debug symbols, even with optimized release builds. It doesn’t effect the generated code, and it makes it a lot easier to debug your application, if need be.  
  
### Floating Point Switches  
 The **/Op** compiler option has been removed, and the following four compiler options dealing with floating point optimizations have been added:  
  
|||  
|-|-|  
|**/fp:precise**|This is the default recommendation and should be used in most cases.|  
|**/fp:fast**|Recommended if performance is of the utmost importance, for example in games. This will result in the fastest performance.|  
|**/fp:strict**|Recommended if precise floating-point exceptions and IEEE behavior is desired. This will result in the slowest performance.|  
|**/fp:except[-]**|Can be used in conjunction with **/fp:strict** or **/fp:precise**, but not **/fp:fast**.|  
  
 For more information, see [/fp (Specify Floating-Point Behavior)](../../build/reference/fp-specify-floating-point-behavior.md).  
  
## Optimization Declspecs  
 In this section we will look at two declspecs that can be used in programs to help performance: `__declspec(restrict)` and `__declspec(noalias)`.  
  
 The `restrict` declspec can only be applied to function declarations that return a pointer, such as `__declspec(restrict) void *malloc(size_t size);`  
  
 The `restrict` declspec is used on functions that return unaliased pointers. This keyword is used for the C-Runtime Library implementation of `malloc` since it will never return a pointer value that is already in use in the current program (unless you are doing something illegal, such as using memory after it has been freed).  
  
 The `restrict` declspec gives the compiler more information for performing compiler optimizations. One of the hardest things for a compiler to determine is what pointers alias other pointers, and using this information greatly helps the compiler.  
  
 It is worth pointing out that this is a promise to the compiler, not something that the compiler will verify. If your program uses this `restrict` declspec inappropriately, your program may have incorrect behavior.  
  
 For more information, see [restrict](../../cpp/restrict.md).  
  
 The `noalias` declspec is also applied only to functions, and indicates that the function is a semi-pure function. A semi-pure function is one that references or modifies only locals, arguments, and first-level indirections of arguments. This declspec is a promise to the compiler, and if the function references globals or second-level indirections of pointer arguments then the compiler may generate code that breaks the application.  
  
 For more information, see [noalias](../../cpp/noalias.md).  
  
## Optimization Pragmas  
 There are also several useful pragmas for helping optimize code. The first one we’ll discuss is `#pragma optimize`:  
  
```  
#pragma optimize("{opt-list}", on | off)  
```  
  
 This pragma allows you to set a given optimization level on a function-by-function basis. This is ideal for those rare occasions where your application crashes when a given function is compiled with optimization. You can use this to turn off optimizations for a single function:  
  
```  
#pragma optimize("", off)  
int myFunc() {...}  
#pragma optimize("", on)  
```  
  
 For more information, see [optimize](../../preprocessor/optimize.md).  
  
 Inlining is one of the most important optimizations that the compiler performs and here we talk about a couple of the pragmas that help modify this behavior.  
  
 `#pragma inline_recursion` is useful for specifying whether or not you want the application to be able to inline a recursive call. By default it is off. For shallow recursion of small functions you may to turn this on. For more information, see [inline_recursion](../../preprocessor/inline-recursion.md).  
  
 Another useful pragma for limiting the depth of inlining is `#pragma inline_depth`. This is typically useful in situations where you’re trying to limit the size of a program or function. For more information, see [inline_depth](../../preprocessor/inline-depth.md).  
  
## __restrict and \__assume  
 There are a couple of keywords in Visual C++ that can help performance: [__restrict](../../cpp/extension-restrict.md) and [__assume](../../intrinsics/assume.md).  
  
 First, it should be noted that `__restrict` and `__declspec(restrict)` are two different things. While they are somewhat related, their semantics are different. `__restrict` is a type qualifier, like `const` or `volatile`, but exclusively for pointer types.  
  
 A pointer that is modified with `__restrict` is referred to as a *__restrict pointer*. A __restrict pointer is a pointer that can only be accessed through the \__restrict pointer. In other words, another pointer cannot be used to access the data pointed to by the \__restrict pointer.  
  
 `__restrict` can be a powerful tool for the Visual C++ optimizer, but use it with great care. If used improperly, the optimizer might perform an optimization that would break your application.  
  
 The `__restrict` keyword replaces the **/Oa** switch from previous versions.  
  
 With `__assume,` a developer can tell the compiler to make assumptions about the value of some variable.  
  
 For example `__assume(a < 5);` tells the optimizer that at that line of code the variable `a` is less than 5. Again this is a promise to the compiler. If `a` is actually 6 at this point in the program then the behavior of the program after the compiler has optimized may not be what you would expect. `__assume` is most useful prior to switch statements and/or conditional expressions.  
  
 There are some limitations to `__assume`. First, like `__restrict`, it is only a suggestion, so the compiler is free to ignore it. Also, `__assume` currently works only with variable inequalities against constants. It does not propagate symbolic inequalities, for example, assume(a < b).  
  
## Intrinsic Support  
 Intrinsics are function calls where the compiler has intrinsic knowledge about the call, and rather than calling a function in a library, it emits code for that function. The header file intrin.h located at <Installation_Directory>\VC\include\intrin.h contains all of the available intrinsics for each of the three supported platforms (x86, x64, and ARM).  
  
 Intrinsics give the programmer the ability to go deep into the code without having to use assembly. There are several benefits to using intrinsics:  
  
1.  Your code is more portable. Several of the intrinsics are available on multiple CPU architectures.  
  
2.  Your code is easier to read, since the code is still written in C/C++.  
  
3.  Your code gets the benefit of compiler optimizations. As the compiler gets better, the code generation for the intrinsics improves.  
  
 For more information, see [Compiler Intrinsics](../../intrinsics/compiler-intrinsics.md) and [Benefits of Using Intrinsics](http://msdn.microsoft.com/en-us/57af8920-527f-44af-a741-a07cbe80bf02).  
  
## Exceptions  
 There is a performance hit associated with using exceptions. Some restrictions are introduced when using try blocks that inhibit the compiler from performing certain optimizations. On x86 platforms there is additional performance degradation from try blocks due to additional state information that must be generated during code execution. On the 64-bit platforms, try blocks do not degrade performance as much, but once an exception is thrown, the process of finding the handler and unwinding the stack can be expensive.  
  
 Therefore, it is recommended to avoid introducing try/catch blocks into code that does not really need it. If you must use exceptions, use synchronous exceptions if possible. For more information, see [Structured Exception Handling (C/C++)](../../cpp/structured-exception-handling-c-cpp.md).  
  
 Lastly, throw exceptions for exceptional cases only. Using exceptions for general control flow will likely make performance suffer.  
  
## See Also  
 [Optimizing Your Code](../../build/reference/optimizing-your-code.md)