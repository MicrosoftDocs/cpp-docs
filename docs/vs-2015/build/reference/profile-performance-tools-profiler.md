---
title: "-PROFILE (Performance Tools Profiler) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.Profile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-PROFILE linker option"
  - "/PROFILE linker option"
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /PROFILE (Performance Tools Profiler)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-PROFILE (Performance Tools Profiler)](https://docs.microsoft.com/cpp/build/reference/profile-performance-tools-profiler).  
  
  
Produces an output file that can be used with the Performance Tools profiler.  
  
## Syntax  
  
```  
/PROFILE  
```  
  
## Remarks  
 /PROFILE implies the following linker options:  
  
-   [/OPT:REF](../../build/reference/opt-optimizations.md)  
  
-   /OPT:NOICF  
  
-   [/INCREMENTAL:NO](../../build/reference/incremental-link-incrementally.md)  
  
-   [/FIXED:NO](../../build/reference/fixed-fixed-base-address.md)  
  
 /PROFILE causes the linker to generate a relocation section in the program image.  A relocation section allows the profiler to transform the program image to get profile data.  
  
 **/PROFILE** is only available only in Enterprise (team development) versions.  For more information on PREfast, see [Code Analysis for C/C++ Overview](http://msdn.microsoft.com/library/81f0c9e8-f471-4de5-aac4-99db336a8809).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Advanced** property page.  
  
5.  Modify the **Profile** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

