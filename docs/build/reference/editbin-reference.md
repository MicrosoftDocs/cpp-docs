---
description: "Learn more about: EDITBIN Reference"
title: "EDITBIN Reference"
ms.date: "11/04/2016"
f1_keywords: ["editbin"]
helpviewer_keywords: ["binary data, editing", "object files, modifying", "EDITBIN program", "COFF files, editing"]
ms.assetid: efdda03b-3dfc-4d31-90e6-caf5b3977914
---
# EDITBIN Reference

The Microsoft COFF Binary File Editor (EDITBIN.EXE) modifies Common Object File Format (COFF) binary files. You can use EDITBIN to modify object files, executable files, and dynamic-link libraries (DLL).

> [!NOTE]
> You can start this tool only from the Visual Studio command prompt. You cannot start it from a system command prompt or from File Explorer.

EDITBIN is not available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option. Any modifications to binary files produced with /GL will have to be achieved by recompiling and linking.

- [EDITBIN command line](editbin-command-line.md)

- [EDITBIN options](editbin-options.md)

## See also

[Additional MSVC Build Tools](c-cpp-build-tools.md)
