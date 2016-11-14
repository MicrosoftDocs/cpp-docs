---
title: "-IDLOUT (Name MIDL Output Files) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/idlout"
  - "VC.Project.VCLinkerTool.MergedIDLBaseFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MIDL, output file names"
  - ".idl files, path"
  - "MIDL"
  - "/IDLOUT linker option"
  - "IDL files, path"
  - "-IDLOUT linker option"
  - "IDLOUT linker option"
ms.assetid: 10d00a6a-85b4-4de1-8732-e422c6931509
caps.latest.revision: 10
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
# /IDLOUT (Name MIDL Output Files)
```  
/IDLOUT:[path\]filename  
```  
  
## Parameters  
 *path*  
 An absolute or relative path specification. By specifying a path, you affect only the location of an .idl file; all other files are placed in the project directory.  
  
 *filename*  
 Specifies the name of the .idl file created by the MIDL compiler. No file extension is assumed; specify *filename*.idl if you want an .idl extension.  
  
## Remarks  
 The /IDLOUT option specifies the name and extension of the .idl file.  
  
 The MIDL compiler is called by the Visual C++ linker when linking projects that have the [module](../../windows/module-cpp.md) attribute.  
  
 /IDLOUT also specifies the file names of the other output files associated with the MIDL compiler:  
  
-   *filename*.tlb  
  
-   *filename*_p.c  
  
-   *filename*_i.c  
  
-   *filename*.h  
  
 *filename* is the parameter that you pass to /IDLOUT. If [/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md) is specified, the .tlb file will get its name from /TLBOUT *filename*.  
  
 If you specify neither /IDLOUT nor /TLBOUT, the linker will create vc70.tlb, vc70.idl, vc70_p.c, vc70_i.c, and vc70.h.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **Merge IDL Base File Name** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [/IGNOREIDL (Don't Process Attributes into MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [/MIDL (Specify MIDL Command Line Options)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)