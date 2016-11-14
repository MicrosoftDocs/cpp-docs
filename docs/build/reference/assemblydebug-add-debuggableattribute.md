---
title: "-ASSEMBLYDEBUG (Add DebuggableAttribute) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
 In Visual C++ .NET 2003 and later, it is necessary to explicitly specify that a managed image be debuggable. Using [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) alone is not sufficient.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
-   [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify the **Debuggable Assembly** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AssemblyDebug%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)