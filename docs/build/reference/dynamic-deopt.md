---
title: "/dynamicdeopt (Enable C++ Dynamic Debugging)"
description: "Use the Microsoft C++ compiler option /clr to compile C++/CLI and C++ code as managed code."
ms.date: 10/27/2020
f1_keywords: ["/dynamicdeopt", "VC.Project.VCNMakeTool.CompileAsManaged", "VC.Project.VCCLCompilerTool.CompileAsManaged"]
helpviewer_keywords: ["cl.exe compiler, common language runtime option", "-dynamicdeopt compiler option [C++]", "dynamicdeopt compiler option [C++]", "/clr compiler option [C++]", "Managed Extensions for C++, compiling", "common language runtime, /clr compiler option"]
---
# `/dynamicdeopt` (Enable C++ Dynamic Debugging)

Debug optimized code as if it were compiled unoptimized.

## Syntax

> **`/dynamicdeopt`**
> **`/dynamicdeopt:suffix <suffix>`**
> **`/dynamicdeopt:sync`**

## Arguments

*`suffix`*\
Specify the file extension for the deoptimized output. One or more of the following comma-separated arguments.

• `/dynamicdeopt:suffix` <blah>  lets you change that new suffix from .alt to something else. We don't expect folks to use this. The gotcha here is that it needs to get set for EVERY file, and it also needs to match the same thing you pass to the linker. If you get it wrong in just a single place the feature can get really weird. But, if folks happen to already have files named blah.alt.cpp and they would prefer a different suffix, we allow that.

- **`pure`**

   **`/clr:pure` is deprecated**. The option is removed in Visual Studio 2017 and later. We recommend that you port code that must be pure MSIL to C#.

## Remarks

This flag is only available for x64 builds. The linker must also be passed [`/DEBUGDEOPT`](debugdeopt-dynamic-debugging.md) to enable C++ Dynamic Debugging.

Compiling with `/dynamicdeopt` generates additional binaries that are used for debugging. When you debug an optimized file and step into an optimized function, the debugger steps into the alternate binary. This allows you to debug as if you are building unoptimized code while still getting the performance advantages of building optimized code.

Place breakpoints in optimized code and step in anywhere with on-demand function deoptimization


You must also add `/dynamicdeopt` to the linker command line.

With no options, given `test.cpp` as input your output will include `test.obj`, `test.exe`, and `test.pdb`, as well as `test.alt.obj`, `test.alt.exe`, and ``test.alt.pdb`.

`/dynamicdeopt` requires:

`/DEBUG` or `/DEBUG:FULL`. If you don't specify `/DEBUG`, or `/DEBUG:FASTLINK` the linker will give a fatal error.
If you specify `/INCREMENTAL`, the compiler generates a warning and automatically turns off `/INCREMENTAL`.
If you specify `/OPT:ICF`, the compiler generates a warning that the debug experience isn't as good. This is because ICF can cause functions to be removed from the alt file, which means you can't step into them.

`/dynamicdeopt1` is incompatible with the following compiler switches, which also means that edit-and-continue is incompatible with C++ Dynamic Debugging:

   `/GL` 
   `/ZI`
   `/RTC1`
   `/RTCs`
   `/RTCc`
   `/RTCu`
   `/GH`
   `/Gh`
   `/fastcap`
   `/callcap`
   ALL_CLR_FLAGS AND_ALSO 
   `/ZW`
   `fsanitize=address`
   `fsanitize=kernel-address`


Turn /GL off via Project properties C/C++ > Optimization > Whole Program Optimization. Set it to **No**.
TUrn /OPT:ICF off in Project properties Linker > Optimization > Enable COMDAT Folding. Set it to **No**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
