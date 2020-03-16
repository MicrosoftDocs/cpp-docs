---
title: "Overview of LIB"
description: "Overview of the use and options of the library tool, lib.exe."
ms.date: "02/09/2020"
helpviewer_keywords: ["LIB [C++], modes"]
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
---
# Overview of LIB

LIB (lib.exe) creates standard libraries, import libraries, and export files you can use with [LINK](linker-options.md) when building a program. LIB runs from a command prompt.

You can use LIB in the following modes:

- [Building or modifying a COFF library](managing-a-library.md)

- [Extracting a member object to a file](extracting-a-library-member.md)

- [Creating an export file and an import library](working-with-import-libraries-and-export-files.md)

These modes are mutually exclusive; you can use LIB in only one mode at a time.

## LIB options

The following table lists the options for lib.exe, with a link to more information.

|Option|Description|
|-|-|
|**/DEF**|Create an import library and an export file.<br/><br/>For more information, see [Building an Import Library and Export File](building-an-import-library-and-export-file.md).|
|**/ERRORREPORT**| Deprecated. For more information, see [Running LIB](running-lib.md).|
|**/EXPORT**|   Exports a function from your program.<br/><br/>For more information, see [Building an Import Library and Export File](building-an-import-library-and-export-file.md).|
|**/EXTRACT**|   Create an object (.obj) file that contains a copy of a member of an existing library.<br/><br/>For more information, see [Extracting a Library Member](extracting-a-library-member.md).|
|**/INCLUDE**|   Adds a symbol to the symbol table.<br/><br/>For more information, see [Building an Import Library and Export File](building-an-import-library-and-export-file.md).|
|**/LIBPATH**|   Overrides the environment library path.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/LINKREPRO**|   Creates artifacts needed to reproduce a lib.exe crash or internal error.<br/><br/>For more information, see [Running LIB](running-lib.md).|
|**/LINKREPROTARGET**|   Only generates the **/LINKREPRO** artifacts when lib.exe is used with a specified file.<br/><br/>For more information, see [Running LIB](running-lib.md).|
|**/LIST**|   Displays information about the output library to standard output.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/LTCG**|   Causes the library to be built using link-time code generation.<br/><br/>For more information, see [Running LIB](running-lib.md).|
|**/MACHINE**|   Specifies the target platform for the program.<br/><br/>For more information, see [Running LIB](running-lib.md).|
|**/NAME**|   When building an import library, specifies the name of the DLL for which the import library is being built.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/NODEFAULTLIB**|   Removes one or more default libraries from the list of libraries it searches when resolving external references.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/NOLOGO**|   Suppresses display of the LIB copyright message and version number and prevents echoing of command files.<br/><br/>For more information, see [Running LIB](running-lib.md).|
|**/OUT**|   Overrides the default output filename.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/REMOVE**|   Omits an object from the output library.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/SUBSYSTEM**|   Tells the operating system how to run a program created by linking to the output library.<br/><br/>For more information, see [Managing a Library](managing-a-library.md).|
|**/VERBOSE**|   Displays details about the progress of the session, including names of the .obj files being added.<br/><br/>For more information, see [Running LIB](running-lib.md).|
|**/WX**|   Treat warnings as errors.<br/><br/>For more information, see [Running LIB](running-lib.md).|

## See also

[LIB Reference](lib-reference.md)\
[LIB Input Files](lib-input-files.md)\
[LIB Output Files](lib-output-files.md)\
[Other LIB Output](other-lib-output.md)\
[Structure of a Library](structure-of-a-library.md)
