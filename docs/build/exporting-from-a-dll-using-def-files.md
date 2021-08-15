---
description: "Learn more about: Exporting from a DLL Using DEF Files"
title: "Exporting from a DLL Using DEF Files"
ms.date: "05/06/2019"
helpviewer_keywords: ["def files [C++], exporting from DLLs", ".def files [C++], exporting from DLLs", "exporting DLLs [C++], DEF files"]
ms.assetid: 9d31eda2-184e-47de-a2ee-a93ebd603f8e
---
# Exporting from a DLL Using DEF Files

A module-definition or DEF file (*.def) is a text file containing one or more module statements that describe various attributes of a DLL. If you are not using the **`__declspec(dllexport)`** keyword to export the DLL's functions, the DLL requires a DEF file.

A minimal DEF file must contain the following module-definition statements:

- The first statement in the file must be the LIBRARY statement. This statement identifies the DEF file as belonging to a DLL. The LIBRARY statement is followed by the name of the DLL. The linker places this name in the DLL's import library.

- The EXPORTS statement lists the names and, optionally, the ordinal values of the functions exported by the DLL. You assign the function an ordinal value by following the function's name with an at sign (@) and a number. When you specify ordinal values, they must be in the range 1 through N, where N is the number of functions exported by the DLL. If you want to export functions by ordinal, see [Exporting Functions from a DLL by Ordinal Rather Than by Name](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) as well as this topic.

For example, a DLL that contains the code to implement a binary search tree might look like the following:

```
LIBRARY   BTREE
EXPORTS
   Insert   @1
   Delete   @2
   Member   @3
   Min   @4
```

If you use the [MFC DLL Wizard](../mfc/reference/mfc-dll-wizard.md) to create an MFC DLL, the wizard creates a skeleton DEF file for you and automatically adds it to your project. Add the names of the functions to be exported to this file. For non-MFC DLLs, create the DEF file yourself and add it to your project. Then go to **Project** > **Properties** > **Linker** > **Input** > **Module Definition File** and enter the name of the DEF file. Repeat this step for each configuration and platform, or do it all at once by selecting **Configuration = All Configurations**, and **Platform = All Platforms**.

If you are exporting functions in a C++ file, you have to either place the decorated names in the DEF file or define your exported functions with standard C linkage by using extern "C". If you need to place the decorated names in the DEF file, you can obtain them by using the [DUMPBIN](../build/reference/dumpbin-reference.md) tool or by using the linker [/MAP](../build/reference/map-generate-mapfile.md) option. Note that the decorated names produced by the compiler are compiler specific. If you place the decorated names produced by the Microsoft C++ compiler (MSVC) into a DEF file, applications that link to your DLL must also be built using the same version of MSVC so that the decorated names in the calling application match the exported names in the DLL's DEF file.

> [!NOTE]
> A DLL built with Visual Studio 2015 can be consumed by applications built with Visual Studio 2017 or Visual Studio 2019.

If you are building an [extension DLL](../build/extension-dlls-overview.md), and exporting using a DEF file, place the following code at the beginning and end of your header files that contain the exported classes:

```
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

These lines ensure that MFC variables that are used internally or that are added to your classes are exported (or imported) from your MFC extension DLL. For example, when deriving a class using `DECLARE_DYNAMIC`, the macro expands to add a `CRuntimeClass` member variable to your class. Leaving out these four lines might cause your DLL to compile or link incorrectly or cause an error when the client application links to the DLL.

When building the DLL, the linker uses the DEF file to create an export (.exp) file and an import library (.lib) file. The linker then uses the export file to build the DLL file. Executables that implicitly link to the DLL link to the import library when they are built.

Note that MFC itself uses DEF files to export functions and classes from the MFCx0.dll.

## What do you want to do?

- [Export from a DLL using __declspec(dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Export and import using AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Export C++ functions for use in C-language executables](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Export C functions for use in C or C++-language executables](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determine which exporting method to use](determining-which-exporting-method-to-use.md)

- [Import into an application using __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Initialize a DLL](run-time-library-behavior.md#initializing-a-dll)

## What do you want to know more about?

- [.def files](reference/module-definition-dot-def-files.md)

- [Rules for module-definition statements](reference/rules-for-module-definition-statements.md)

- [Decorated names](reference/decorated-names.md)

- [Importing and exporting inline functions](importing-and-exporting-inline-functions.md)

- [Mutual imports](mutual-imports.md)

## See also

[Exporting from a DLL](exporting-from-a-dll.md)
