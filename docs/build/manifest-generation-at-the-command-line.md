---
title: "Manifest Generation at the Command Line | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "manifests [C++]"
  - "manifest tool (mt.exe)"
ms.assetid: fc2ff255-82b1-4c44-af76-8405c5850292
caps.latest.revision: 11
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
# Manifest Generation at the Command Line
When building C/C++ applications from the command line using nmake or similar tools, the manifest is generated after the linker has processed all object files and built the final binary. The linker collects assembly information stored in the object files and combines this information into a final manifest file. By default the linker will generate a file named <binary_name>.\<extension>.manifest to describe the final binary. The linker does not embed a manifest file inside the binary and can only generate a manifest as an external file. There are several ways to embed a manifest inside the final binary, such as using the [Manifest Tool (mt.exe)](http://msdn.microsoft.com/library/aa375649) or compiling the manifest into a resource file. It is important to keep in mind that specific rules have to be followed when embedding a manifest inside the final binary to enable such features as incremental linking, signing, and edit and continue. These and other options are discussed in [How to: Embed a Manifest Inside a C/C++ Application](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md) when building on the command line.  
  
## See Also  
 [Manifests](http://msdn.microsoft.com/library/aa375365)   
 [/INCREMENTAL (Link Incrementally)](../build/reference/incremental-link-incrementally.md)   
 [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)   
 [Edit and Continue](/visualstudio/debugger/edit-and-continue)   
 [Understanding Manifest Generation for C/C++ Programs](../build/understanding-manifest-generation-for-c-cpp-programs.md)