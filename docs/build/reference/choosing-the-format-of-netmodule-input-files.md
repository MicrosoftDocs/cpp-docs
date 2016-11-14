---
title: "Choosing the Format of .netmodule Input Files | Microsoft Docs"
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
ms.assetid: 4653d1bd-300f-4083-86f5-d1a06f44e61c
caps.latest.revision: 9
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
# Choosing the Format of .netmodule Input Files
An MSIL .obj file (compiled with [/clr](../../build/reference/clr-common-language-runtime-compilation.md)) can also be used as a .netmodule file.  .obj files contain metadata and native symbols.  .netmodules only contain metadata.  
  
 You can pass an MSIL .obj file to any other Visual Studio compiler via the /addmodule compiler option (but be aware that the .obj file becomes part of the resulting assembly and must be shipped with the assembly).  For example, Visual C# and Visual Basic have the /addmodule compiler option.  
  
> [!NOTE]
>  In most cases, you will need to pass to the linker the .obj file from the compilation that created the .net module.  One exception to this is if the .netmodule was created with [/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md).  Passing a .dll or .netmodule MSIL module file to the linker may result in LNK1107.  
  
 .obj files, along with their associated .h files, which you reference via #include in source, allow C++ applications to consume the native types in the module, whereas in a .netmodule file, only the managed types can be consumed by a C++ application.  If you attempt to pass a .obj file to #using, information about native types will not be available; #include the .obj file's .h file instead.  
  
 Other Visual Studio compilers can only consume managed types from a module.  
  
 Use the following to determine whether you need to use a .netmodule or a .obj file as module input to the Visual C++ linker:  
  
-   If you are building with a Visual Studio compiler other than Visual C++, produce a .netmodule and use the .netmodule as input to the linker.  
  
-   If you are using the Visual C++ compiler to produce modules and if the module(s) will be used to build something other than a library, use the .obj files produced by the compiler as module input to the linker; do not use the .netmodule file as input.  
  
-   If your modules will be used to build a native (not a managed) library, use .obj files as module input to the linker and generate a .lib library file.  
  
-   If your modules will be used to build a managed library, and if all module input to the linker will be verifiable (produced with /clr:safe), use .obj files as module input to the linker and generate a .dll (assembly) or .netmodule (module) library file.  
  
-   If your modules will be used to build a managed library, and if all module input to the linker will be produced with /clr:pure or /clr:safe, use .obj files as module input to the linker and generate a .dll (assembly) or .netmodule (module) if you only want to expose managed types from the library.  If you want to expose managed types from the library and if you also want C++ applications to consume the native types in the library, your library will consist of the .obj files for the libraries component modules (you will also want to ship the .h files for each module, so they can be referenced with #include from source code).  
  
-   If your modules will be used to build a managed library, and if one or more modules input to the linker will be produced with just /clr, use .obj files as module input to the linker and generate a .dll (assembly).  If you want to expose managed types from the library and if you also want C++ applications to consume the native types in the library, your library will consist of the .obj files for the libraries component modules (you will also want to ship the .h files for each module, so they can be referenced with #include from source code).  
  
## See Also  
 [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md)