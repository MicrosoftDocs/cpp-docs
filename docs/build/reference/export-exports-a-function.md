---
description: "Learn more about: /EXPORT (Exports a Function)"
title: "/EXPORT (Exports a Function)"
ms.date: "09/05/2018"
f1_keywords: ["VC.Project.VCLinkerTool.ExportFunctions", "/export"]
helpviewer_keywords: ["/EXPORT linker option", "EXPORT linker option", "-EXPORT linker option"]
ms.assetid: 0920fb44-a472-4091-a8e6-73051f494ca0
---
# /EXPORT (Exports a Function)

Exports a function by name or ordinal, or data, from your program.

## Syntax

> **/EXPORT:**<em>entryname</em>[**,\@**<em>ordinal</em>[**,NONAME**]][**,DATA**]

## Remarks

The **/EXPORT** option specifies a function or data item to export from your program so that other programs can call the function or use the data. Exports are usually defined in a DLL.

The *entryname* is the name of the function or data item as it is to be used by the calling program. *ordinal* specifies an index into the exports table in the range 1 through 65,535; if you do not specify *ordinal*, LINK assigns one. The **NONAME** keyword exports the function only as an ordinal, without an *entryname*.

The **DATA** keyword specifies that the exported item is a data item. The data item in the client program must be declared using **extern __declspec(dllimport)**.

There are four methods for exporting a definition, listed in recommended order of use:

1. [__declspec(dllexport)](../../cpp/dllexport-dllimport.md) in the source code

1. An [EXPORTS](exports.md) statement in a .def file

1. An /EXPORT specification in a LINK command

1. A [comment](../../preprocessor/comment-c-cpp.md) directive in the source code, of the form `#pragma comment(linker, "/export: definition ")`.

All these methods can be used in the same program. When LINK builds a program that contains exports, it also creates an import library, unless an .exp file is used in the build.

LINK uses decorated forms of identifiers. The compiler decorates an identifier when it creates the .obj file. If *entryname* is specified to the linker in its undecorated form (as it appears in the source code), LINK attempts to match the name. If it cannot find a unique match, LINK issues an error message. Use the [DUMPBIN](dumpbin-reference.md) tool to get the [decorated name](decorated-names.md) form of an identifier when you need to specify it to the linker.

> [!NOTE]
> Do not specify the decorated form of C identifiers that are declared **`__cdecl`** or **`__stdcall`**.

If you need to export an undecorated function name, and have different exports depending on the build configuration (for example, in 32-bit or 64-bit builds), you can use different DEF files for each configuration. (Preprocessor conditional directives are not allowed in DEF files.) As an alternative, you can use a `#pragma comment` directive before a function declaration as shown here, where `PlainFuncName` is the undecorated name, and `_PlainFuncName@4` is the decorated name of the function:

```cpp
#pragma comment(linker, "/export:PlainFuncName=_PlainFuncName@4")
BOOL CALLBACK PlainFuncName( Things * lpParams)
```

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option into the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
