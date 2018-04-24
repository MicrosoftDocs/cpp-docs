---
title: "-PGD (Specify Database for Profile-Guided Optimizations) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.ProfileGuidedDatabase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-PGD linker option"
  - "/PGD linker option"
ms.assetid: 9f312498-493b-461f-886f-92652257e443
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /PGD (Specify Database for Profile-Guided Optimizations)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-PGD (Specify Database for Profile-Guided Optimizations)](https://docs.microsoft.com/cpp/build/reference/pgd-specify-database-for-profile-guided-optimizations).  
  
  
PGD:`filename`  
  
## Remarks  
 where:  
  
 `filename`  
 Specifies the name of the .pgd file that will be used to hold information about the running program.  
  
## Remarks  
 When using [/LTCG:PGINSTRUMENT](../../build/reference/ltcg-link-time-code-generation.md), use /PGD to specify a nondefault name or location for the .pgd file. If you do not specify /PGD, the .pgd file name will be the same as the output file (.exe or .dll) name and will be created in the same directory from which the link was invoked.  
  
 When using /LTCG:PGOPTIMIZE, use /PGD to specify the name of the .pgd file to use to create the optimized image.  
  
 For more information, see [Profile Guided Optimization](../../build/reference/profile-guided-optimizations.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Optimization** property page.  
  
5.  Modify the **Profile Guided Database** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProfileGuidedDatabase%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

