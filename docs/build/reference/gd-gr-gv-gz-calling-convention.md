---
description: "Learn more about: /Gd, /Gr, /Gv, /Gz (Calling Convention)"
title: "/Gd, /Gr, /Gv, /Gz (Calling Convention)"
ms.date: "09/05/2018"
f1_keywords: ["/Gr", "/Gv", "/Gd", "VC.Project.VCCLCompilerTool.CallingConvention"]
helpviewer_keywords: ["-Gd compiler option [C++]", "-Gv compiler option [C++]", "/Gv compiler option [C++]", "-Gr compiler option [C++]", "Gd compiler option [C++]", "Gr compiler option [C++]", "/Gz compiler option [C++]", "-Gz compiler option [C++]", "/Gd compiler option [C++]", "Gz compiler option [C++]", "Gv compiler option [C++]", "/Gr compiler option [C++]"]
ms.assetid: fd3110cb-2d77-49f2-99cf-a03f9ead00a3
---
# /Gd, /Gr, /Gv, /Gz (Calling Convention)

These options determine the order in which function arguments are pushed onto the stack, whether the caller function or called function removes the arguments from the stack at the end of the call, and the name-decorating convention that the compiler uses to identify individual functions.

## Syntax

> **`/Gd`**\
> **`/Gr`**\
> **`/Gv`**\
> **`/Gz`**

## Remarks

**`/Gd`**, the default setting, specifies the [__cdecl](../../cpp/cdecl.md) calling convention for all functions except C++ member functions and functions that are marked [__stdcall](../../cpp/stdcall.md), [__fastcall](../../cpp/fastcall.md), or [__vectorcall](../../cpp/vectorcall.md).

**`/Gr`** specifies the **`__fastcall`** calling convention for all functions except C++ member functions, functions named `main`, and functions that are marked **`__cdecl`**, **`__stdcall`**, or **`__vectorcall`**. All **`__fastcall`** functions must have prototypes. This calling convention is only available in compilers that target x86, and is ignored by compilers that target other architectures.

**`/Gz`** specifies the **`__stdcall`** calling convention for all functions except C++ member functions, functions named `main`, and functions that are marked **`__cdecl`**, **`__fastcall`**, or **`__vectorcall`**. All **`__stdcall`** functions must have prototypes. This calling convention is only available in compilers that target x86, and is ignored by compilers that target other architectures.

**`/Gv`** specifies the **`__vectorcall`** calling convention for all functions except C++ member functions, functions named `main`, functions with a `vararg` variable argument list, or functions that are marked with a conflicting **`__cdecl`**, **`__stdcall`**, or **`__fastcall`** attribute. This calling convention is only available on x86 and x64 architectures that support /arch:SSE2 and above, and is ignored by compilers that target the ARM architecture.

Functions that take a variable number of arguments must be marked **`__cdecl`**.

**`/Gd`**, **`/Gr`**, **`/Gv`** and **`/Gz`** are not compatible with [`/clr:safe`](clr-common-language-runtime-compilation.md) or **/clr:pure**. The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017 and later.

> [!NOTE]
> By default for x86 processors, C++ member functions use [`__thiscall`](../../cpp/thiscall.md).

For all processors, a member function that is explicitly marked as **`__cdecl`**, **`__fastcall`**, **`__vectorcall`**, or **`__stdcall`** uses the specified calling convention if it is not ignored on that architecture. A member function that takes a variable number of arguments always uses the **`__cdecl`** calling convention.

These compiler options have no effect on the name decoration of C++ methods and functions. Unless declared as `extern "C"`, C++ methods and functions use a different name-decorating scheme. For more information, see [Decorated Names](decorated-names.md).

For more information about calling conventions, see [Calling Conventions](../../cpp/calling-conventions.md).

## __cdecl Specifics

On x86 processors, all function arguments are passed on the stack from right to left. On ARM and x64 architectures, some arguments are passed by register and the rest are passed on the stack from right to left. The calling routine pops the arguments from the stack.

For C, the **`__cdecl`** naming convention uses the function name preceded by an underscore ( `_` ); no case translation is performed. Unless declared as `extern "C"`, C++ functions use a different name-decorating scheme. For more information, see [Decorated Names](decorated-names.md).

## __fastcall Specifics

Some of a **`__fastcall`** function's arguments are passed in registers (for x86 processors, ECX, and EDX), and the rest are pushed onto the stack from right to left. The called routine pops these arguments from the stack before it returns. Typically, **/Gr** decreases execution time.

> [!NOTE]
> Be careful when you use the **`__fastcall`** calling convention for any function that's written in inline assembly language. Your use of registers could conflict with the compiler's use.

For C, the **`__fastcall`** naming convention uses the function name preceded by an at sign (**\@**) followed by the size of the function's arguments in bytes. No case translation is done. The compiler uses this template for the naming convention:

`@function_name@number`

When you use the **`__fastcall`** naming convention, use the standard include files. Otherwise, you will get unresolved external references.

## __stdcall Specifics

A **`__stdcall`** function's arguments are pushed onto the stack from right to left, and the called function pops these arguments from the stack before it returns.

For C, the **`__stdcall`** naming convention uses the function name preceded by an underscore (**\_**) and followed by an at sign (**\@**) and the size of the function's arguments in bytes. No case translation is performed. The compiler uses this template for the naming convention:

`_functionname@number`

## __vectorcall Specifics

A **`__vectorcall`** function's integer arguments are passed by value, using up to two (on x86) or four (on x64) integer registers, and up to six XMM registers for floating-point and vector values, and the rest are passed on the stack from right to left. The called function cleans off the stack before it returns. Vector and floating-point return values are returned in XMM0.

For C, the **`__vectorcall`** naming convention uses the function name followed by two at signs (**\@\@**) and the size of the function's arguments in bytes. No case translation is performed. The compiler uses this template for the naming convention:

`functionname@@number`

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **C/C++** > **Advanced** property page.

1. Modify the **Calling Convention** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CallingConvention%2A>.

## See also

- [MSVC Compiler Options](compiler-options.md)
- [MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
