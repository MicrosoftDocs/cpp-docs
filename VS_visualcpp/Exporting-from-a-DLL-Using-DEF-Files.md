---
title: "Exporting from a DLL Using DEF Files"
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
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
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
# Exporting from a DLL Using DEF Files
A module-definition (.def) file is a text file containing one or more module statements that describe various attributes of a DLL. If you are not using the **__declspec(dllexport)** keyword to export the DLL's functions, the DLL requires a .def file.  
  
 A minimal .def file must contain the following module-definition statements:  
  
-   The first statement in the file must be the LIBRARY statement. This statement identifies the .def file as belonging to a DLL. The LIBRARY statement is followed by the name of the DLL. The linker places this name in the DLL's import library.  
  
-   The EXPORTS statement lists the names and, optionally, the ordinal values of the functions exported by the DLL. You assign the function an ordinal value by following the function's name with an at sign (@) and a number. When you specify ordinal values, they must be in the range 1 through N, where N is the number of functions exported by the DLL. If you want to export functions by ordinal, see [Exporting Functions from a DLL by Ordinal Rather Than by Name](../VS_visualcpp/Exporting-Functions-from-a-DLL-by-Ordinal-Rather-Than-by-Name.md) as well as this topic.  
  
 For example, a DLL that contains the code to implement a binary search tree might look like the following:  
  
```  
LIBRARY   BTREE  
EXPORTS  
   Insert   @1  
   Delete   @2  
   Member   @3  
   Min   @4  
```  
  
 If you use the [MFC DLL Wizard](../VS_visualcpp/MFC-DLL-Wizard.md) to create an MFC DLL, the wizard creates a skeleton .def file for you and automatically adds it to your project. Add the names of the functions to be exported to this file. For non-MFC DLLs, you must create the .def file yourself and add it to your project.  
  
 If you are exporting functions in a C++ file, you have to either place the decorated names in the .def file or define your exported functions with standard C linkage by using extern "C". If you need to place the decorated names in the .def file, you can obtain them by using the [DUMPBIN](../VS_visualcpp/DUMPBIN-Reference.md) tool or by using the linker [/MAP](../VS_visualcpp/-MAP--Generate-Mapfile-.md) option. Note that the decorated names produced by the compiler are compiler specific. If you place the decorated names produced by the Visual C++ compiler into a .def file, applications that link to your DLL must also be built using the same version of Visual C++ so that the decorated names in the calling application match the exported names in the DLL's .def file.  
  
 If you are building an [extension DLL](../VS_visualcpp/Extension-DLLs--Overview.md), and exporting using a .def file, place the following code at the beginning and end of your header files that contain the exported classes:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
 These lines ensure that MFC variables that are used internally or that are added to your classes are exported (or imported) from your extension DLL. For example, when deriving a class using `DECLARE_DYNAMIC`, the macro expands to add a `CRuntimeClass` member variable to your class. Leaving out these four lines might cause your DLL to compile or link incorrectly or cause an error when the client application links to the DLL.  
  
 When building the DLL, the linker uses the .def file to create an export (.exp) file and an import library (.lib) file. The linker then uses the export file to build the DLL file. Executables that implicitly link to the DLL link to the import library when they are built.  
  
 Note that MFC itself uses .def files to export functions and classes from the MFCx0.dll.  
  
## What do you want to do?  
  
-   [Export from a DLL using __declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../VS_visualcpp/Exporting-and-Importing-Using-AFX_EXT_CLASS.md)  
  
-   [Export C++ functions for use in C-language executables](../VS_visualcpp/Exporting-C---Functions-for-Use-in-C-Language-Executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../VS_visualcpp/Exporting-C-Functions-for-Use-in-C-or-C---Language-Executables.md)  
  
-   [Determine which exporting method to use](../VS_visualcpp/Determining-Which-Exporting-Method-to-Use.md)  
  
-   [Import into an application using __declspec(dllimport)](../VS_visualcpp/Importing-into-an-Application-Using-__declspec-dllimport-.md)  
  
-   [Initialize a DLL](../VS_visualcpp/Initializing-a-DLL.md)  
  
## What do you want to know more about?  
  
-   [.def files](../VS_visualcpp/Module-Definition--.Def--Files.md)  
  
-   [Rules for module-definition statements](../VS_visualcpp/Rules-for-Module-Definition-Statements.md)  
  
-   [Decorated names](../VS_visualcpp/Decorated-Names.md)  
  
-   [Importing and exporting inline functions](../VS_visualcpp/Importing-and-Exporting-Inline-Functions.md)  
  
-   [Mutual imports](../VS_visualcpp/Mutual-Imports.md)  
  
## See Also  
 [Exporting from a DLL](../VS_visualcpp/Exporting-from-a-DLL.md)