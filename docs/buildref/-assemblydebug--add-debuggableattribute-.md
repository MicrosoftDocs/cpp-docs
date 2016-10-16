---
title: "-ASSEMBLYDEBUG (Add DebuggableAttribute)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.AssemblyDebug"
  - "/ASSEMBLYDEBUG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ASSEMBLYDEBUG linker option"
  - "-ASSEMBLYDEBUG linker option"
  - "ASSEMBLYDEBUG linker option"
ms.assetid: 94443af3-470c-41d7-83a0-7434563d7982
caps.latest.revision: 8
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
# /ASSEMBLYDEBUG (Add DebuggableAttribute)
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
 In Visual C++ .NET 2003 and later, it is necessary to explicitly specify that a managed image be debuggable. Using [/Zi](../buildref/-z7---zi---zi--debug-information-format-.md) alone is not sufficient.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYLINKRESOURCE](../buildref/-assemblylinkresource--link-to-.net-framework-resource-.md)  
  
-   [/ASSEMBLYMODULE](../buildref/-assemblymodule--add-a-msil-module-to-the-assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../buildref/-assemblyresource--embed-a-managed-resource-.md)  
  
-   [/DELAYSIGN](../buildref/-delaysign--partially-sign-an-assembly-.md)  
  
-   [/KEYCONTAINER](../buildref/-keycontainer--specify-a-key-container-to-sign-an-assembly-.md)  
  
-   [/KEYFILE](../buildref/-keyfile--specify-key-or-key-pair-to-sign-an-assembly-.md)  
  
-   [/NOASSEMBLY](../buildref/-noassembly--create-a-msil-module-.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify the **Debuggable Assembly** property.  
  
### To set this linker option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AssemblyDebug*>.  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)