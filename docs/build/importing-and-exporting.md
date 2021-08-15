---
description: "Learn more about: Importing and Exporting"
title: "Importing and Exporting"
ms.date: "05/06/2019"
helpviewer_keywords: ["DLLs [C++], importing", "exporting DLLs [C++]", "importing DLLs [C++]", "DLLs [C++], exporting from", "__declspec(dllimport) keyword [C++]"]
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
---
# Importing and Exporting

You can import public symbols into an application or export functions from a DLL using two methods:

- Use a module definition (.def) file when building the DLL

- Use the keywords **`__declspec(dllimport)`** or **`__declspec(dllexport)`** in a function definition in the main application

## Using a .def file

A module-definition (.def) file is a text file containing one or more module statements that describe various attributes of a DLL. If you do not use **`__declspec(dllimport)`** or **`__declspec(dllexport)`** to export a DLL's functions, the DLL requires a .def file.

You can use .def files to [import into an application](importing-using-def-files.md) or to [export from a DLL](exporting-from-a-dll-using-def-files.md).

## Using __declspec

You do not need to use **`__declspec(dllimport)`** for your code to compile correctly, but doing so allows the compiler to generate better code. The compiler is able to generate better code because it can determine whether a function exists in a DLL or not, which allows the compiler to produce code that skips a level of indirection that would normally be present in a function call that crossed a DLL boundary. However, you must use **`__declspec(dllimport)`** to import variables used in a DLL.

With the proper .def file EXPORTS section, **`__declspec(dllexport)`** is not required. **`__declspec(dllexport)`** was added to provide an easy way to export functions from an .exe or .dll file without using a .def file.

The Win32 Portable Executable format is designed to minimize the number of pages that must be touched to fix imports. To do this, it places all the import addresses for any program in one place called the Import Address Table. This allows the loader to modify only one or two pages when accessing these imports.

## What do you want to do?

- [Import into an Application](importing-into-an-application-using-declspec-dllimport.md)

- [Export from a DLL](exporting-from-a-dll.md)

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
