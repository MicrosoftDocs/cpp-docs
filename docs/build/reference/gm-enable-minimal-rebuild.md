---
description: "Learn more about: /Gm (Enable Minimal Rebuild)"
title: "/Gm (Enable Minimal Rebuild)"
ms.date: "11/12/2018"
f1_keywords: ["VC.Project.VCCLCompilerTool.MinimalRebuild", "/Gm", "VC.Project.VCCLWCECompilerTool.MinimalRebuild"]
helpviewer_keywords: ["/Gm compiler option [C++]", "minimal rebuild", "enable minimal rebuild compiler option [C++]", "Gm compiler option [C++]", "-Gm compiler option [C++]"]
ms.assetid: d8869ce0-d2ea-40eb-8dae-6d2cdb61dd59
---
# /Gm (Enable Minimal Rebuild)

Deprecated. Enables minimal rebuild, which determines whether C++ source files that include changed C++ class definitions (stored in header (.h) files) need to be recompiled.

## Syntax

```
/Gm
```

## Remarks

**/Gm** is deprecated. It may not trigger a build for certain kinds of header file changes. You may safely remove this option from your projects. To improve build times, we recommend you use precompiled headers and incremental and parallel build options instead. For a list of deprecated compiler options, see the **Deprecated and Removed Compiler Options** section in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

The compiler stores dependency information between source files and class definitions in the project's .idb file during the first compile. (Dependency information tells which source file is dependent on which class definition, and which .h file the definition is located in.) Subsequent compiles use the information stored in the .idb file to determine whether a source file needs to be compiled, even if it includes a modified .h file.

> [!NOTE]
> Minimal rebuild relies on class definitions not changing between include files. Class definitions must be global for a project (there should be only one definition of a given class), because the dependency information in the .idb file is created for the entire project. If you have more than one definition for a class in your project, disable minimal rebuild.

Because the incremental linker does not support the Windows metadata included in .obj files by using the [/ZW (Windows Runtime Compilation)](zw-windows-runtime-compilation.md) option, the **/Gm** option is incompatible with **/ZW**.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Modify the **Enable Minimal Rebuild** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.MinimalRebuild%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
