---
title: "-IMPLIB (Name Import Library) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/implib"
  - "VC.Project.VCLinkerTool.ImportLIbrary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IMPLIB linker option"
  - "/IMPLIB linker option"
  - "-IMPLIB linker option"
  - "import libraries, overriding default name"
ms.assetid: fe8f71ab-7055-41b5-8ef8-2b97cfa4a432
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
# /IMPLIB (Name Import Library)
```  
/IMPLIB:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 A user-specified name for the import library. It replaces the default name.  
  
## Remarks  
 The /IMPLIB option overrides the default name for the import library that LINK creates when it builds a program that contains exports. The default name is formed from the base name of the main output file and the extension .lib. A program contains exports if one or more of the following are specified:  
  
-   The [__declspec(dllexport)](../../cpp/dllexport-dllimport.md) keyword in the source code  
  
-   [EXPORTS](../../build/reference/exports.md) statement in a .def file  
  
-   An [/EXPORT](../../build/reference/export-exports-a-function.md) specification in a LINK command  
  
 LINK ignores /IMPLIB when an import library is not being created. If no exports are specified, LINK does not create an import library. If an export file is used in the build, LINK assumes that an import library already exists and does not create one. For information on import libraries and export files, see [LIB Reference](../../build/reference/lib-reference.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Import Library** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)