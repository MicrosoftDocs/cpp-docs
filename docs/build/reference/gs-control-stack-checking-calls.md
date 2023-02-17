---
description: "Learn more about: /Gs (Control Stack Checking Calls)"
title: "/Gs (Control Stack Checking Calls)"
ms.date: 02/16/2023
f1_keywords: ["/GS"]
helpviewer_keywords: ["disabling stack probes", "GS compiler option [C++]", "/GS compiler option [C++]", "stack, stack probes", "stack probes", "-GS compiler option [C++]", "stack checking calls"]
ms.assetid: 40daed7c-f942-4085-b872-01e12b37729e
---
# `/Gs` (Control stack checking calls)

Controls the threshold for stack probes.

## Syntax

> **`/Gs`**[*`size`*]

## Arguments

*`size`*\
(Optional) The number of bytes that local variables can occupy before a stack probe is initiated. No whitespace is allowed between **`/Gs`** and *`size`*.

## Remarks

A *stack probe* is a sequence of code that the compiler inserts at the beginning of a function call. When initiated, a stack probe reaches benignly into memory by the amount of space required to store the function's local variables. This probe causes the operating system to transparently page in more stack memory if necessary, before the rest of the function runs.

By default, the compiler generates code that initiates a stack probe when a function requires more than one page of stack space. This default is equivalent to a compiler option of **`/Gs4096`** for x86, x64, ARM, and ARM64 platforms. This value allows an application and the Windows memory manager to increase the amount of memory committed to the program stack dynamically at run time.

> [!NOTE]
> The default value of **`/Gs4096`** allows the program stack of applications for Windows to grow correctly at run time. We recommend that you do not change the default value unless you know exactly why you have to change it.

Some programs—for example, virtual device drivers—don't require this default stack-growth mechanism. In such cases, the stack probes aren't necessary and you can stop the compiler from generating them by setting *`size`* to a value that is larger than any function requires for local variable storage.

**`/Gs0`** initiates stack probes for every function call that requires storage for local variables. This value can have a negative impact on performance.

For x64 targets, if you specify the **`/Gs`** option without a *`size`* argument, it's the same as **`/Gs0`**. If the *`size`* argument is 1 through 9, the compiler emits warning D9014, and the effect is the same as specifying **`/Gs0`**.

For x86, ARM, and ARM64 targets, the **`/Gs`** option without a *`size`* argument is the same as **`/Gs4096`**. If the *`size`* argument is 1 through 9, the compiler emits warning D9014, and the effect is the same as specifying **`/Gs4096`**.

For all targets, a *`size`* argument between 10 and 2147483647 sets the threshold at the specified value. A *`size`* of 2147483648 or greater causes fatal error C1049.

You can turn stack probes on or off by using the [`check_stack`](../../preprocessor/check-stack.md) directive. **`/Gs`** and the `check_stack` pragma have no effect on standard C library routines; they affect only the functions you compile.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **/Gs** compiler option and an optional size in **Additional Options**. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
