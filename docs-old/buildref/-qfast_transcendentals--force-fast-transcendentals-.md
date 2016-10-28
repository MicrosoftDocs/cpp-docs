---
title: "-Qfast_transcendentals (Force Fast Transcendentals)"
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
  - "/Qfast_transcendentals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Qfast_transcendentals"
  - "Force Fast Transcendentals"
ms.assetid: 4de24bd1-38e6-49d4-9a05-04c9937d24ac
caps.latest.revision: 9
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
# /Qfast_transcendentals (Force Fast Transcendentals)
Generates inline code for transcendental functions.  
  
## Syntax  
  
```  
/Qfast_transcendentals  
```  
  
## Remarks  
 This compiler option forces transcendental functions to be converted to inline code to improve execution speed. This option has an effect only when paired with **/fp:except** or **/fp:precise**. Generating inline code for transcendental functions is already the default behavior under **/fp:fast**.  
  
 This option is incompatible with **/fp:strict**. See [/fp (Specify Floating-Point Behavior)](../buildref/-fp--specify-floating-point-behavior-.md) for more information about floating point compiler options.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions*>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../buildref/-q-options--low-level-operations-.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)