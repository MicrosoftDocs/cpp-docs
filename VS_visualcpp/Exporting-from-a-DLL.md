---
title: "Exporting from a DLL"
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
ms.assetid: a08f86c4-5996-460b-ae54-da2b764045f0
caps.latest.revision: 7
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
# Exporting from a DLL
A DLL file has a layout very similar to an .exe file, with one important difference — a DLL file contains an exports table. The exports table contains the name of every function that the DLL exports to other executables. These functions are the entry points into the DLL; only the functions in the exports table can be accessed by other executables. Any other functions in the DLL are private to the DLL. The exports table of a DLL can be viewed by using the [DUMPBIN](../VS_visualcpp/DUMPBIN-Reference.md) tool with the /EXPORTS option.  
  
 You can export functions from a DLL using two methods:  
  
-   Create a module definition (.def) file and use the .def file when building the DLL. Use this approach if you want to [export functions from your DLL by ordinal rather than by name](../VS_visualcpp/Exporting-Functions-from-a-DLL-by-Ordinal-Rather-Than-by-Name.md).  
  
-   Use the keyword **__declspec(dllexport)** in the function's definition.  
  
 When exporting functions with either method, make sure to use the [__stdcall](../VS_visualcpp/__stdcall.md) calling convention.  
  
## What do you want to do?  
  
-   [Export from a DLL using .def files](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../VS_visualcpp/Exporting-and-Importing-Using-AFX_EXT_CLASS.md)  
  
-   [Export C++ functions for use in C-language executables](../VS_visualcpp/Exporting-C---Functions-for-Use-in-C-Language-Executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../VS_visualcpp/Exporting-C-Functions-for-Use-in-C-or-C---Language-Executables.md)  
  
-   [Export functions from a DLL by ordinal rather than by name](../VS_visualcpp/Exporting-Functions-from-a-DLL-by-Ordinal-Rather-Than-by-Name.md)  
  
-   [Determine which exporting method to use](../VS_visualcpp/Determining-Which-Exporting-Method-to-Use.md)  
  
-   [Determine which linking method to use](../VS_visualcpp/Determining-Which-Linking-Method-to-Use.md)  
  
-   [Initialize a DLL](../VS_visualcpp/Initializing-a-DLL.md)  
  
## What do you want to know more about?  
  
-   [Importing into an application](../VS_visualcpp/Importing-into-an-Application.md)  
  
-   [Importing and exporting inline functions](../VS_visualcpp/Importing-and-Exporting-Inline-Functions.md)  
  
-   [Mutual imports](../VS_visualcpp/Mutual-Imports.md)  
  
## See Also  
 [Importing and Exporting](../VS_visualcpp/Importing-and-Exporting.md)