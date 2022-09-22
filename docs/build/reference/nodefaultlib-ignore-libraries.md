---
description: "Learn more about: /NODEFAULTLIB (Ignore libraries)"
title: "/NODEFAULTLIB (Ignore libraries)"
ms.date: 09/09/2022
f1_keywords: ["VC.Project.VCLinkerTool.IgnoreAllDefaultLibraries", "VC.Project.VCLinkerTool.IgnoreDefaultLibraryNames", "VC.Project.VCLinkerTool.OVERWRITEAllDefaultLibraries", "VC.Project.VCLinkerTool.OVERWRITEDefaultLibraryNames", "/nodefaultlib"]
helpviewer_keywords: ["default libraries, removing", "-NODEFAULTLIB linker option", "libraries, ignore", "NODEFAULTLIB linker option", "/NODEFAULTLIB linker option", "ignore libraries linker option"]
ms.assetid: 7270b673-6711-468e-97a7-c2925ac2be6e
---
# `/NODEFAULTLIB` (Ignore Libraries)

The **`/NODEFAULTLIB`** linker option tells the linker to remove one or more default libraries from the list of libraries it searches when it resolves external references.

## Syntax

> **`/NODEFAULTLIB`**\[**`:`***`library`*]

## Arguments

*`library`*\
An optional library name that you want the linker to ignore when it resolves external references.

## Remarks

To create an *`.obj`* file that contains no references to default libraries, use [`/Zl` (Omit default library name)](zl-omit-default-library-name.md).

By default, **`/NODEFAULTLIB`** removes all default libraries from the list of libraries it searches when resolving external references. The optional *`library`* parameter lets you remove a specified library from the list of libraries it searches when resolving external references. Specify one **`/NODEFAULTLIB`** option for each library you want to exclude.

The linker resolves references to external definitions by searching first in libraries that you explicitly specify, then in default libraries specified by the [`/DEFAULTLIB`](defaultlib-specify-default-library.md) option, and then in default libraries named in *`.obj`* files.

**`/NODEFAULTLIB:`***`library`* overrides **`/DEFAULTLIB:`***`library`* when the same *`library`* name is specified in both.

If you use **`/NODEFAULTLIB`** to build your program without the C run-time library, you may also have to use the [`/ENTRY`](entry-entry-point-symbol.md) option to specify the entry-point function in your program. For more information, see [CRT library features](../../c-runtime-library/crt-library-features.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Input** property page.

1. Modify the **Ignore All Default Libraries** property. Or, specify a semicolon-separated list of the libraries you want to ignore in the **Ignore Specific Default Libraries** property. The **Linker** > **Command Line** property page shows the effect of the changes you make to these properties.

1. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
