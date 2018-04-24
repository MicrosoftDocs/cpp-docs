---
title: "-LN (Create MSIL Module) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/LN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-LN compiler option [C++]"
  - "/LN compiler option [C++]"
ms.assetid: 4f38f4f4-3176-4caf-8200-5c7585dc1ed3
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /LN (Create MSIL Module)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-LN (Create MSIL Module)](https://docs.microsoft.com/cpp/build/reference/ln-create-msil-module).  
  
  
Specifies that an assembly manifest should not be inserted into the output file.  
  
## Syntax  
  
```  
/LN  
```  
  
## Remarks  
 By default, **/LN** is not in effect (an assembly manifest is inserted into the output file).  
  
 When **/LN** is used, one of the [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) options must also be used.  
  
 A managed program that does not have an assembly metadata in the manifest is called a module. If you compile with [/c (Compile Without Linking)](../../build/reference/c-compile-without-linking.md) and **/LN**, specify [/NOASSEMBLY (Create a MSIL Module)](../../build/reference/noassembly-create-a-msil-module.md) in the linker phase to create the output file.  
  
 You may want to create modules if you want to take a component-based approach to building assemblies.  That is, you can author types and compile them into modules.  Then, you can generate an assembly from one or more modules.  For more information on creating assemblies from modules, see [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md) or [Al.exe (Assembly Linker)](../Topic/Al.exe%20\(Assembly%20Linker\).md).  
  
 The default file extension for a module is .netmodule.  
  
 In [!INCLUDE[vcprvc](../../includes/vcprvc-md.md)] releases before Visual C++ 2005, a module was created with **/clr:noAssembly**.  
  
 The Visual C++ linker accepts .netmodule files as input and the output file produced by the linker will be an assembly or .netmodule with no run-time dependence on any of the .netmodules that were input to the linker.  For more information, see [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
-   Specify [/NOASSEMBLY (Create a MSIL Module)](../../build/reference/noassembly-create-a-msil-module.md) in the linker phase to create the output file.  
  
### To set this compiler option programmatically  
  
-   This compiler option cannot be changed programmatically.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)

