---
title: "-IGNOREIDL (Don&#39;t Process Attributes into MIDL)"
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
H1: /IGNOREIDL (Don&#39;t Process Attributes into MIDL)
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
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
# -IGNOREIDL (Don&#39;t Process Attributes into MIDL)
```  
/IGNOREIDL  
```  
  
## Remarks  
 The /IGNOREIDL option specifies that any [IDL attributes](../VS_visualcpp/IDL-Attributes.md) in source code should not be processed into an .idl file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **Ignore Embedded IDL** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)   
 [/IDLOUT (Name MIDL Output Files)](../VS_visualcpp/-IDLOUT--Name-MIDL-Output-Files-.md)   
 [/TLBOUT (Name .TLB File)](../VS_visualcpp/-TLBOUT--Name-.TLB-File-.md)   
 [/MIDL (Specify MIDL Command Line Options)](../VS_visualcpp/-MIDL--Specify-MIDL-Command-Line-Options-.md)   
 [Building an Attributed Program](../VS_visualcpp/Building-an-Attributed-Program.md)