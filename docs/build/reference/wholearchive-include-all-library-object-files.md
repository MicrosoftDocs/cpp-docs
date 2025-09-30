---
description: "Learn more about: /WHOLEARCHIVE (Include All Library Object Files)"
title: "/WHOLEARCHIVE (Include All Library Object Files)"
ms.date: 03/27/2025
---
# /WHOLEARCHIVE (Include All Library Object Files)

Force the linker to include all object files in the static library in the linked executable.

## Syntax

> **/WHOLEARCHIVE**\
> **/WHOLEARCHIVE:**_library_

### Arguments

*`library`*\
An optional pathname to a static library. The linker includes every object file from this library. When expanded, the fully qualified filename must not exceed `MAX_PATH` (260 characters).

## Remarks

The `/WHOLEARCHIVE` option forces the linker to include every object file from either a specified static library, or if no library is specified, from all static libraries specified to the LINK command. To specify the `/WHOLEARCHIVE` option for multiple libraries, you can use more than one `/WHOLEARCHIVE` switch on the linker command line. By default, the linker includes object files in the linked output only if they export symbols referenced by other object files in the executable. The `/WHOLEARCHIVE` option makes the linker treat all object files archived in a static library as if they were specified individually on the linker command line.

The `/WHOLEARCHIVE` option can be used to re-export all the symbols from a static library. This allows you to make sure that all of your library code, resources, and metadata are included when you create a component from more than one static library. If you see warning LNK4264 when you create a static library that contains Windows Runtime components for export, use the `/WHOLEARCHIVE` option when linking that library into another component or app.

The `/WHOLEARCHIVE` option was introduced in Visual Studio 2015 Update 2.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Add the *`/WHOLEARCHIVE`* option to the **Additional Options** text box.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
