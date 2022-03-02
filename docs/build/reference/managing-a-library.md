---
description: "Learn more about: Managing a Library"
title: "Managing a Library"
ms.date: 03/02/2022
f1_keywords: ["VC.Project.VCLibrarianTool.OVERWRITEAllDefaultLibraries", "VC.Project.VCLibrarianTool.AdditionalDependencies", "VC.Project.VCLibrarianTool.RemoveObjects", "VC.Project.VCLibrarianTool.LibraryPaths", "VC.Project.VCLibrarianTool.OutputFile", "VC.Project.VCLibrarianTool.OVERWRITEDefaultLibraryNames", "VC.Project.VCLibrarianTool.AdditionalLibraryDirectories", "VC.Project.VCLibrarianTool.ListContentsFile", "VC.Project.VCLibrarianTool.ListContents", "VC.Project.VCLibrarianTool.SubSystemVersion", "VC.Project.VCLibrarianTool.OVERWRITEDefaultLibraryName", "VC.Project.VCLibrarianTool.SubSystem"]
helpviewer_keywords: ["/LIBPATH library manager option", "OUT library manager option", "CONVERT library manager option", "LIBPATH library manager option", "/LIST library manager option", "object files, building and modifying", "-LINK50COMPAT library manager option", "REMOVE library manager option", "SUBSYSTEM library manager option", "/LINK50COMPAT library manager option", "/OUT library manager option", "LIB [C++], managing COFF libraries", "-CONVERT library manager option", "LINK50COMPAT library manager option", "-OUT library manager option", "-REMOVE library manager option", "-LIST library manager option", "/SUBSYSTEM library manager option", "-SUBSYSTEM library manager option", "/REMOVE library manager option", "-LIBPATH library manager option", "object files", "LIST library manager option", "/CONVERT library manager option"]
ms.assetid: f56a8b85-fbdc-4c09-8d8e-00f0ffe1da53
---
# Managing a Library

The default mode for LIB is to build or modify a library of COFF objects. LIB runs in this mode when you don't specify **`/EXTRACT`** (to copy an object to a file) or **`/DEF`** (to build an import library).

To build a library from objects and/or libraries, use the following syntax:

> **`LIB`** [*`options...`*] *`files...`*

This command creates a library from one or more input files, *`files`*. The *`files`* can be COFF object files, 32-bit OMF object files, or existing COFF libraries. LIB creates one library that contains all objects in the specified files. If an input file is a 32-bit OMF object file, LIB converts it to COFF before building the library. LIB can't accept a 32-bit OMF object that's in a library created by the 16-bit version of LIB. You must first use the 16-bit LIB to extract the object; then you can use the extracted object file as input to the 32-bit LIB.

By default, LIB names the output file using the base name of the first object or library file and the extension *`.lib`*. The output file is put in the current directory. If a file already exists with the same name, the output file replaces the existing file. To preserve an existing library, use the **`/OUT`** option to specify a name for the output file.

The following options apply to building and modifying a library:

**`/LIBPATH:`** *`dir`*\
Overrides the environment library path and sets it to *`dir`*. For details, see the description of the LINK [`/LIBPATH`](libpath-additional-libpath.md) option.

**`/LIST`**\
Displays information about the output library to standard output. The output can be redirected to a file. You can use **`/LIST`** to determine the contents of an existing library without modifying it.

**`/NAME:`** *`filename`*\
When building an import library, *`filename`* specifies the name of the DLL for which the import library is being built.

**`/NODEFAULTLIB`**\
Removes one or more default libraries from the list of libraries it searches when resolving external references. For more information, see [`/NODEFAULTLIB`](nodefaultlib-ignore-libraries.md).

**`/OUT:`** *`filename`*\
Overrides the default output filename and replaces it with *`filename`*. By default, the output library is created in the current directory, with the base name of the first library or object file on the command line and the extension *`.lib`*.

**`/REMOVE:`** *`object`*\
Omits the specified *`object`* from the output library. LIB creates an output library by combining all objects (whether in object files or libraries), and then deleting any objects specified with **`/REMOVE`**.

**`/SUBSYSTEM:`**{**`CONSOLE`** \| **`EFI_APPLICATION`** \| **`EFI_BOOT_SERVICE_DRIVER`** \| **`EFI_ROM`** \| **`EFI_RUNTIME_DRIVER`** \| **`NATIVE`** \| **`POSIX`** \| **`WINDOWS`** \| **`WINDOWSCE`**}[,#[.##]]\
Tells the operating system how to run a program created by linking to the output library. For more information, see the description of the LINK [`/SUBSYSTEM`](subsystem-specify-subsystem.md) option.

LIB options specified on the command line aren't case sensitive.

You can use LIB to perform the following library-management tasks:

- To add objects to a library, specify the file name for the existing library and the filenames for the new objects.

- To combine libraries, specify the library file names. You can add objects and combine libraries with a single LIB command.

- To replace a library member with a new object, specify the library containing the member object to be replaced and the file name for the new object (or the library that contains it). When an object that has the same name exists in more than one input file, LIB puts the last object specified in the LIB command into the output library. When you replace a library member, be sure to specify the new object or library after the library that contains the old object.

- To delete a member from a library, use the /REMOVE option. LIB processes any specifications of /REMOVE after combining all input objects, regardless of command-line order.

> [!NOTE]
> You can't both delete a member and extract it to a file in the same step. You must first extract the member object using **`/EXTRACT`**, then run LIB again using **`/REMOVE`**. This behavior differs from that of the 16-bit LIB (for OMF libraries) provided in other Microsoft products.

## See also

[LIB Reference](lib-reference.md)
