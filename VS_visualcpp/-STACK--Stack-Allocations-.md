---
title: "-STACK (Stack Allocations)"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /STACK (Stack Allocations)
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# -STACK (Stack Allocations)
```  
/STACK:reserve[,commit]  
```  
  
## Remarks  
 The /STACK option sets the size of the stack in bytes. Use this option only when you build an .exe file.  
  
 The `reserve` value specifies the total stack allocation in virtual memory. For ARM, x86 and x64 machines, the default stack size is 1 MB.  
  
 `commit` is subject to interpretation by the operating system. In Windows WindowsRT it specifies the amount of physical memory to allocate at a time. Committed virtual memory causes space to be reserved in the paging file. A higher `commit` value saves time when the application needs more stack space, but increases the memory requirements and possibly the startup time. For ARM, x86 and x64 machines, the default commit value is 4 KB.  
  
 Specify the `reserve` and `commit` values in decimal or C-language notation.  
  
 Another way to set the size of the stack is with the [STACKSIZE](../VS_visualcpp/STACKSIZE.md) statement in a module-definition (.def) file. **STACKSIZE** overrides the Stack Allocations (/STACK) option if both are specified. You can change the stack size after the .exe file is built by using the [EDITBIN](../VS_visualcpp/EDITBIN-Reference.md) tool.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **System** property page.  
  
4.  Modify one of the following properties:  
  
    -   **Stack Commit Size**  
  
    -   **Stack Reserve Size**  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize?qualifyHint=False> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize?qualifyHint=False> properties.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)