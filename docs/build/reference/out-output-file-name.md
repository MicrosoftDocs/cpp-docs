---
title: "-OUT (Output File Name) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.OutputFile"
  - "/out"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "output files, name linker option"
  - "-OUT linker option"
  - "OUT linker option"
  - "/OUT C++ linker option"
  - "linker [C++], output files"
ms.assetid: 976210a4-e51f-4cfb-af5e-c16344455834
caps.latest.revision: 8
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
# /OUT (Output File Name)
```  
/OUT:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 A user-specified name for the output file. It replaces the default name.  
  
## Remarks  
 The /OUT option overrides the default name and location of the program that the linker creates.  
  
 By default, the linker forms the file name using the base name of the first .obj file specified and the appropriate extension (.exe or .dll).  
  
 This option the default base name for a .mapfile or import library. For details, see [Generate Mapfile](../../build/reference/map-generate-mapfile.md) (/MAP) and [/IMPLIB](../../build/reference/implib-name-import-library.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Output File** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)