---
title: "-ASSEMBLYDEBUG (Add DebuggableAttribute)"
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
H1: /ASSEMBLYDEBUG (Add DebuggableAttribute)
ms.assetid: 94443af3-470c-41d7-83a0-7434563d7982
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
# -ASSEMBLYDEBUG (Add DebuggableAttribute)
```  
/ASSEMBLYDEBUG[:DISABLE]  
```  
  
 /ASSEMBLYDEBUG emits the **DebuggableAttribute** attribute with debug information tracking and disables JIT optimizations. This is the same as specifying the following attribute in source:  
  
```  
[assembly:Debuggable(true, true)];   // same as /ASSEMBLYDEBUG  
```  
  
 /ASSEMBLYDEBUG:DISABLE emits the **DebuggableAttribute** attribute but disables the tracking of debug information and enables JIT optimizations. This is the same as specifying the following attribute in source:  
  
```  
[assembly:Debuggable(false, false)];   // same as /ASSEMBLYDEBUG:DISABLE  
```  
  
 The default is to not emit the **DebuggableAttribute** attribute.  
  
 DebuggableAttribute can also be added to an assembly directly in source code. For example,  
  
```  
[assembly:Debuggable(true, true)];   // same as /ASSEMBLYDEBUG  
```  
  
## Remarks  
 In Visual C++ .NET 2003 and later, it is necessary to explicitly specify that a managed image be debuggable. Using [/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) alone is not sufficient.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYLINKRESOURCE](../VS_visualcpp/-ASSEMBLYLINKRESOURCE--Link-to-.NET-Framework-Resource-.md)  
  
-   [/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md)  
  
-   [/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)  
  
-   [/KEYCONTAINER](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)  
  
-   [/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)  
  
-   [/NOASSEMBLY](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify the **Debuggable Assembly** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AssemblyDebug?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)