---
title: "Importing and Exporting"
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
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
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
# Importing and Exporting
You can import public symbols into an application or export functions from a DLL using two methods:  
  
-   Use a module definition (.def) file when building the DLL  
  
-   Use the keywords **__declspec(dllimport)** or **__declspec(dllexport)** in a function definition in the main application  
  
## Using a .def file  
 A module-definition (.def) file is a text file containing one or more module statements that describe various attributes of a DLL. If you do not use **__declspec(dllimport)** or **__declspec(dllexport)** to export a DLL's functions, the DLL requires a .def file.  
  
 You can use .def files to [import into an application](../VS_visualcpp/Importing-Using-DEF-Files.md) or to [export from a DLL](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md).  
  
## Using __declspec  
 Visual C++ uses **__declspec(dllimport)** and **__declspec(dllexport)** to replace the **__export** keyword previously used in 16-bit versions of Visual C++.  
  
 You do not need to use **__declspec(dllimport)** for your code to compile correctly, but doing so allows the compiler to generate better code. The compiler is able to generate better code because it can determine whether a function exists in a DLL or not, which allows the compiler to produce code that skips a level of indirection that would normally be present in a function call that crossed a DLL boundary. However, you must use **__declspec(dllimport)** to import variables used in a DLL.  
  
 With the proper .def file EXPORTS section, **__declspec(dllexport)** is not required. **__declspec(dllexport)** was added to provide an easy way to export functions from an .exe or .dll file without using a .def file.  
  
 The Win32 Portable Executable format is designed to minimize the number of pages that must be touched to fix imports. To do this, it places all the import addresses for any program in one place called the Import Address Table. This allows the loader to modify only one or two pages when accessing these imports.  
  
## What do you want to do?  
  
-   [Import into an Application](../VS_visualcpp/Importing-into-an-Application-Using-__declspec-dllimport-.md)  
  
-   [Export from a DLL](../VS_visualcpp/Exporting-from-a-DLL.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)