---
title: "-Ge (Enable Stack Probes) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ge"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Ge compiler option [C++]"
  - "enable stack probes"
  - "/Ge compiler option [C++]"
  - "stack, stack probes"
  - "stack probes"
  - "stack checking calls"
  - "Ge compiler option [C++]"
ms.assetid: 4b54deae-4e3c-4bfa-95f3-ba23590f7258
caps.latest.revision: 13
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
# /Ge (Enable Stack Probes)
Activates stack probes for every function call that requires storage for local variables.  
  
## Syntax  
  
```  
/Ge  
```  
  
## Remarks  
 This mechanism is useful if you rewrite the functionality of the stack probe. It is recommended that you use [/Gh (Enable _penter Hook Function)](../../build/reference/gh-enable-penter-hook-function.md) instead of rewriting the stack probe.  
  
 [/Gs (Control Stack Checking Calls)](../../build/reference/gs-control-stack-checking-calls.md) has the same effect.  
  
 **/Ge** is deprecated; the compiler will generate stack checking. For more information, see [Deprecated Compiler Options in Visual C++ 2005](http://msdn.microsoft.com/en-us/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)