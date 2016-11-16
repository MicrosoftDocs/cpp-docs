---
title: "-STACK (Stack Allocations) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.StackReserveSize"
  - "VC.Project.VCLinkerTool.StackCommitSize"
  - "/stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STACK linker option"
  - "-STACK linker option"
  - "memory allocation, stack"
  - "/STACK linker option"
  - "stack, setting size"
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /STACK (Stack Allocations)
```  
/STACK:reserve[,commit]  
```  
  
## Remarks  
 The /STACK option sets the size of the stack in bytes. Use this option only when you build an .exe file.  
  
 The `reserve` value specifies the total stack allocation in virtual memory. For ARM, x86 and [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] machines, the default stack size is 1 MB.  
  
 `commit` is subject to interpretation by the operating system. In Windows WindowsRT it specifies the amount of physical memory to allocate at a time. Committed virtual memory causes space to be reserved in the paging file. A higher `commit` value saves time when the application needs more stack space, but increases the memory requirements and possibly the startup time. For ARM, x86 and [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] machines, the default commit value is 4 KB.  
  
 Specify the `reserve` and `commit` values in decimal or C-language notation.  
  
 Another way to set the size of the stack is with the [STACKSIZE](../../build/reference/stacksize.md) statement in a module-definition (.def) file. **STACKSIZE** overrides the Stack Allocations (/STACK) option if both are specified. You can change the stack size after the .exe file is built by using the [EDITBIN](../../build/reference/editbin-reference.md) tool.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **System** property page.  
  
4.  Modify one of the following properties:  
  
    -   **Stack Commit Size**  
  
    -   **Stack Reserve Size**  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize%2A> properties.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)