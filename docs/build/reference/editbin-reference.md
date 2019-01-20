---
title: "EDITBIN Reference"
ms.date: "11/04/2016"
f1_keywords: ["editbin"]
helpviewer_keywords: ["binary data, editing", "object files, modifying", "EDITBIN program", "COFF files, editing"]
ms.assetid: efdda03b-3dfc-4d31-90e6-caf5b3977914
---
# EDITBIN Reference

The Microsoft COFF Binary File Editor (EDITBIN.EXE) modifies Common Object File Format (COFF) binary files. You can use EDITBIN to modify object files, executable files, and dynamic-link libraries (DLL).

> [!NOTE]
>  You can start this tool only from the Visual Studio command prompt. You cannot start it from a system command prompt or from File Explorer.

EDITBIN is not available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option. Any modifications to binary files produced with /GL will have to be achieved by recompiling and linking.

- [EDITBIN command line](../../build/reference/editbin-command-line.md)

- [EDITBIN options](../../build/reference/editbin-options.md)

## See also

- [C/C++ Build Tools](../../build/reference/c-cpp-build-tools.md)
