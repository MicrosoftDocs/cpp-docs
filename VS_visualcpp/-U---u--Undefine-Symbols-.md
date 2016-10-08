---
title: "-U, -u (Undefine Symbols)"
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
H1: /U, /u (Undefine Symbols)
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
caps.latest.revision: 11
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
# -U, -u (Undefine Symbols)
The **/U** compiler option undefines the specified preprocessor symbol. The **/u** compiler option undefines the Microsoft-specific symbols that the compiler defines.  
  
## Syntax  
  
```  
/U[ ]symbol  
/u  
```  
  
## Arguments  
 `symbol`  
 The preprocessor symbol to undefine.  
  
## Remarks  
 Neither the **/U** or **/u** option can undefine a symbol created by using the **#define** directive.  
  
 The **/U** option can undefine a symbol that was previously defined by using the **/D** option.  
  
 By default, the compiler defines the following Microsoft-specific symbols.  
  
|Symbol|Function|  
|------------|--------------|  
|_CHAR_UNSIGNED|Default char type is unsigned. Defined when the [/J](../VS_visualcpp/-J--Default-char-Type-Is-unsigned-.md) option is specified.|  
|_CPPRTTI|Defined for code compiled with the [/GR](../VS_visualcpp/-GR--Enable-Run-Time-Type-Information-.md) option.|  
|_CPPUNWIND|Defined for code compiled with the [/EHsc](../VS_visualcpp/-EH--Exception-Handling-Model-.md) option.|  
|_DLL|Defined when the [/MD](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md) option is specified.|  
|_M_IX86|By default, defined to 600 for x86 targets.|  
|_MSC_VER|For more information, see [Predefined Macros](../VS_visualcpp/Predefined-Macros.md).|  
|_WIN32|Defined for WIN32 applications. Always defined.|  
|_MT|Defined when the [/MD or /MT](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md) option is specified.|  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Undefine Preprocessor Definitions** or **Undefine All Preprocessor Definitions** properties.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions?qualifyHint=False> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [/J (Default char Type Is unsigned)](../VS_visualcpp/-J--Default-char-Type-Is-unsigned-.md)   
 [/GR (Enable Run-Time Type Information)](../VS_visualcpp/-GR--Enable-Run-Time-Type-Information-.md)   
 [/EH (Exception Handling Model)](../VS_visualcpp/-EH--Exception-Handling-Model-.md)   
 [/MD, /MT, /LD (Use Run-Time Library)](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)