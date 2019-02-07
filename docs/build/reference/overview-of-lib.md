---
title: "Overview of LIB"
ms.date: "11/04/2016"
f1_keywords: ["Lib"]
helpviewer_keywords: ["LIB [C++], modes"]
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
---
# Overview of LIB

LIB creates standard libraries, import libraries, and export files you can use with [LINK](../../build/reference/linker-options.md) when building a program. LIB runs from a command prompt.

You can use LIB in the following modes:

- [Building or modifying a COFF library](../../build/reference/managing-a-library.md)

- [Extracting a member object to a file](../../build/reference/extracting-a-library-member.md)

- [Creating an export file and an import library](../../build/reference/working-with-import-libraries-and-export-files.md)

These modes are mutually exclusive; you can use LIB in only one mode at a time.

## Lib Options

The following table lists the options for lib.exe, with a link to more information.

|Option|Description|
|-|-|
|**/DEF**|Create an import library and an export file.<br/><br/>For more information see [Building an Import Library and Export File](../../build/reference/building-an-import-library-and-export-file.md).|
|**/ERRORREPORT**|   Send information to Microsoft about internal errors with lib.exe.<br/><br/>For more information see [Running LIB](../../build/reference/running-lib.md).|
|**/EXPORT**|   Exports a function from your program.<br/><br/>For more information see [Building an Import Library and Export File](../../build/reference/building-an-import-library-and-export-file.md).|
|**/EXTRACT**|   Create an object (.obj) file that contains a copy of a member of an existing library.<br/><br/>For more information see [Extracting a Library Member](../../build/reference/extracting-a-library-member.md).|
|**/INCLUDE**|   Adds a symbol to the symbol table.<br/><br/>For more information see [Building an Import Library and Export File](../../build/reference/building-an-import-library-and-export-file.md).|
|**/LIBPATH**|   Overrides the environment library path.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/LIST**|   Displays information about the output library to standard output.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/LTCG**|   Causes the library to be built using link-time code generation.<br/><br/>For more information see [Running LIB](../../build/reference/running-lib.md).|
|**/MACHINE**|   Specifies the target platform for the program.<br/><br/>For more information see [Running LIB](../../build/reference/running-lib.md).|
|**/NAME**|   When building an import library, specifies the name of the DLL for which the import library is being built.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/NODEFAULTLIB**|   Removes one or more default libraries from the list of libraries it searches when resolving external references.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/NOLOGO**|   Suppresses display of the LIB copyright message and version number and prevents echoing of command files.<br/><br/>For more information see [Running LIB](../../build/reference/running-lib.md).|
|**/OUT**|   Overrides the default output filename.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/REMOVE**|   Omits an object from the output library.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/SUBSYSTEM**|   Tells the operating system how to run a program created by linking to the output library.<br/><br/>For more information see [Managing a Library](../../build/reference/managing-a-library.md).|
|**/VERBOSE**|   Displays details about the progress of the session, including names of the .obj files being added.<br/><br/>For more information see [Running LIB](../../build/reference/running-lib.md).|
|**/WX**|   Treat warnings as errors.<br/><br/>For more information see [Running LIB](../../build/reference/running-lib.md).|

## See also

- [LIB Reference](../../build/reference/lib-reference.md)
- [LIB Input Files](../../build/reference/lib-input-files.md)
- [LIB Output Files](../../build/reference/lib-output-files.md)
- [Other LIB Output](../../build/reference/other-lib-output.md)
- [Structure of a Library](../../build/reference/structure-of-a-library.md)
