---
title: "-HEAP (Set Heap Size) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.HeapCommitSize"
  - "/heap"
  - "VC.Project.VCLinkerTool.HeapReserveSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-HEAP linker option"
  - "heap allocation, setting heap size"
  - "/HEAP linker option"
  - "HEAP linker option"
ms.assetid: a3f71927-7f1d-492c-9fdb-dfccb1a043da
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
# /HEAP (Set Heap Size)
```  
/HEAP:reserve[,commit]  
```  
  
## Remarks  
 The /HEAP option sets the size of the heap in bytes. This option is only for use when building an .exe file.  
  
 The *reserve* argument specifies the total heap allocation in virtual memory. The default heap size is 1 MB. The linker rounds up the specified value to the nearest 4 bytes.  
  
 The optional `commit` argument is subject to interpretation by the operating system. In Windows NT/Windows 2000, it specifies the amount of physical memory to allocate at a time. Committed virtual memory causes space to be reserved in the paging file. A higher `commit` value saves time when the application needs more heap space, but increases the memory requirements and possibly the startup time.  
  
 Specify the *reserve* and `commit` values in decimal or C-language notation.  
  
 This functionality is also available via a module definition file with [HEAPSIZE](../../build/reference/heapsize.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **System** property page.  
  
4.  Modify the **Heap Commit Size** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapReserveSize%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapCommitSize%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)