---
title: "-EXPORT (Exports a Function) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.ExportFunctions"
  - "/export"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/EXPORT linker option"
  - "EXPORT linker option"
  - "-EXPORT linker option"
ms.assetid: 0920fb44-a472-4091-a8e6-73051f494ca0
caps.latest.revision: 9
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
# /EXPORT (Exports a Function)
```  
/EXPORT:entryname[,@ordinal[,NONAME]][,DATA]  
```  
  
## Remarks  
 With this option, you can export a function from your program so that other programs can call the function. You can also export data. Exports are usually defined in a DLL.  
  
 The *entryname* is the name of the function or data item as it is to be used by the calling program. `ordinal` specifies an index into the exports table in the range 1 through 65,535; if you do not specify `ordinal`, LINK assigns one. The **NONAME** keyword exports the function only as an ordinal, without an *entryname*.  
  
 The **DATA** keyword specifies that the exported item is a data item. The data item in the client program must be declared using **extern __declspec(dllimport)**.  
  
 There are three methods for exporting a definition, listed in recommended order of use:  
  
1.  [__declspec(dllexport)](../../cpp/dllexport-dllimport.md) in the source code  
  
2.  An [EXPORTS](../../build/reference/exports.md) statement in a .def file  
  
3.  An /EXPORT specification in a LINK command  
  
 All three methods can be used in the same program. When LINK builds a program that contains exports, it also creates an import library, unless an .exp file is used in the build.  
  
 LINK uses decorated forms of identifiers. The compiler decorates an identifier when it creates the .obj file. If *entryname* is specified to the linker in its undecorated form (as it appears in the source code), LINK attempts to match the name. If it cannot find a unique match, LINK issues an error message. Use the [DUMPBIN](../../build/reference/dumpbin-reference.md) tool to get the [decorated names](../../build/reference/decorated-names.md) form of an identifier when you need to specify it to the linker.  
  
> [!NOTE]
>  Do not specify the decorated form of C identifiers that are declared `__cdecl` or `__stdcall`.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)