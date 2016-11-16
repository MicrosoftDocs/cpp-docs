---
title: "-TLBOUT (Name .TLB File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.TypeLibraryFile"
  - "/tlbout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tlb files, renaming"
  - "TLBOUT linker option"
  - "/TLBOUT linker option"
  - ".tlb files, renaming"
  - "-TLBOUT linker option"
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
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
# /TLBOUT (Name .TLB File)
```  
/TLBOUT:[path\]filename  
```  
  
## Remarks  
 where:  
  
 *path*  
 An absolute or relative path specification for where the .tlb file should be created.  
  
 *filename*  
 Specifies the name of the .tlb file created by the MIDL compiler. No file extension is assumed; specify *filename*.tlb if you want a .tlb extension.  
  
## Remarks  
 The /TLBOUT option specifies the name and extension of the .tlb file.  
  
 The MIDL compiler is called by the Visual C++ linker when linking projects that have the [module](../../windows/module-cpp.md) attribute.  
  
 If /TLBOUT is not specified, the .tlb file will get its name from [/IDLOUT](../../build/reference/idlout-name-midl-output-files.md) *filename*. If /IDLOUT is not specified, the .tlb file will be called vc70.tlb.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **Type Library** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [/IGNOREIDL (Don't Process Attributes into MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [/MIDL (Specify MIDL Command Line Options)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)