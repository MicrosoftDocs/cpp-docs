---
title: "-LN (Create MSIL Module)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /LN (Create MSIL Module)
ms.assetid: 4f38f4f4-3176-4caf-8200-5c7585dc1ed3
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -LN (Create MSIL Module)
Specifies that an assembly manifest should not be inserted into the output file.  
  
## Syntax  
  
```  
/LN  
```  
  
## Remarks  
 By default, **/LN** is not in effect (an assembly manifest is inserted into the output file).  
  
 When **/LN** is used, one of the [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md) options must also be used.  
  
 A managed program that does not have an assembly metadata in the manifest is called a module. If you compile with [/c (Compile Without Linking)](../VS_visualcpp/-c--Compile-Without-Linking-.md) and **/LN**, specify [/NOASSEMBLY (Create a MSIL Module)](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md) in the linker phase to create the output file.  
  
 You may want to create modules if you want to take a component-based approach to building assemblies.  That is, you can author types and compile them into modules.  Then, you can generate an assembly from one or more modules.  For more information on creating assemblies from modules, see [.netmodule Files as Linker Input](../VS_visualcpp/.netmodule-Files-as-Linker-Input.md) or [Al.exe (Assembly Linker)](../Topic/Al.exe%20\(Assembly%20Linker\).md).  
  
 The default file extension for a module is .netmodule.  
  
 In Visual C++ releases before Visual C++ 2005, a module was created with **/clr:noAssembly**.  
  
 The Visual C++ linker accepts .netmodule files as input and the output file produced by the linker will be an assembly or .netmodule with no run-time dependence on any of the .netmodules that were input to the linker.  For more information, see [.netmodule Files as Linker Input](../VS_visualcpp/.netmodule-Files-as-Linker-Input.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
-   Specify [/NOASSEMBLY (Create a MSIL Module)](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md) in the linker phase to create the output file.  
  
### To set this compiler option programmatically  
  
-   This compiler option cannot be changed programmatically.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)