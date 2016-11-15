---
title: "Determining Which Exporting Method to Use | Microsoft Docs"
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
  - "__declspec(dllexport) keyword [C++]"
  - "exporting DLLs [C++], method comparison"
  - "def files [C++], exporting from DLLs"
  - ".def files [C++], exporting from DLLs"
ms.assetid: 66d773ed-935c-45c2-ad03-1a060874b34d
caps.latest.revision: 13
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
# Determining Which Exporting Method to Use
You can export functions in either of two ways—a .def file or the `__declspec(dllexport)` keyword. To help you decide which way is better for your DLL, consider these questions:  
  
-   Do you plan to export more functions later?  
  
-   Is your DLL used only by applications that you can rebuild, or is it used by applications that you cannot rebuild—for example, applications that are created by third parties?  
  
## Pros and Cons of Using .def Files  
 Exporting functions in a .def file gives you control over the export ordinals. When you add an exported function to your DLL, you can assign it a higher ordinal value than any other exported function. When you do this, applications that use implicit linking do not have to relink with the import library that contains the new function. This is very convenient if you are designing a DLL for use by many applications because you can add new functionality and also ensure that it continues to work correctly with the applications that already rely on it. For example, the MFC DLLs are built by using .def files.  
  
 Another advantage to using a .def file is that you can use the `NONAME` attribute to export a function. This puts only the ordinal in the exports table in the DLL. For DLLs that have a large number of exported functions, using the `NONAME` attribute can reduce the size of the DLL file. For information about how to write a module definition statement, see [Rules for Module-Definition Statements](../build/reference/rules-for-module-definition-statements.md). For information about ordinal export, see [Exporting Functions from a DLL by Ordinal Rather Than by Name](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
 A disadvantage of using a .def file is that if you are exporting functions in a C++ file, you either have to put the decorated names in the .def file or define the exported functions by using extern "C" to avoid the name decoration that's done by the Visual C++ compiler.  
  
 If you put the decorated names in the .def file, you can obtain them by using the [DUMPBIN](../build/reference/dumpbin-reference.md) tool or by using the linker [/MAP](../build/reference/map-generate-mapfile.md) option. The decorated names that are produced by the compiler are compiler-specific; therefore, if you put the decorated names that are produced by the compiler into a .def file, the applications that link to the DLL must also be built by using the same version of the compiler so that the decorated names in the calling application match the exported names in the .def file of the DLL.  
  
## Pros and Cons of Using __declspec(dllexport)  
 Using `__declspec(dllexport)` is convenient because you do not have to worry about maintaining a .def file and obtaining the decorated names of the exported functions. However, the usefulness of this way of exporting is limited by the number of linked applications that you are willing to rebuild. If you rebuild the DLL with new exports, you also have to rebuild the applications because the decorated names for exported C++ functions might change if you use a different version of the compiler to rebuild it.  
  
### What do you want to do?  
  
-   [Export from a DLL using .DEF files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Export C++ functions for use in C-language executables](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
### What do you want to know more about?  
  
-   [Importing and exporting inline functions](../build/importing-and-exporting-inline-functions.md)  
  
-   [Mutual imports](../build/mutual-imports.md)  
  
-   [Decorated names](../build/reference/decorated-names.md)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)