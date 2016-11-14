---
title: "Building an Import Library and Export File | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLibrarianTool.ModuleDefinitionFile"
  - "VC.Project.VCLibrarianTool.ExportNamedFunctions"
  - "VC.Project.VCLibrarianTool.GenerateDebug"
  - "VC.Project.VCLibrarianTool.ForceSymbolReferences"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OUT library manager option"
  - "INCLUDE library manager option"
  - "/DEF library manager option"
  - "exporting data"
  - "import libraries, building"
  - "-INCLUDE library manager option"
  - "/OUT library manager option"
  - "DEF library manager option"
  - "-DEF library manager option"
  - "-OUT library manager option"
  - "/INCLUDE library manager option"
  - "-EXPORT library manager option"
  - "exporting data, export (.exp) files"
  - "/EXPORT library manager option"
  - "EXPORT library manager option"
  - ".lib files"
  - "EXP files"
ms.assetid: 2fe4f30a-1dd6-4b05-84b5-0752e1dee354
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
# Building an Import Library and Export File
To build an import library and export file, use the following syntax:  
  
```  
LIB /DEF[:deffile] [options] [objfiles] [libraries]  
```  
  
 When /DEF is specified, LIB creates the output files from export specifications that are passed in the LIB command. There are three methods for specifying exports, listed in recommended order of use:  
  
1.  A **__declspec(dllexport)** definition in one of the *objfiles* or *libraries*  
  
2.  A specification of /EXPORT:*name* on the LIB command line  
  
3.  A definition in an **EXPORTS** statement in a `deffile`  
  
 These are the same methods you use to specify exports when linking an exporting program. A program can use more than one method. You can specify parts of the LIB command (such as multiple *objfiles* or /EXPORT specifications) in a command file in the LIB command, just as you can in a LINK command.  
  
 The following options apply to building an import library and export file:  
  
 /OUT: *import*  
 Overrides the default output file name for the *import* library being created. When /OUT is not specified, the default name is the base name of the first object file or library in the LIB command and the extension .lib. The export file is given the same base name as the import library and the extension .exp.  
  
 /EXPORT: *entryname*[= *internalname*][,@ `ordinal`[, **NONAME**]][, **DATA**]  
 Exports a function from your program to allow other programs to call the function. You can also export data (using the **DATA** keyword). Exports are usually defined in a DLL.  
  
 The *entryname* is the name of the function or data item as it is to be used by the calling program. Optionally, you can specify the *internalname* as the function known in the defining program; by default, *internalname* is the same as *entryname*. The `ordinal` specifies an index into the export table in the range 1 through 65,535; if you do not specify `ordinal`, LIB assigns one. The **NONAME** keyword exports the function only as an ordinal, without an *entryname*. The **DATA** keyword is used to export data-only objects.  
  
 /INCLUDE: `symbol`  
 Adds the specified symbol to the symbol table. This option is useful for forcing the use of a library object that otherwise would not be included.  
  
 Note that if you create your import library in a preliminary step, before creating your .dll, you must pass the same set of object files when building the .dll, as you passed when building the import library.  
  
## See Also  
 [Working with Import Libraries and Export Files](../../build/reference/working-with-import-libraries-and-export-files.md)