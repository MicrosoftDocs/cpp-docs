---
title: "-U, -u (Undefine Symbols) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.UndefinePreprocessorDefinitions"
  - "VC.Project.VCCLWCECompilerTool.UndefinePreprocessorDefinitions"
  - "VC.Project.VCCLCompilerTool.UndefineAllPreprocessorDefinitions"
  - "/u"
  - "VC.Project.VCCLWCECompilerTool.UndefineAllPreprocessorDefinitions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-U compiler option [C++]"
  - "Undefine Symbols compiler option"
  - "/U compiler option [C++]"
  - "U compiler option [C++]"
ms.assetid: 7bc0474f-6d1f-419b-807d-0d8816763b2a
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
# /U, /u (Undefine Symbols)
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
|_CHAR_UNSIGNED|Default char type is unsigned. Defined when the [/J](../../build/reference/j-default-char-type-is-unsigned.md) option is specified.|  
|_CPPRTTI|Defined for code compiled with the [/GR](../../build/reference/gr-enable-run-time-type-information.md) option.|  
|_CPPUNWIND|Defined for code compiled with the [/EHsc](../../build/reference/eh-exception-handling-model.md) option.|  
|_DLL|Defined when the [/MD](../../build/reference/md-mt-ld-use-run-time-library.md) option is specified.|  
|_M_IX86|By default, defined to 600 for x86 targets.|  
|_MSC_VER|For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md).|  
|_WIN32|Defined for WIN32 applications. Always defined.|  
|_MT|Defined when the [/MD or /MT](../../build/reference/md-mt-ld-use-run-time-library.md) option is specified.|  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Undefine Preprocessor Definitions** or **Undefine All Preprocessor Definitions** properties.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefineAllPreprocessorDefinitions%2A> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UndefinePreprocessorDefinitions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [/J (Default char Type Is unsigned)](../../build/reference/j-default-char-type-is-unsigned.md)   
 [/GR (Enable Run-Time Type Information)](../../build/reference/gr-enable-run-time-type-information.md)   
 [/EH (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md)   
 [/MD, /MT, /LD (Use Run-Time Library)](../../build/reference/md-mt-ld-use-run-time-library.md)