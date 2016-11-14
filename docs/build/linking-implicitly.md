---
title: "Linking Implicitly | Microsoft Docs"
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
  - "static load linking [C++]"
  - "implicit linking [C++]"
  - "load-time dynamic linking [C++]"
ms.assetid: 3ea4c316-4e70-4111-9944-c1b4ad00c605
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
# Linking Implicitly
To implicitly link to a DLL, executables must obtain the following from the provider of the DLL:  
  
-   A header file (.h file) containing the declarations of the exported functions and/or C++ classes.  The classes, functions, and data should all have `__declspec(dllimport)`, for more information, see [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
-   An import library ([.LIB files](../build/reference/dot-lib-files-as-linker-input.md)) to link with. (The linker creates the import library when the DLL is built.)  
  
-   The actual DLL (.dll file).  
  
 Executables using the DLL must include the header file containing the exported functions (or C++ classes) in each source file that contains calls to the exported functions. From a coding perspective, the function calls to the exported functions are just like any other function call.  
  
 To build the calling executable file, you must link with the import library. If you are using an external makefile, specify the file name of the import library where you list other object (.obj) files or libraries that you are linking with.  
  
 The operating system must be able to locate the DLL file when it loads the calling executable.  
  
## What do you want to do?  
  
-   [Link explicitly](../build/linking-explicitly.md)  
  
-   [Determine which linking method to use](../build/determining-which-linking-method-to-use.md)  
  
## What do you want to know more about?  
  
-   [Working with Import Libraries and Export Files](../build/reference/working-with-import-libraries-and-export-files.md)  
  
-   [The search path used by Windows to locate a DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
## See Also  
 [Linking an Executable to a DLL](../build/linking-an-executable-to-a-dll.md)