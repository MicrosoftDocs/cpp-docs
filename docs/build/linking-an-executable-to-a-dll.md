---
title: "Linking an Executable to a DLL | Microsoft Docs"
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
  - "run time [C++], linking"
  - "dynamic load linking [C++]"
  - "linking [C++], DLLs"
  - "DLLs [C++], linking"
  - "implicit linking [C++]"
  - "explicit linking [C++]"
  - "executable files [C++], linking to DLLs"
  - "loading DLLs [C++]"
ms.assetid: 7592e276-dd6e-4a74-90c8-e1ee35598ea3
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
# Linking an Executable to a DLL
An executable file links to (or loads) a DLL in one of two ways:  
  
-   [Implicit linking](../build/linking-implicitly.md)  
  
-   [Explicit linking](../build/linking-explicitly.md)  
  
 Implicit linking is sometimes referred to as static load or load-time dynamic linking. Explicit linking is sometimes referred to as dynamic load or run-time dynamic linking.  
  
 With implicit linking, the executable using the DLL links to an import library (.lib file) provided by the maker of the DLL. The operating system loads the DLL when the executable using it is loaded. The client executable calls the DLL's exported functions just as if the functions were contained within the executable.  
  
 With explicit linking, the executable using the DLL must make function calls to explicitly load and unload the DLL and to access the DLL's exported functions. The client executable must call the exported functions through a function pointer.  
  
 An executable can use the same DLL with either linking method. Furthermore, these mechanisms are not mutually exclusive, as one executable can implicitly link to a DLL and another can attach to it explicitly.  
  
## What do you want to know more about?  
  
-   [Working with Import Libraries and Export Files](../build/reference/working-with-import-libraries-and-export-files.md)  
  
-   [Determining which linking method to use](../build/determining-which-linking-method-to-use.md)  
  
-   [The search path used by Windows to locate a DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)