---
description: "Learn more about: Using an Import Library and Export File"
title: "Using an Import Library and Export File"
ms.date: "11/04/2016"
helpviewer_keywords: ["circular exports", "import libraries, using", "export files"]
ms.assetid: 2634256a-8aa5-4495-8c9e-6cde10e4ed76
---
# Using an Import Library and Export File

When a program (either an executable file or a DLL) exports to another program that it also imports from, or if more than two programs both export to and import from each other, the commands to link these programs must accommodate circular exports.

In a situation without circular exports, when linking a program that uses exports from another program, you must specify the import library for the exporting program. The import library for the exporting program is created when you link that exporting program. Therefore, you must link the exporting program before the importing program. For example, if TWO.dll imports from ONE.dll, you must first link ONE.dll and get the import library ONE.lib. Then, you specify ONE.lib when linking TWO.dll. When the linker creates TWO.dll, it also creates its import library, TWO.lib. Use TWO.lib when linking programs that import from TWO.dll.

However, in a circular export situation, it is not possible to link all of the interdependent programs using import libraries from the other programs. In the example discussed earlier, if TWO.dll also exports to ONE.dll, the import library for TWO.dll won't exist yet when ONE.dll is linked. When circular exports exist, you must use LIB to create an import library and export file for one of the programs.

To begin, choose one of the programs on which to run LIB. In the LIB command, list all objects and libraries for the program and specify /DEF. If the program uses a .def file or /EXPORT specifications, specify these as well.

After you create the import library (.lib) and the export file (.exp) for the program, you use the import library when linking the other program or programs. LINK creates an import library for each exporting program it builds. For example, if you run LIB on the objects and exports for ONE.dll, you create ONE.lib and ONE.exp. You can now use ONE.lib when linking TWO.dll; this step also creates the import library TWO.lib.

Finally, link the program you began with. In the LINK command, specify the objects and libraries for the program, the .exp file that LIB created for the program, and the import library or libraries for the exports used by the program. To continue the example, the LINK command for ONE.dll contains ONE.exp and TWO.lib, as well as the objects and libraries that go into ONE.dll. Do not specify the .def file or /EXPORT specifications in the LINK command; these are not needed, because the export definitions are contained in the .exp file. When you link using an .exp file, LINK does not create an import library, because it assumes that one was created when the .exp file was created.

## See also

[Working with Import Libraries and Export Files](working-with-import-libraries-and-export-files.md)
