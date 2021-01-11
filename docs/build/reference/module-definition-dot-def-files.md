---
description: "Learn more about: Module-Definition (.Def) Files"
title: "Module-Definition (.Def) Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["def files", "module definition files", ".def files"]
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
---
# Module-Definition (.Def) Files

Module-definition (.def) files provide the linker with information about exports, attributes, and other information about the program to be linked. A .def file is most useful when building a DLL. Because there are [MSVC Linker Options](linker-options.md) that can be used instead of module-definition statements, .def files are generally not necessary. You can also use [__declspec(dllexport)](../exporting-from-a-dll-using-declspec-dllexport.md) as a way to specify exported functions.

You can invoke a .def file during the linker phase with the [/DEF (Specify Module-Definition File)](def-specify-module-definition-file.md) linker option.

If you are building an .exe file that has no exports, using a .def file will make your output file larger and slower loading.

For an example, see [Exporting from a DLL Using DEF Files](../exporting-from-a-dll-using-def-files.md).

See the following sections for more information:

- [Rules for Module-Definition Statements](rules-for-module-definition-statements.md)

- [EXPORTS](exports.md)

- [HEAPSIZE](heapsize.md)

- [LIBRARY](library.md)

- [NAME](name-c-cpp.md)

- [SECTIONS](sections-c-cpp.md)

- [STACKSIZE](stacksize.md)

- [STUB](stub.md)

- [VERSION](version-c-cpp.md)

- [Reserved words](reserved-words.md)

## See also

[C/C++ Building Reference](c-cpp-building-reference.md)<br/>
[MSVC Linker Options](linker-options.md)
