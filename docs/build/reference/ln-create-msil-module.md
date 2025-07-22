---
description: "Learn more about: /LN (Create MSIL Module)"
title: "/LN (Create MSIL Module)"
ms.date: "11/04/2016"
f1_keywords: ["/LN"]
helpviewer_keywords: ["-LN compiler option [C++]", "/LN compiler option [C++]"]
---
# /LN (Create MSIL Module)

Specifies that the compiler shouldn't insert an assembly manifest into the output file.

## Syntax

```
/LN
```

## Remarks

By default, `/LN` isn't in effect, and the compiler inserts an assembly manifest into the output file.

When you use `/LN`, you must also use one of the [/clr (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md) options.

A managed program that doesn't have assembly metadata in the manifest is called a module. If you compile with [/c (Compile Without Linking)](c-compile-without-linking.md) and `/LN`, specify [/NOASSEMBLY (Create a MSIL Module)](noassembly-create-a-msil-module.md) in the linker phase to create the output file.

Create modules if you want to take a component-based approach to building assemblies. You can author types and compile them into modules. Then, you can generate an assembly from one or more modules. For more information on creating assemblies from modules, see [.netmodule Files as Linker Input](netmodule-files-as-linker-input.md) or [Al.exe (Assembly Linker)](/dotnet/framework/tools/al-exe-assembly-linker).

The default file extension for a module is `.netmodule`.

In releases before Visual Studio 2005, you created a module with `/clr:noAssembly`.

The MSVC linker accepts `.netmodule` files as input. The output file produced by the linker is an assembly or `.netmodule` with no run-time dependence on any of the `.netmodule`s that you input to the linker. For more information, see [.netmodule Files as Linker Input](netmodule-files-as-linker-input.md).

### To set this compiler option in the Visual Studio development environment

- Specify [/NOASSEMBLY (Create a MSIL Module)](noassembly-create-a-msil-module.md) in the linker phase to create the output file.

### To set this compiler option programmatically

- You can't change this compiler option programmatically.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
