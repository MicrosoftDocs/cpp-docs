---
title: "-DEF (Specify Module-Definition File) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.ModuleDefinitionFile"
  - "/def"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "module definition files, specifying"
  - "DEF linker option"
  - "-DEF linker option"
  - "module definition files"
  - "/DEF linker option"
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DEF (Specify Module-Definition File)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-DEF (Specify Module-Definition File)](https://docs.microsoft.com/cpp/build/reference/def-specify-module-definition-file).  
  
  
DEF:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The name of a module-definition file (.def) to be passed to the linker.  
  
## Remarks  
 The /DEF option passes a module-definition file (.def) to the linker. Only one .def file can be specified to LINK. For details about .def files, see [Module-Definition Files](../../build/reference/module-definition-dot-def-files.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Module Definition File** property.  
  
 To specify a .def file from within the development environment, you should add it to the project along with other files and then specify the file to the /DEF option.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

