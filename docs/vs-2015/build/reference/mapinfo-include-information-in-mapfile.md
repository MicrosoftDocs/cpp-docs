---
title: "-MAPINFO (Include Information in Mapfile) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.MapLines"
  - "VC.Project.VCLinkerTool.MapInfoFixups"
  - "VC.Project.VCLinkerTool.MapExports"
  - "/mapinfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MAPINFO linker option"
  - "MAPINFO linker option"
  - "-MAPINFO linker option"
ms.assetid: 533d2bce-f9b7-4fea-ae1c-0b4864c9d10b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MAPINFO (Include Information in Mapfile)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-MAPINFO (Include Information in Mapfile)](https://docs.microsoft.com/cpp/build/reference/mapinfo-include-information-in-mapfile).  
  
  
MAPINFO:EXPORTS  
```  
  
## Remarks  
 The /MAPINFO option tells the linker to include the specified information in a mapfile, which is created if you specify the [/MAP](../../build/reference/map-generate-mapfile.md) option.  EXPORTS tells the linker to include exported functions.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify of the **Map Exports** properties:  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapExports%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

