---
title: "-Od (Disable (Debug))"
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
H1: /Od (Disable (Debug))
ms.assetid: b1ac31b7-e086-4eeb-be5e-488f7513f5f5
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
# -Od (Disable (Debug))
Turns off all optimizations in the program and speeds compilation.  
  
## Syntax  
  
```  
/Od  
```  
  
## Remarks  
 This option is the default. Because **/Od** suppresses code movement, it simplifies the debugging process. For more information about compiler options for debugging, see [/Z7, /Zi, /ZI (Debug Information Format)](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Optimization** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization?qualifyHint=False>.  
  
## See Also  
 [/O Options (Optimize Code)](../VS_visualcpp/-O-Options--Optimize-Code-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [/Z7, /Zi, /ZI (Debug Information Format)](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md)