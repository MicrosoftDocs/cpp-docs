---
title: "-PROFILE (Performance Tools Profiler)"
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
  - "VC.Project.VCLinkerTool.Profile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-PROFILE linker option"
  - "/PROFILE linker option"
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
caps.latest.revision: 10
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
# /PROFILE (Performance Tools Profiler)
Produces an output file that can be used with the Performance Tools profiler.  
  
## Syntax  
  
```  
/PROFILE  
```  
  
## Remarks  
 /PROFILE implies the following linker options:  
  
-   [/OPT:REF](../buildref/-opt--optimizations-.md)  
  
-   /OPT:NOICF  
  
-   [/INCREMENTAL:NO](../buildref/-incremental--link-incrementally-.md)  
  
-   [/FIXED:NO](../buildref/-fixed--fixed-base-address-.md)  
  
 /PROFILE causes the linker to generate a relocation section in the program image.  A relocation section allows the profiler to transform the program image to get profile data.  
  
 **/PROFILE** is only available only in Enterprise (team development) versions.  For more information on PREfast, see [Code Analysis for C/C++ Overview](../Topic/Code%20Analysis%20for%20C-C++%20Overview.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Advanced** property page.  
  
5.  Modify the **Profile** property.  
  
### To set this linker option programmatically  
  
1.  See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile*>.  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)