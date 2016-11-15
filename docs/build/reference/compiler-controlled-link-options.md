---
title: "Compiler-Controlled LINK Options | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LINK tool [C++], compiler-controlled options"
  - "linker [C++], CL compiler control"
  - "linking [C++], affected by CL features"
  - "cl.exe compiler [C++], features that affect linking"
  - "cl.exe compiler [C++], controlling linker"
ms.assetid: e4c03896-c99c-4599-8502-e0f4bebe69d0
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
# Compiler-Controlled LINK Options
The CL compiler automatically calls LINK unless you specify the /c option. CL provides some control over the linker through command-line options and arguments. The following table summarizes the features in CL that affect linking.  
  
|CL specification|CL action that affects LINK|  
|----------------------|---------------------------------|  
|Any file name extension other than .c, .cxx, .cpp, or .def|Passes a file name as input to LINK|  
|*filename*.def|Passes /DEF:*filename*.def|  
|/F`number`|Passes /STACK:`number`|  
|/Fd*filename*|Passes /PDB:*filename*|  
|/Fe*filename*|Passes /OUT:*filename*|  
|/Fm*filename*|Passes /MAP:*filename*|  
|/Gy|Creates packaged functions (COMDATs); enables function-level linking|  
|/LD|Passes /DLL|  
|/LDd|Passes /DLL|  
|/link|Passes remainder of command line to LINK|  
|/MD or /MT|Places a default library name in the .obj file|  
|/MDd or /MTd|Places a default library name in the .obj file. Defines the symbol **_DEBUG**|  
|/nologo|Passes /NOLOGO|  
|/Zd|Passes /DEBUG|  
|/Zi or /Z7|Passes /DEBUG|  
|/Zl|Omits default library name from .obj file|  
  
 For more information, see [Compiler Options](../../build/reference/compiler-options.md).  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)