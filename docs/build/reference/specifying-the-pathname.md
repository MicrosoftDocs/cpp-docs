---
description: "Learn more about: Specifying the Pathname"
title: "Specifying the Pathname"
ms.date: "11/04/2016"
helpviewer_keywords: ["names [C++], compiler output files", "cl.exe compiler, output files", "output files, specifying pathnames"]
ms.assetid: 7a6595ce-3383-44ae-957a-466bfa29c343
---
# Specifying the Pathname

Each output-file option accepts a *pathname* argument that can specify a location and a name for the output file. The argument can include a drive name, directory, and file name. No space is allowed between the option and the argument.

If *pathname* includes a file name without an extension, the compiler gives the output a default extension. If *pathname* includes a directory but no file name, the compiler creates a file with a default name in the specified directory. The default name is based on the base name of the source file and a default extension based on the type of the output file. If you leave off *pathname* entirely, the compiler creates a file with a default name in a default directory.

Alternatively, the *pathname* argument can be a device name (AUX, CON, PRN, or NUL) rather than a file name. Do not use a space between the option and the device name or a colon as part of the device name.

|Device name|Represents|
|-----------------|----------------|
|AUX|Auxiliary device|
|CON|Console|
|PRN|Printer|
|NUL|Null device (no file created)|

## Example

The following command line sends a mapfile to the printer:

```
CL /FmPRN HELLO.CPP
```

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
