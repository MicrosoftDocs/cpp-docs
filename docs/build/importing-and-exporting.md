---
title: "Importing and Exporting | Microsoft Docs"
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
  - "DLLs [C++], importing"
  - "exporting DLLs [C++]"
  - "importing DLLs [C++]"
  - "DLLs [C++], exporting from"
  - "__declspec(dllimport) keyword [C++]"
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
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
# Importing and Exporting
You can import public symbols into an application or export functions from a DLL using two methods:  
  
-   Use a module definition (.def) file when building the DLL  
  
-   Use the keywords **__declspec(dllimport)** or **__declspec(dllexport)** in a function definition in the main application  
  
## Using a .def file  
 A module-definition (.def) file is a text file containing one or more module statements that describe various attributes of a DLL. If you do not use **__declspec(dllimport)** or **__declspec(dllexport)** to export a DLL's functions, the DLL requires a .def file.  
  
 You can use .def files to [import into an application](../build/importing-using-def-files.md) or to [export from a DLL](../build/exporting-from-a-dll-using-def-files.md).  
  
## Using __declspec  
 Visual C++ uses **__declspec(dllimport)** and **__declspec(dllexport)** to replace the **__export** keyword previously used in 16-bit versions of Visual C++.  
  
 You do not need to use **__declspec(dllimport)** for your code to compile correctly, but doing so allows the compiler to generate better code. The compiler is able to generate better code because it can determine whether a function exists in a DLL or not, which allows the compiler to produce code that skips a level of indirection that would normally be present in a function call that crossed a DLL boundary. However, you must use **__declspec(dllimport)** to import variables used in a DLL.  
  
 With the proper .def file EXPORTS section, **__declspec(dllexport)** is not required. **__declspec(dllexport)** was added to provide an easy way to export functions from an .exe or .dll file without using a .def file.  
  
 The Win32 Portable Executable format is designed to minimize the number of pages that must be touched to fix imports. To do this, it places all the import addresses for any program in one place called the Import Address Table. This allows the loader to modify only one or two pages when accessing these imports.  
  
## What do you want to do?  
  
-   [Import into an Application](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Export from a DLL](../build/exporting-from-a-dll.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)