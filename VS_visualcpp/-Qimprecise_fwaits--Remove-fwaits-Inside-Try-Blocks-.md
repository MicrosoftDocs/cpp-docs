---
title: "-Qimprecise_fwaits (Remove fwaits Inside Try Blocks)"
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
H1: /Qimprecise_fwaits (Remove fwaits Inside Try Blocks)
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
caps.latest.revision: 9
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
# -Qimprecise_fwaits (Remove fwaits Inside Try Blocks)
Removes the `fwait` commands internal to `try` blocks when you use the [/fp:except](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) compiler option.  
  
## Syntax  
  
```  
/Qimprecise_fwaits  
```  
  
## Remarks  
 This option has no effect if **/fp:except** is not also specified. If you specify the **/fp:except** option, the compiler will insert a `fwait` command around each line of code in a `try` block. In this way, the compiler can identify the specific line of code that produces an exception. **/Qimprecise_fwaits** removes internal `fwait` instructions, leaving only the waits around the `try` block. This improves performance, but the compiler will only be able to say which `try` block causes an exception, not which line.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../VS_visualcpp/-Q-Options--Low-Level-Operations-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)