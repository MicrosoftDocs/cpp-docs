---
title: "-MIDL (Specify MIDL Command Line Options)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /MIDL (Specify MIDL Command Line Options)
ms.assetid: 22dc259e-b34c-4ed3-a380-4beb734482c1
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -MIDL (Specify MIDL Command Line Options)
```  
/MIDL:@file  
```  
  
## Remarks  
 where:  
  
 `file`  
 The name of the file that that contains [MIDL command line options](http://msdn.microsoft.com/library/windows/desktop/aa366839).  
  
## Remarks  
 All options for the conversion of an IDL file to a TLB file must be given in `file`; MIDL command-line options cannot be specified on the linker's command line. If /MIDL is not specified, the MIDL compiler will be invoked with only the IDL file name and no other options.  
  
 The file should contain one MIDL command-line option per line.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **MIDL Commands** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)   
 [/IDLOUT (Name MIDL Output Files)](../VS_visualcpp/-IDLOUT--Name-MIDL-Output-Files-.md)   
 [/IGNOREIDL (Don't Process Attributes into MIDL)](../VS_visualcpp/-IGNOREIDL--Don-t-Process-Attributes-into-MIDL-.md)   
 [/TLBOUT (Name .TLB File)](../VS_visualcpp/-TLBOUT--Name-.TLB-File-.md)   
 [Building an Attributed Program](../VS_visualcpp/Building-an-Attributed-Program.md)