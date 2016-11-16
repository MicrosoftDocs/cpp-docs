---
title: "Exporting from a DLL Using DEF Files | Microsoft Docs"
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
  - "def files [C++], exporting from DLLs"
  - ".def files [C++], exporting from DLLs"
  - "exporting DLLs [C++], DEF files"
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
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
# Exporting from a DLL Using DEF Files
A module-definition (.def) file is a text file containing one or more module statements that describe various attributes of a DLL. If you are not using the **__declspec(dllexport)** keyword to export the DLL's functions, the DLL requires a .def file.  
  
 A minimal .def file must contain the following module-definition statements:  
  
-   The first statement in the file must be the LIBRARY statement. This statement identifies the .def file as belonging to a DLL. The LIBRARY statement is followed by the name of the DLL. The linker places this name in the DLL's import library.  
  
-   The EXPORTS statement lists the names and, optionally, the ordinal values of the functions exported by the DLL. You assign the function an ordinal value by following the function's name with an at sign (@) and a number. When you specify ordinal values, they must be in the range 1 through N, where N is the number of functions exported by the DLL. If you want to export functions by ordinal, see [Exporting Functions from a DLL by Ordinal Rather Than by Name](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) as well as this topic.  
  
 For example, a DLL that contains the code to implement a binary search tree might look like the following:  
  
```  
LIBRARY   BTREE  
EXPORTS  
   Insert   @1  
   Delete   @2  
   Member   @3  
   Min   @4  
```  
  
 If you use the [MFC DLL Wizard](../mfc/reference/mfc-dll-wizard.md) to create an MFC DLL, the wizard creates a skeleton .def file for you and automatically adds it to your project. Add the names of the functions to be exported to this file. For non-MFC DLLs, you must create the .def file yourself and add it to your project.  
  
 If you are exporting functions in a C++ file, you have to either place the decorated names in the .def file or define your exported functions with standard C linkage by using extern "C". If you need to place the decorated names in the .def file, you can obtain them by using the [DUMPBIN](../build/reference/dumpbin-reference.md) tool or by using the linker [/MAP](../build/reference/map-generate-mapfile.md) option. Note that the decorated names produced by the compiler are compiler specific. If you place the decorated names produced by the Visual C++ compiler into a .def file, applications that link to your DLL must also be built using the same version of Visual C++ so that the decorated names in the calling application match the exported names in the DLL's .def file.  
  
 If you are building an [extension DLL](../build/extension-dlls-overview.md), and exporting using a .def file, place the following code at the beginning and end of your header files that contain the exported classes:  
  
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
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Export C++ functions for use in C-language executables](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
## What do you want to know more about?  
  
-   [.def files](../build/reference/module-definition-dot-def-files.md)  
  
-   [Rules for module-definition statements](../build/reference/rules-for-module-definition-statements.md)  
  
-   [Decorated names](../build/reference/decorated-names.md)  
  
-   [Importing and exporting inline functions](../build/importing-and-exporting-inline-functions.md)  
  
-   [Mutual imports](../build/mutual-imports.md)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)