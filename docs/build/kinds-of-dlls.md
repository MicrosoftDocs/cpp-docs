---
description: "Learn more about: Kinds of DLLs"
title: "Kinds of DLLs"
ms.date: "05/06/2019"
helpviewer_keywords: ["MFC DLLs [C++], types", "DLLs [C++], types", "DLLs [C++], MFC"]
ms.assetid: f6a30db9-6138-4b2c-90cc-a17855e499a6
---
# Kinds of DLLs

This topic provides information to help you determine the kind of DLL to build.

## <a name="_core_the_different_kinds_of_dlls_available_with_visual_c.2b2b"></a> Different Kinds of DLLs Available

Using Visual Studio, you can build Win32 DLLs in C or C++ that do not use the Microsoft Foundation Class (MFC) library. You can create a non-MFC DLL project with the Win32 Application Wizard.

The MFC library itself is available, in either static link libraries or in a number of DLLs, with the MFC DLL Wizard. If your DLL is using MFC, Visual Studio supports three different DLL development scenarios:

- Building a regular MFC DLL that statically links MFC

- Building a regular MFC DLL that dynamically links MFC

- Building an MFC extension DLL, which always dynamically link MFC

### What do you want to know more about?

- [Non-MFC DLLs: Overview](non-mfc-dlls-overview.md)

- [Regular MFC DLLs statically linked to MFC](regular-dlls-statically-linked-to-mfc.md)

- [Regular MFC DLLs dynamically linked to MFC](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC extension DLLs: Overview](extension-dlls-overview.md)

- [Which kind of DLL to use](#_core_which_kind_of_dll_to_use)

## <a name="_core_which_kind_of_dll_to_use"></a> Deciding Which Kind of DLL to Use

If your DLL does not use MFC, use Visual Studio to build a non-MFC Win32 DLL. Linking your DLL to MFC (either statically or dynamically) takes up significant disk space and memory. You should not link to MFC unless your DLL actually uses MFC.

If your DLL will be using MFC, and will be used by either MFC or non-MFC applications, you must build either a regular MFC DLL that dynamically links to MFC or a regular MFC DLL that statically links to MFC. In most cases, you probably want to use a regular MFC DLL that dynamically links to MFC because the file size of the DLL will be much smaller and the savings in memory from using the shared version of MFC can be significant. If you statically link to MFC, the file size of your DLL will be larger and potentially take up extra memory because it loads its own private copy of the MFC library code.

Building a DLL that dynamically links to MFC is faster than building a DLL that statically links to MFC because it is not necessary to link MFC itself. This is especially true in debug builds where the linker must compact the debug information. By linking with a DLL that already contains the debug information, there is less debug information to compact within your DLL.

One disadvantage to dynamically linking to MFC is that you must distribute the shared DLLs Mfcx0.dll and Msvcrxx.dll (or similar files) with your DLL. The MFC DLLs are freely redistributable, but you still must install the DLLs in your setup program. In addition, you must ship the Msvcrxx.dll, which contains the C run-time library that is used both by your program and the MFC DLLs themselves.

If your DLL will only be used by MFC executables, you have a choice between building a regular MFC DLL or an MFC extension DLL. If your DLL implements reusable classes derived from the existing MFC classes or you need to pass MFC-derived objects between the application and the DLL, you must build an MFC extension DLL.

If your DLL dynamically links to MFC, the MFC DLLs might be redistributed with your DLL. This architecture is particularly useful for sharing the class library between multiple executable files to save disk space and minimize memory usage.

### What do you want to know more about?

- [Non-MFC DLLs: Overview](non-mfc-dlls-overview.md)

- [Regular MFC DLLs statically linked to MFC](regular-dlls-statically-linked-to-mfc.md)

- [Regular MFC DLLs dynamically linked to MFC](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC extension DLLs: Overview](extension-dlls-overview.md)

## See also

[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
