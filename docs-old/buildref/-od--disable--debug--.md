---
title: "-Od (Disable (Debug))"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "/od"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "no optimizations"
  - "fast compiling"
  - "/Od compiler option [C++]"
  - "disable optimizations"
  - "Od compiler option [C++]"
  - "-Od compiler option [C++]"
  - "disable (debug) compiler option [C++]"
ms.assetid: b1ac31b7-e086-4eeb-be5e-488f7513f5f5
caps.latest.revision: 13
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
# /Od (Disable (Debug))
Turns off all optimizations in the program and speeds compilation.  
  
## Syntax  
  
```  
/Od  
```  
  
## Remarks  
 This option is the default. Because **/Od** suppresses code movement, it simplifies the debugging process. For more information about compiler options for debugging, see [/Z7, /Zi, /ZI (Debug Information Format)](../buildref/-z7---zi---zi--debug-information-format-.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Optimization** property.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization*>.  
  
## See Also  
 [/O Options (Optimize Code)](../buildref/-o-options--optimize-code-.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)   
 [/Z7, /Zi, /ZI (Debug Information Format)](../buildref/-z7---zi---zi--debug-information-format-.md)