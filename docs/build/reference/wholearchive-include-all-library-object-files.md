---
title: "-WHOLEARCHIVE (Include All Library Object Files) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "Assembly"
  - "C"
  - "C++"
ms.assetid: ee92d12f-18af-4602-9683-d6223be62ac9
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /WHOLEARCHIVE (Include All Library Object Files)
Force the linker to include all object files in the static library in the linked executable.  
  
## Syntax  
  
```  
/WHOLEARCHIVE[:library]  
```  
  
## Remarks  
 The /WHOLEARCHIVE option forces the linker to include every object file from either a specified static library, or if no library is specified, from all static libraries specified to the LINK command. To specify the /WHOLEARCHIVE option for multiple libraries, you can use more than one /WHOLEARCHIVE switch on the linker command line. By default, the linker includes object files in the linked output only if they export symbols referenced by other object files in the executable. The /WHOLEARCHIVE option makes the linker treat all object files archived in a static library as if they were specified individually on the linker command line.  
  
 The /WHOLEARCHIVE option can be used to re-export all the symbols from a static library. This allows you to make sure that all of your library code, resources, and metadata are included when you create a component from more than one static library. If you see warning LNK4264 when you create a static library that contains Windows Runtime components for export, use the /WHOLEARCHIVE option when linking that library into another component or app.  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Command Line** property page.  
  
5.  Add the /WHOLEARCHIVE option to the **Additional Options** text box.  
  
 The /WHOLEARCHIVE option was introduced in Visual Studio 2015 Update 2.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)