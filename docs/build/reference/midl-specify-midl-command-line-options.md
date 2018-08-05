---
title: "-MIDL (Specify MIDL Command Line Options) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/midl", "VC.Project.VCLinkerTool.MidlCommandFile"]
dev_langs: ["C++"]
helpviewer_keywords: ["-MIDL linker option", "MIDL", "/MIDL linker option", "MIDL linker option", "MIDL, command line options"]
ms.assetid: 22dc259e-b34c-4ed3-a380-4beb734482c1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /MIDL (Specify MIDL Command Line Options)
```  
/MIDL:@file  
```  
  
## Remarks  
 where:  
  
 `file`  
 The name of the file that contains [MIDL command line options](http://msdn.microsoft.com/library/windows/desktop/aa366839).  
  
## Remarks  
 All options for the conversion of an IDL file to a TLB file must be given in `file`; MIDL command-line options cannot be specified on the linker's command line. If /MIDL is not specified, the MIDL compiler will be invoked with only the IDL file name and no other options.  
  
 The file should contain one MIDL command-line option per line.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **MIDL Commands** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [/IDLOUT (Name MIDL Output Files)](../../build/reference/idlout-name-midl-output-files.md)   
 [/IGNOREIDL (Don't Process Attributes into MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [/TLBOUT (Name .TLB File)](../../build/reference/tlbout-name-dot-tlb-file.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)