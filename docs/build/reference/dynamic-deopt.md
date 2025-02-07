---
title: "/clr (Common Language Runtime compilation)"
description: "Use the Microsoft C++ compiler option /clr to compile C++/CLI and C++ code as managed code."
ms.date: 10/27/2020
f1_keywords: ["/dynamicdeopt", "VC.Project.VCNMakeTool.CompileAsManaged", "VC.Project.VCCLCompilerTool.CompileAsManaged"]
helpviewer_keywords: ["cl.exe compiler, common language runtime option", "-dynamicdeopt compiler option [C++]", "dynamicdeopt compiler option [C++]", "/clr compiler option [C++]", "Managed Extensions for C++, compiling", "common language runtime, /clr compiler option"]
---
# `/dynamicdeopt` (Enable dynamic debugging)

Place breakpoints in optimized code and step in with on-demand function deoptimization.

## Syntax

> **`/dynamicdeopt`**
> **`/dynamicdeopt:suffix <suffix>`**
> **`/dynamicdeopt:sync`**

## Arguments

*suffix*\
Specify the file extension for the deoptimized output. One or more of the following comma-separated arguments.


•	/dynamicdeopt:suffix <blah>  lets you change that new suffix from .alt to something else. We don't expect folks to use this. The gotcha here is that it needs to get set for EVERY file, and it also needs to match the same thing you pass to the linker. If you get it wrong in just a single place the feature can get really weird. But, if folks happen to already have files named blah.alt.cpp and they would prefer a different suffix, we allow that.

- **`pure`**

   **`/clr:pure` is deprecated**. The option is removed in Visual Studio 2017 and later. We recommend that you port code that must be pure MSIL to C#.


## Remarks

With no options, given `test.cpp` as input your output will include `test.obj`, `test.exe`, and `test.pdb`, as well as `test.alt.obj`, `test.alt.exe`, and ``test.alt.pdb`.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
