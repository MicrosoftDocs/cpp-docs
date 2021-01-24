---
description: "Learn more about: /NODEFAULTLIB (Ignore Libraries)"
title: "/NODEFAULTLIB (Ignore Libraries)"
ms.date: "03/26/2019"
f1_keywords: ["VC.Project.VCLinkerTool.OVERWRITEAllDefaultLibraries", "VC.Project.VCLinkerTool.OVERWRITEDefaultLibraryNames", "/nodefaultlib"]
helpviewer_keywords: ["default libraries, removing", "-NODEFAULTLIB linker option", "libraries, ignore", "NODEFAULTLIB linker option", "/NODEFAULTLIB linker option", "ignore libraries linker option"]
ms.assetid: 7270b673-6711-468e-97a7-c2925ac2be6e
---
# /NODEFAULTLIB (Ignore Libraries)

> **/NODEFAULTLIB**[__:__*library*]

## Arguments

*library*<br/>
A library that you want the linker to ignore when it resolves external references.

## Remarks

The /NODEFAULTLIB option tells the linker to remove one or more default libraries from the list of libraries it searches when resolving external references.

To create an .obj file that contains no references to default libraries, use [/Zl (Omit Default Library Name)](zl-omit-default-library-name.md).

By default, /NODEFAULTLIB removes all default libraries from the list of libraries it searches when resolving external references. The optional *library* parameter lets you remove a specified library from the list of libraries it searches when resolving external references. Specify one /NODEFAULTLIB option for each library you want to exclude.

The linker resolves references to external definitions by searching first in libraries that you explicitly specify, then in default libraries specified with the [/DEFAULTLIB:](defaultlib-specify-default-library.md) option, and then in default libraries named in .obj files.

/NODEFAULTLIB:*library* overrides /DEFAULTLIB:*library* when the same *library* name is specified in both.

If you use /NODEFAULTLIB to build your program without the C run-time library, you may have to also use [/ENTRY](entry-entry-point-symbol.md) to specify the entry-point function in your program. For more information, see [CRT Library Features](../../c-runtime-library/crt-library-features.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Input** property page.

1. Select the **Ignore All Default Libraries** property. Or, specify a semicolon-separated list of the libraries you want to ignore in the **Ignore Specific Default Libraries** property. The **Command Line** property page shows the effect of the changes you make to these properties.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
