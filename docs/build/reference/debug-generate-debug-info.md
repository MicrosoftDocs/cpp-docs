---
description: "Learn more about: /DEBUG (Generate debug info)"
title: "/DEBUG (Generate Debug Info)"
ms.date: 12/05/2022
f1_keywords: ["VC.Project.VCLinkerTool.GenerateDebugInformation", "/debug"]
helpviewer_keywords: ["DEBUG linker option", "/DEBUG linker option", "-DEBUG linker option", "PDB files", "debugging [C++], debug information files", "generate debug info linker option", "pdb files, generating debug info", ".pdb files, generating debug info", "debugging [C++], linker option", "program databases [C++]"]
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
---
# `/DEBUG` (Generate debug info)

The **`/DEBUG`** linker option creates a debugging information file for the executable.

## Syntax

> **`/DEBUG`**\[**`:`**{**`FASTLINK`**|**`FULL`**|**`NONE`**}]

## Remarks

The **`/DEBUG`** option puts the debugging information from linked object and library files into a program database (PDB) file. It updates the PDB during subsequent builds of the program.

An executable (an EXE or DLL file) created for debugging contains the name and path of the corresponding PDB. The debugger reads the embedded name and uses the PDB when you debug the program. The linker uses the base name of the program and the extension *`.pdb`* to name the program database, and embeds the path where it was created. To override this default, set the [`/PDB`](pdb-use-program-database.md) option and specify a different file name.

The **`/DEBUG:FASTLINK`** option is available in Visual Studio 2017 and later. This option generates a limited PDB that indexes into the debug information in the object files and libraries used to build the executable instead of making a full copy. You can only use this limited PDB to debug from the computer where the binary and its libraries were built. If you deploy the binary elsewhere, you may debug it remotely from the build computer, but not directly on the test computer. In Visual Studio 2017, this option can sometimes greatly improve link times compared with **`/DEBUG:FULL`**. In Visual Studio 2019 and later, **`/DEBUG:FULL`** is faster than in earlier versions. Now, **`/DEBUG:FASTLINK`** isn't always faster than **`/DEBUG:FULL`**, and it's rarely more than twice as fast.

A **`/DEBUG:FASTLINK`** PDB can be converted to a full PDB that you can deploy to a test machine for local debugging. In Visual Studio, use the **Property Pages** dialog as described below to create a full PDB for the project or solution. In a developer command prompt, you can use the `mspdbcmf.exe` tool to create a full PDB.

The **`/DEBUG:FULL`** option moves all private symbol information from individual compilation products (object files and libraries) into a single PDB, and can be the most time-consuming part of the link. However, the full PDB can be used to debug the executable when no other build products are available, such as when the executable is deployed.

The **`/DEBUG:NONE`** option doesn't generate a PDB.

In Visual Studio 2015 and earlier versions, when you specify **`/DEBUG`** with no extra arguments, the linker defaults to **`/DEBUG:FULL`** for command line and makefile builds, for release builds in the Visual Studio IDE, and for both debug and release builds. Beginning in Visual Studio 2017, the build system in the IDE defaults to **`/DEBUG:FASTLINK`** when you specify the **`/DEBUG`** option for debug builds. Other defaults are unchanged to maintain backward compatibility.

The compiler's [`/Z7`](z7-zi-zi-debug-information-format.md) (C7 Compatible) option causes the compiler to leave the debugging information in the object (OBJ) files. You can also use the [`/Zi`](z7-zi-zi-debug-information-format.md) (Program Database) compiler option to store the debugging information in a PDB for the OBJ file. The linker looks for the object's PDB first in the absolute path written in the OBJ file, and then in the directory that contains the OBJ file. You can't specify an object's PDB file name or location to the linker.

[`/INCREMENTAL`](incremental-link-incrementally.md) is implied when **`/DEBUG`** is specified.

**`/DEBUG`** changes the defaults for the [`/OPT`](opt-optimizations.md) option from **`REF`** to **`NOREF`** and from **`ICF`** to **`NOICF`**, so if you want the original defaults, you must explicitly specify **`/OPT:REF`** or **`/OPT:ICF`** after the **`/DEBUG`** option.

It isn't possible to create an EXE or DLL that contains debug information. Debug information is always placed in an OBJ or PDB file.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Linker** > **Debugging** property page.

1. Modify the **Generate Debug Info** property to enable or disable PDB generation. This property enables **`/DEBUG:FASTLINK`** by default in Visual Studio 2017 and later.

1. Modify the **Generate Full Program Database File** property to enable **`/DEBUG:FULL`** for full PDB generation for every incremental build.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
