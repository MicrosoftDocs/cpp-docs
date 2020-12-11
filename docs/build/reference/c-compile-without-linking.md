---
description: "Learn more about: /c (Compile Without Linking)"
title: "/c (Compile Without Linking)"
ms.date: "11/04/2016"
f1_keywords: ["/c"]
helpviewer_keywords: ["suppress link", "cl.exe compiler, compiling without linking", "-c compiler option [C++]", "c compiler option [C++]", "/c compiler option [C++]"]
ms.assetid: 8017fc3d-e5dd-4668-a1f7-3120daa95d20
---
# /c (Compile Without Linking)

Prevents the automatic call to LINK.

## Syntax

```
/c
```

## Remarks

Compiling with **/c** creates .obj files only. You must call LINK explicitly with the proper files and options to perform the linking phase of the build.

Any internal project created in the development environment uses the **/c** option by default.

### To set this compiler option in the Visual Studio development environment

- This option is not available from within the development environment.

### To set this compiler option programmatically

- To set this compiler option programmatically, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly%2A>.

## Example

The following command line creates the object files FIRST.obj and SECOND.obj. THIRD.obj is ignored.

```
CL /c FIRST.C SECOND.C THIRD.OBJ
```

To create an executable file, you must invoke LINK:

```
LINK firsti.obj second.obj third.obj /OUT:filename.exe
```

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
