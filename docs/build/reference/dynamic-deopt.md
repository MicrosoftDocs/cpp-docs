---
title: "/dynamicdeopt (Enable C++ Dynamic Debugging)"
description: "Use the Microsoft C++ compiler option /dynamicdeopt to use C++ Dynamic Debugging."
ms.date: 3/11/2025
f1_keywords: ["/dynamicdeopt", "VC.Project.VCNMakeTool.CompileAsManaged", "VC.Project.VCCLCompilerTool.CompileAsManaged"]
helpviewer_keywords: ["cl.exe compiler, common language runtime option", "-dynamicdeopt compiler option [C++]", "dynamicdeopt compiler option [C++]", "/clr compiler option [C++]", "Managed Extensions for C++, compiling", "common language runtime, /clr compiler option"]
---
# `/dynamicdeopt` (Enable C++ Dynamic Debugging)

Enable [C++ Dynamic Debugging](/visualstudio/debugger/cpp-dynamic-debugging.md) so you can debug optimized code as if it were compiled deoptimized.

## Syntax

> **`/dynamicdeopt`**
> **`/dynamicdeopt:suffix <suffix>`**

## Arguments

*`suffix`*\
Specify the file extension for the deoptimized output.

With no options and given `test.cpp` as input, your output will include `test.obj`, `test.exe`, and `test.pdb`, as well as `test.alt.obj`, `test.alt.exe`, and ``test.alt.pdb`. This switch allows you to change the suffix of the unoptimized binary build artifacts from `.alt` to something else. If you change the suffix, all files must use the new suffix, and it needs to match the name passed to the linker. You typically won't use this switch unless you need to avoid filename collisions with other files that you have.

## Remarks

This flag, available starting with Visual Studio 2022 Version 17.14 Preview 2, applies only to x64 projects.

Compiling with `/dynamicdeopt` generates additional binaries that are used for debugging. When you debug an optimized file and debug into an optimized function, the debugger steps into the alternate binary instead. This allows you to debug as if you are debugging unoptimized code while still getting the performance advantages of optimized code.

`/dynamicdeopt` requires:

`/DEBUG` or `/DEBUG:FULL`. If you don't specify `/DEBUG`, or `/DEBUG:FASTLINK` the linker will give a fatal error.
If you specify `/INCREMENTAL`, the compiler generates a warning and automatically turns off `/INCREMENTAL`.
If you specify `/OPT:ICF`, the compiler generates a warning that the debug experience isn't as good. This is because ICF can cause functions to be removed from the alt file, which means you can't step into them.

`/dynamicdeopt1` is incompatible with edit-and-continue and the following compiler switches:

```cpp
/GL
/ZI
/RTC1
/RTCs
/RTCc
/RTCu
/GH
/Gh
/fastcap
/callcap
/ZW
fsanitize=address
fsanitize=kernel-address
All of the CLR flags
```

Turn `/GL `off via Project properties C/C++ > Optimization > Whole Program Optimization. Set it to **No**.
TUrn `/OPT:ICF` off in Project properties Linker > Optimization > Enable COMDAT Folding. Set it to **No**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAsManaged>.

## See also

[C++ Dynamic Debugging](/visualstudio/debugger/cpp-dynamic-debugging.md)\
[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
