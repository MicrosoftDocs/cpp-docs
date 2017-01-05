---
title: "-Gs (Control Stack Checking Calls) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/GS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "disabling stack probes"
  - "GS compiler option [C++]"
  - "/GS compiler option [C++]"
  - "stack, stack probes"
  - "stack probes"
  - "-GS compiler option [C++]"
  - "stack checking calls"
ms.assetid: 40daed7c-f942-4085-b872-01e12b37729e
caps.latest.revision: 17
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
# /Gs (Control Stack Checking Calls)
Controls stack probes.  
  
## Syntax  
  
```  
/Gs[size]  
```  
  
## Arguments  
 `size`  
 (Optional) The number of bytes that local variables can occupy before a stack probe is initiated. If the **/Gs** option is specified without a `size` argument, it is the same as specifying **/Gs0**,  
  
## Remarks  
 A stack probe is a sequence of code that the compiler inserts into every function call. When initiated, a stack probe reaches benignly into memory by the amount of space that is required to store the function's local variables.  
  
 If a function requires more than `size` bytes of stack space for local variables, its stack probe is initiated. By default, the compiler generates code that initiates a stack probe when a function requires more than one page of stack space. This is equivalent to a compiler option of **/Gs4096** for x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], and ARM platforms. This value allows an application and the Windows memory manager to increase the amount of memory committed to the program stack dynamically at run time.  
  
> [!NOTE]
>  The default value of **/Gs4096** allows the program stack of applications for Windows to grow correctly at run time. We recommend that you do not change the default value unless you know exactly why you have to change it.  
  
 Some programs—for example, virtual device drivers—do not require this default stack-growth mechanism. In such cases, the stack probes are not necessary and you can stop the compiler from generating them by setting `size` to a value that is larger than any function will require for local variable storage. No space is allowed between **/Gs** and `size`.  
  
 **/Gs0** activates stack probes for every function call that requires storage for local variables. This can have a negative impact on performance.  
  
 You can turn stack probes on or off by using [check_stack](../../preprocessor/check-stack.md). **/Gs** and the `check_stack` pragma have no effect on standard C library routines; they affect only the functions you compile.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)