---
title: "/Zc:throwingNew (Assume operator new throws) | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["throwingNew", "/Zc:throwingNew"]
dev_langs: ["C++"]
helpviewer_keywords: ["-Zc compiler options (C++)", "throwingNew", "Assume operator new Throws", "/Zc compiler options (C++)", "Zc compiler options (C++)"]
ms.assetid: 20ff0101-9677-4d83-8c7b-8ec9ca49f04f
caps.latest.revision: 1
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /Zc:throwingNew (Assume operator new throws)  
When the `/Zc:throwingNew` option is specified, the compiler optimizes calls to `operator new` to skip checks for a null pointer return. This option tells the compiler to assume that all linked implementations of `operator new` and custom allocators conform to the C++ standard and throw on allocation failure. By default in Visual Studio, the compiler pessimistically generates null checks (`/Zc:throwingNew-`) for these calls, because users can link with a non-throwing implementation of `operator new` or write custom allocator routines that return null pointers.  
  
## Syntax  
  
`/Zc:throwingNew`[`-`]  
  
## Remarks  
  
Since ISO C++98, the standard has specified that the default [operator new](../../standard-library/new-operators.md#op_new) throws `std::bad_alloc` when memory allocation fails. Versions of Visual C++ up to Visual Studio 6.0 returned a null pointer on an allocation failure. Beginning in Visual Studio 2002, `operator new` conforms to the standard and throws on failure. To support code that uses the older allocation style, Visual Studio provides a linkable implementation of `operator new` in *nothrownew.obj* that returns a null pointer on failure. By default, the compiler also generates defensive null checks to prevent these older-style allocators from causing an immediate crash on failure. The `/Zc:throwingNew` option tells the compiler to leave out these null checks, on the assumption that all linked memory allocators conform to the standard. This does not apply to explicit non-throwing `operator new` overloads, which are declared by using an additional parameter of type `std::nothrow_t` and have an explicit `noexcept` specification.  
  
Conceptually, to create an object on the free store, the compiler generates code to allocate its memory and then to invoke its constructor to initialize the memory. Because the Visual C++ compiler normally cannot tell if this code will be linked to a non-conforming, non-throwing allocator, by default it also generates a null check before calling the constructor. This prevents a null pointer dereference in the constructor call if a non-throwing allocation fails. In most cases, these checks are unnecessary, because the default `operator new` allocators throw instead of returning null pointers. The checks also have unfortunate side effects. They bloat the code size, they flood the branch predictor, and they inhibit other useful compiler optimizations such as devirtualization or const propagation out of the initialized object. The checks exist only to support code that links to *nothrownew.obj* or has custom non-conforming `operator new` implementations. If you do not use non-conforming `operator new`, we recommend you use `/Zc:throwingNew` to optimize your code.  
  
If you compile by using link-time code generation (LTCG), you do not need to specify `/Zc:throwingNew`. When your code is compiled by using LTCG, the compiler can detect if the default, conforming `operator new` implementation is used. If so, the compiler leaves out the null checks automatically. The linker looks for the `/ThrowingNew` flag to tell if the implementation of `operator new` is conforming. You can specify this flag to the linker by including this directive in the source for your custom operator new implementation:  
  
```cpp  
#pragma comment(linker, "/ThrowingNew")  
```  
  
For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
## To set this compiler option in the Visual Studio development environment  
1.	Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
2.	From the **Configurations** drop down menu, choose **All Configurations**.  
3.	Select the **Configuration Properties**, **C/C++**, **Command Line** property page.  
4.	Modify the **Additional Options** property to include `/Zc:throwingNew` or `/Zc:throwingNew-` and then choose **OK**.  
  
## See Also  
[Compiler Options](../../build/reference/compiler-options.md)  
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)  
[/Zc (Conformance)](../../build/reference/zc-conformance.md)  
[noexcept (C++)](../../cpp/noexcept-cpp.md)  
[Exception Specifications (throw) (C++)](../../cpp/exception-specifications-throw-cpp.md)  
[terminate (exception)](../../standard-library/exception-functions.md#terminate)  
