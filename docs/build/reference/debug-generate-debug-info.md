---
description: "Learn more about: /DEBUG (Generate Debug Info)"
title: "/DEBUG (Generate Debug Info)"
ms.date: "05/16/2019"
f1_keywords: ["VC.Project.VCLinkerTool.GenerateDebugInformation", "/debug"]
helpviewer_keywords: ["DEBUG linker option", "/DEBUG linker option", "-DEBUG linker option", "PDB files", "debugging [C++], debug information files", "generate debug info linker option", "pdb files, generating debug info", ".pdb files, generating debug info", "debugging [C++], linker option", "program databases [C++]"]
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
---
# /DEBUG (Generate Debug Info)

```
/DEBUG[:{FASTLINK|FULL|NONE}]
```

## Remarks

The **/DEBUG** option creates debugging information for the executable.

The linker puts the debugging information into a program database (PDB) file. It updates the PDB during subsequent builds of the program.

An executable (.exe file or DLL) created for debugging contains the name and path of the corresponding PDB. The debugger reads the embedded name and uses the PDB when you debug the program. The linker uses the base name of the program and the extension .pdb to name the program database, and embeds the path where it was created. To override this default, set [/PDB](pdb-use-program-database.md) and specify a different file name.

The **/DEBUG:FASTLINK** option is available in Visual Studio 2017 and later. This option leaves private symbol information in the individual compilation products used to build the executable. It generates a limited PDB that indexes into the debug information in the object files and libraries used to build the executable instead of making a full copy. This option can link from two to four times as fast as full PDB generation, and is recommended when you are debugging locally and have the build products available. This limited PDB can't be used for debugging when the required build products are not available, such as when the executable is deployed on another computer. In a developer command prompt, you can use the mspdbcmf.exe tool to generate a full PDB from this limited PDB. In Visual Studio, use the Project or Build menu items for generating a full PDB file to create a full PDB for the project or solution.

The **/DEBUG:FULL** option moves all private symbol information from individual compilation products (object files and libraries) into a single PDB, and can be the most time-consuming part of the link. However, the full PDB can be used to debug the executable when no other build products are available, such as when the executable is deployed.

The **/DEBUG:NONE** option does not generate a PDB.

When you specify **/DEBUG** with no additional options, the linker defaults to **/DEBUG:FULL** for command line and makefile builds, for release builds in the Visual Studio IDE, and for both debug and release builds in Visual Studio 2015 and earlier versions. Beginning in Visual Studio 2017, the build system in the IDE defaults to **/DEBUG:FASTLINK** when you specify the **/DEBUG** option for debug builds. Other defaults are unchanged to maintain backward compatibility.

The compiler's [C7 Compatible](z7-zi-zi-debug-information-format.md) (/Z7) option causes the compiler to leave the debugging information in the .obj files. You can also use the [Program Database](z7-zi-zi-debug-information-format.md) (/Zi) compiler option to store the debugging information in a PDB for the .obj file. The linker looks for the object's PDB first in the absolute path written in the .obj file, and then in the directory that contains the .obj file. You cannot specify an object's PDB file name or location to the linker.

[/INCREMENTAL](incremental-link-incrementally.md) is implied when /DEBUG is specified.

/DEBUG changes the defaults for the [/OPT](opt-optimizations.md) option from REF to NOREF and from ICF to NOICF, so if you want the original defaults, you must explicitly specify /OPT:REF or /OPT:ICF.

It is not possible to create an .exe or .dll that contains debug information. Debug information is always placed in a .obj or .pdb file.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Debugging** property page.

1. Modify the **Generate Debug Info** property to enable PDB generation. This enables /DEBUG:FASTLINK by default in Visual Studio 2017 and later.

1. Modify the **Generate Full Program Database File** property to enable /DEBUG:FULL for full PDB generation for every incremental build.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
