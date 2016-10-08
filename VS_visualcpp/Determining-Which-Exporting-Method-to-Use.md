---
title: "Determining Which Exporting Method to Use"
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
ms.assetid: 66d773ed-935c-45c2-ad03-1a060874b34d
caps.latest.revision: 13
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
# Determining Which Exporting Method to Use
You can export functions in either of two ways—a .def file or the `__declspec(dllexport)` keyword. To help you decide which way is better for your DLL, consider these questions:  
  
-   Do you plan to export more functions later?  
  
-   Is your DLL used only by applications that you can rebuild, or is it used by applications that you cannot rebuild—for example, applications that are created by third parties?  
  
## Pros and Cons of Using .def Files  
 Exporting functions in a .def file gives you control over the export ordinals. When you add an exported function to your DLL, you can assign it a higher ordinal value than any other exported function. When you do this, applications that use implicit linking do not have to relink with the import library that contains the new function. This is very convenient if you are designing a DLL for use by many applications because you can add new functionality and also ensure that it continues to work correctly with the applications that already rely on it. For example, the MFC DLLs are built by using .def files.  
  
 Another advantage to using a .def file is that you can use the `NONAME` attribute to export a function. This puts only the ordinal in the exports table in the DLL. For DLLs that have a large number of exported functions, using the `NONAME` attribute can reduce the size of the DLL file. For information about how to write a module definition statement, see [Rules for Module-Definition Statements](../VS_visualcpp/Rules-for-Module-Definition-Statements.md). For information about ordinal export, see [Exporting Functions from a DLL by Ordinal Rather Than by Name](../VS_visualcpp/Exporting-Functions-from-a-DLL-by-Ordinal-Rather-Than-by-Name.md).  
  
 A disadvantage of using a .def file is that if you are exporting functions in a C++ file, you either have to put the decorated names in the .def file or define the exported functions by using extern "C" to avoid the name decoration that's done by the Visual C++ compiler.  
  
 If you put the decorated names in the .def file, you can obtain them by using the [DUMPBIN](../VS_visualcpp/DUMPBIN-Reference.md) tool or by using the linker [/MAP](../VS_visualcpp/-MAP--Generate-Mapfile-.md) option. The decorated names that are produced by the compiler are compiler-specific; therefore, if you put the decorated names that are produced by the compiler into a .def file, the applications that link to the DLL must also be built by using the same version of the compiler so that the decorated names in the calling application match the exported names in the .def file of the DLL.  
  
## Pros and Cons of Using __declspec(dllexport)  
 Using `__declspec(dllexport)` is convenient because you do not have to worry about maintaining a .def file and obtaining the decorated names of the exported functions. However, the usefulness of this way of exporting is limited by the number of linked applications that you are willing to rebuild. If you rebuild the DLL with new exports, you also have to rebuild the applications because the decorated names for exported C++ functions might change if you use a different version of the compiler to rebuild it.  
  
### What do you want to do?  
  
-   [Export from a DLL using .DEF files](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../VS_visualcpp/Exporting-and-Importing-Using-AFX_EXT_CLASS.md)  
  
-   [Export C++ functions for use in C-language executables](../VS_visualcpp/Exporting-C---Functions-for-Use-in-C-Language-Executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../VS_visualcpp/Exporting-C-Functions-for-Use-in-C-or-C---Language-Executables.md)  
  
-   [Import into an application using __declspec(dllimport)](../VS_visualcpp/Importing-into-an-Application-Using-__declspec-dllimport-.md)  
  
-   [Initialize a DLL](../VS_visualcpp/Initializing-a-DLL.md)  
  
### What do you want to know more about?  
  
-   [Importing and exporting inline functions](../VS_visualcpp/Importing-and-Exporting-Inline-Functions.md)  
  
-   [Mutual imports](../VS_visualcpp/Mutual-Imports.md)  
  
-   [Decorated names](../VS_visualcpp/Decorated-Names.md)  
  
## See Also  
 [Exporting from a DLL](../VS_visualcpp/Exporting-from-a-DLL.md)