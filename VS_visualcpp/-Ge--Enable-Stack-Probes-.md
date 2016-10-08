---
title: "-Ge (Enable Stack Probes)"
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
H1: /Ge (Enable Stack Probes)
ms.assetid: 4b54deae-4e3c-4bfa-95f3-ba23590f7258
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
# -Ge (Enable Stack Probes)
Activates stack probes for every function call that requires storage for local variables.  
  
## Syntax  
  
```  
/Ge  
```  
  
## Remarks  
 This mechanism is useful if you rewrite the functionality of the stack probe. It is recommended that you use [/Gh (Enable _penter Hook Function)](../VS_visualcpp/-Gh--Enable-_penter-Hook-Function-.md) instead of rewriting the stack probe.  
  
 [/Gs (Control Stack Checking Calls)](../VS_visualcpp/-Gs--Control-Stack-Checking-Calls-.md) has the same effect.  
  
 **/Ge** is deprecated; the compiler will generate stack checking. For more information, see [Deprecated Compiler Options in Visual C++ 2005](assetId:///aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)