---
description: "Learn more about: .Lib Files as Linker Input"
title: ".Lib Files as Linker Input"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.AdditionalDependencies"]
helpviewer_keywords: ["OMF libraries", "linking [C++], OMF libraries", "import libraries, linker files", "libraries [C++], .lib files as linker input", "COFF files, import libraries", "default libraries [C++], linker output", "default libraries [C++]", "defaults [C++], libraries", ".lib files"]
ms.assetid: dc5d2b1c-2487-41fa-aa71-ad1e0647958b
---
# .Lib Files as Linker Input

LINK accepts COFF standard libraries and COFF import libraries, both of which usually have the extension .lib. Standard libraries contain objects and are created by the LIB tool. Import libraries contain information about exports in other programs and are created either by LINK when it builds a program that contains exports or by the LIB tool. For information on using LIB to create standard or import libraries, see [LIB Reference](lib-reference.md). For details on using LINK to create an import library, see the [/DLL](dll-build-a-dll.md) option.

A library is specified to LINK as either a file name argument or a default library. LINK resolves external references by searching first in libraries specified on the command line, then in default libraries specified with the [/DEFAULTLIB](defaultlib-specify-default-library.md) option, and then in default libraries named in .obj files. If a path is specified with the library name, LINK looks for the library in that directory. If no path is specified, LINK looks first in the directory that LINK is running from, and then in any directories specified in the LIB environment variable.

## To add .lib files as linker input in the development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Choose the **Input** property page in the **Linker** folder.

1. Modify the **Additional Dependencies** property to add the .lib files.

## To programmatically add .lib files as linker input

- See [AdditionalDependencies](/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.additionaldependencies).

## Example

The following sample shows how to build and use a .lib file. First, build a .lib file:

```cpp
// lib_link_input_1.cpp
// compile by using: cl /LD lib_link_input_1.cpp
__declspec(dllexport) int Test() {
   return 213;
}
```

And then, compile this sample by using the .lib file you just created:

```cpp
// lib_link_input_2.cpp
// compile by using: cl /EHsc lib_link_input_1.lib lib_link_input_2.cpp
__declspec(dllimport) int Test();
#include <iostream>
int main() {
   std::cout << Test() << std::endl;
}
```

```Output
213
```

## See also

[LINK Input Files](link-input-files.md)<br/>
[MSVC Linker Options](linker-options.md)
