---
description: "Learn more about: Working with Import Libraries and Export Files"
title: "Working with Import Libraries and Export Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["LIB [C++], /DEF option", "import libraries", "LIB [C++], import libraries and export files", "export files", "import libraries, creating"]
ms.assetid: d8175596-9773-4c2f-959d-b05b065a5161
---
# Working with Import Libraries and Export Files

You can use LIB with the /DEF option to create an import library and an export file. LINK uses the export file to build a program that contains exports (usually a dynamic-link library (DLL)), and it uses the import library to resolve references to those exports in other programs.

Note that if you create your import library in a preliminary step, before creating your .dll, you must pass the same set of object files when building the .dll, as you passed when building the import library.

In most situations, you do not need to use LIB to create your import library. When you link a program (either an executable file or a DLL) that contains exports, LINK automatically creates an import library that describes the exports. Later, when you link a program that references those exports, you specify the import library.

However, when a DLL exports to a program that it also imports from, whether directly or indirectly, you must use LIB to create one of the import libraries. When LIB creates an import library, it also creates an export file. You must use the export file when linking one of the DLLs.

## See also

[LIB Reference](lib-reference.md)
