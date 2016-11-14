---
title: "-IGNOREIDL (Don&#39;t Process Attributes into MIDL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.IgnoreEmbeddedIDL"
  - "/ignoreidl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IGNOREIDL linker option"
  - "-IGNOREIDL linker option"
  - "/IGNOREIDL linker option"
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
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
# /IGNOREIDL (Don&#39;t Process Attributes into MIDL)
```  
/IGNOREIDL  
```  
  
## Remarks  
 The /IGNOREIDL option specifies that any [IDL attributes](../../windows/idl-attributes.md) in source code should not be processed into an .idl file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Embedded IDL** property page.  
  
4.  Modify the **Ignore Embedded IDL** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [/IDLOUT (Name MIDL Output Files)](../../build/reference/idlout-name-midl-output-files.md)   
 [/TLBOUT (Name .TLB File)](../../build/reference/tlbout-name-dot-tlb-file.md)   
 [/MIDL (Specify MIDL Command Line Options)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)