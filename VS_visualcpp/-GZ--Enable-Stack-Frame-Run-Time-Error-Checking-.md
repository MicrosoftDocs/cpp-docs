---
title: "-GZ (Enable Stack Frame Run-Time Error Checking)"
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
H1: /GZ (Enable Stack Frame Run-Time Error Checking)
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
caps.latest.revision: 14
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
# -GZ (Enable Stack Frame Run-Time Error Checking)
Performs the same operations as the [/RTC (Run-Time Error Checks)](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md) option. Deprecated.  
  
## Syntax  
  
```  
/GZ  
```  
  
## Remarks  
 **/GZ** is only for use in a nonoptimized ([/Od (Disable (Debug))](../VS_visualcpp/-Od--Disable--Debug--.md)) build.  
  
 **/GZ** is deprecated; use [/RTC (Run-Time Error Checks)](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md) instead. For more information, see [Deprecated Compiler Options in Visual C++ 2005](assetId:///aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
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