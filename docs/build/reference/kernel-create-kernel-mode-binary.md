---
title: "-kernel (Create Kernel Mode Binary) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/kernel"
  - "/kernel-"
dev_langs: 
  - "C++"
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
caps.latest.revision: 11
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
# /kernel (Create Kernel Mode Binary)
Creates a binary that can be executed in the Windows kernel.  
  
## Syntax  
  
```  
/kernel[-]  
```  
  
## Arguments  
 **/kernel**  
 The code in the current project is compiled and linked by using a set of C++ language rules that are specific to code that will run in kernel mode.  
  
 **/kernel-**  
 The code in the current project is compiled and linked without using the C++ language rules that are specific to code that will run in kernel mode.  
  
## Remarks  
 There is no `#pragma` equivalent to control this option.  
  
 Specifying the **/kernel** option tells the compiler and linker to arbitrate which language features are permissible in kernel mode and to make sure that that you have sufficient expressive power to avoid runtime instability that is unique to kernel mode C++. This is accomplished by prohibiting the use of C++ language features that are disruptive in kernel mode and by providing warnings for C++ language features that are potentially disruptive but cannot be disabled.  
  
 The **/kernel** option applies to both the compiler and linker phases of a build and is set at the project level. Pass the **/kernel** switch to indicate to the compiler that the resulting binary, after linking, should be loaded into the Windows kernel. The compiler will narrow the spectrum of C++ language features to a subset that is compatible with the kernel.  
  
 The following table lists changes in compiler behavior when **/kernel** is specified.  
  
|Behavior Type|**/kernel** Behavior|  
|-------------------|---------------------------|  
|C++ Exception Handling|Disabled. All instances of the `throw` and `try` keywords emit a compiler error (except for the exception specification `throw()`). No **/EH** options are compatible with **/kernel**, except for **/EH-**.|  
|RTTI|Disabled. All instances of the `dynamic_cast` and `typeid` keywords emit a compiler error, unless `dynamic_cast` is used statically.|  
|`new` and `delete`|You must explicitly define the `new()` or `delete()` operator; neither the compiler nor the runtime will supply a default definition.|  
  
 Custom calling conventions, the [/GS](../../build/reference/gs-buffer-security-check.md) build option, and all optimizations are permitted when you use the **/kernel** option. Inlining is largely not affected by **/kernel**, with the same semantics honored by the compiler. If you want to make sure that the `__forceinline` inlining qualifier is honored, you must make sure that warning [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) is enabled so that you know when a particular `__forceinline` function is not inlined.  
  
 When the compiler is passed the **/kernel** switch, it predefines a preprocessor macro that's named `_KERNEL_MODE` and has the value **1**. You can use this to conditionally compile code based on whether the execution environment is in user mode or kernel mode. For example, the following code specifies that the class should be in a non-pageable memory segment when it is compiled for kernel mode execution.  
  
```cpp  
  
      #ifdef _KERNEL_MODE  
#define NONPAGESECTION __declspec(code_seg("$kerneltext$"))  
#else  
#define NONPAGESECTION  
#endif  
  
class NONPAGESECTION MyNonPagedClass  
{  
  
};  
```  
  
 Some the following combinations of target architecture and the **/arch** option produce an error when they are used with **/kernel**:  
  
-   **/arch:{SSE&#124;SSE2&#124;AVX}** are not supported on x86. Only **/arch:IA32** is supported with **/kernel** on x86.  
  
-   **/arch:AVX** is not supported with **/kernel** on x64.  
  
 Building with **/kernel** also passes **/kernel** to the linker. Her's how this affects linker behavior:  
  
-   Incremental linking is disabled. If you add **/incremental** to the command line, the linker emits this fatal error:  
  
     **LINK : fatal error LNK1295: '/INCREMENTAL' not compatible with '/KERNEL' specification; link without '/INCREMENTAL'**  
  
-   The linker inspects each object file (or any included archive member from static libraries) to see whether it could have been compiled by using the **/kernel** option but was not. If any instances meet this criterion, the linker still successfully links but might issue a warning, as shown in the following table.  
  
    ||**/kernel** obj|**/kernel-** obj, MASM obj, or cvtresed|Mix of **/kernel** and **/kernel-** objs|  
    |-|----------------------|-----------------------------------------------|-------------------------------------------------|  
    |**link /kernel**|Yes|Yes|Yes with warning LNK4257|  
    |**link**|Yes|Yes|Yes|  
  
     **LNK4257 linking object not compiled with /KERNEL ; image may not run**  
  
 The **/kernel** option and the **/driver** option operate independently and neither affects the other.  
  
### To set the /kernel compiler option in Visual Studio  
  
1.  Open the **Property Pages** dialog box for the project. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  In the **Additional options** box, add `/kernel` or `/kernel-`.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)