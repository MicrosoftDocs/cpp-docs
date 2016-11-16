---
title: "Exporting from a DLL | Microsoft Docs"
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
  - "exporting DLLs [C++], about exporting from DLLs"
  - "exporting functions [C++], DLLs (exporting from)"
  - "exporting DLLs [C++]"
  - "DLLs [C++], exporting from"
  - "DLL exports [C++]"
  - "functions [C++], exporting"
  - "exports table [C++]"
ms.assetid: a08f86c4-5996-460b-ae54-da2b764045f0
caps.latest.revision: 7
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
# Exporting from a DLL
A DLL file has a layout very similar to an .exe file, with one important difference — a DLL file contains an exports table. The exports table contains the name of every function that the DLL exports to other executables. These functions are the entry points into the DLL; only the functions in the exports table can be accessed by other executables. Any other functions in the DLL are private to the DLL. The exports table of a DLL can be viewed by using the [DUMPBIN](../build/reference/dumpbin-reference.md) tool with the /EXPORTS option.  
  
 You can export functions from a DLL using two methods:  
  
-   Create a module definition (.def) file and use the .def file when building the DLL. Use this approach if you want to [export functions from your DLL by ordinal rather than by name](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
-   Use the keyword **__declspec(dllexport)** in the function's definition.  
  
 When exporting functions with either method, make sure to use the [__stdcall](../cpp/stdcall.md) calling convention.  
  
## What do you want to do?  
  
-   [Export from a DLL using .def files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Export C++ functions for use in C-language executables](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Export functions from a DLL by ordinal rather than by name](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)  
  
-   [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Determine which linking method to use](../build/determining-which-linking-method-to-use.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## What do you want to know more about?  
  
-   [Importing into an application](../build/importing-into-an-application.md)  
  
-   [Importing and exporting inline functions](../build/importing-and-exporting-inline-functions.md)  
  
-   [Mutual imports](../build/mutual-imports.md)  
  
## See Also  
 [Importing and Exporting](../build/importing-and-exporting.md)