---
title: "-MANIFESTFILE (Name Manifest File) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.ManifestFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MANIFESTFILE linker option"
  - "-MANIFESTFILE linker option"
  - "/MANIFESTFILE linker option"
ms.assetid: befa5ab2-a9cf-4c9b-969a-e7b4a930f08d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MANIFESTFILE (Name Manifest File)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-MANIFESTFILE (Name Manifest File)](https://docs.microsoft.com/cpp/build/reference/manifestfile-name-manifest-file).  
  
  
MANIFESTFILE:filename  
```  
  
## Remarks  
 /MANIFESTFILE lets you change the default name of the manifest file.  The default name of the manifest file is the file name with .manifest appended.  
  
 /MANIFESTFILE will have no effect if you do not also link with [/MANIFEST](../../build/reference/manifest-create-side-by-side-assembly-manifest.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Manifest File** property page.  
  
5.  Modify the **Manifest File** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ManifestFile%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

