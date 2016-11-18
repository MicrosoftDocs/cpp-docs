---
title: "-guard (Enable Control Flow Guard) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/guard"
  - "VC.Project.VCCLCompilerTool.ControlFlowGuard"
dev_langs: 
  - "C++"
ms.assetid: be495323-f59f-4cf3-a6b6-8ee69e6a19dd
caps.latest.revision: 6
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
# /guard (Enable Control Flow Guard)
Enable compiler generation of Control Flow Guard security checks.  
  
## Syntax  
  
```  
/guard:cf[-]  
```  
  
## Remarks  
 The **/guard:cf** option causes the compiler to analyze control flow for indirect call targets at compile time, and then to insert code to verify the targets at runtime. By default, **/guard:cf** is off and must be explicitly enabled. To explicitly disable this option, use **/guard:cf-**.  
  
 When the **/guard:cf** Control Flow Guard (CFG) option is specified, the compiler and linker insert extra runtime security checks to detect attempts to compromise your code. During compiling and linking, all indirect calls in your code are analyzed to find every location that the code can reach when it runs correctly. This information is stored in extra structures in the headers of your binaries. The compiler also injects a check before every indirect call in your code that ensures the target is one of the verified locations. If the check fails at runtime on a CFG-aware operating system, the operating system closes the program.  
  
 A common attack on software takes advantage of bugs in handling extreme or unexpected inputs. Carefully crafted input to the application may overwrite a location that contains a pointer to executable code. This can be used to redirect control flow to code controlled by the attacker. The CFG runtime checks do not fix the data corruption bugs in your executable. They instead make it more difficult for an attacker to use them to execute arbitrary code. CFG is a mitigation tool that prevents calls to locations other than function entry points in your code. It's similar to how Data Execution Prevention (DEP),  [/GS](../../build/reference/gs-buffer-security-check.md) stack checks, and [/DYNAMICBASE](../../build/reference/dynamicbase-use-address-space-layout-randomization.md) and [/HIGHENTROPYVA](../../build/reference/highentropyva-support-64-bit-aslr.md) address space layout randomization (ASLR) lower the chances that your code becomes an exploit vector.  
  
 The **/guard:cf** option must be passed to both the compiler and linker to build code that uses the CFG exploit mitigation technique. If your binary is built by using a single `cl` command, the compiler passes the option to the linker. If you compile and link separately, the option must be set on both the compiler and linker commands. The /DYNAMICBASE linker option is also required. To verify that your binary has CFG data, use the `dumpbin /headers /loadconfig` command. CFG-enabled binaries have `Guard` in the list of EXE or DLL characteristics, and Guard Flags include `CF Instrumented` and `FID table present`.  
  
 The **/guard:cf** option is incompatible with [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) (Edit and Continue debug information) or [/clr](../../build/reference/clr-common-language-runtime-compilation.md) (Common Language Runtime Compilation).  
  
 Code compiled by using **/guard:cf** can be linked to libraries and object files that are not compiled by using the option. Only this code, when also linked by using the **/guard:cf** option and run on a CFG-aware operating system, has CFG protection. Because code compiled without the option will not stop an attack, we recommend that you use the option on all the code you compile. There is a small runtime cost for CFG checks, but the compiler analysis attempts to optimize away the checks on indirect jumps that can be proven to be safe.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select **Configuration Properties**, **C/C++**, **Code Generation**.  
  
3.  Select the **Control Flow Guard** property.  
  
4.  In the dropdown control, choose **Yes** to enable Control Flow Guard, or **No** to disable it.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)