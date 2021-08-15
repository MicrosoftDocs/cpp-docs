---
title: "/kernel (Create kernel mode binary)"
description: "The Microsoft C/C++ compiler /kernel option builds and links projects for kernel-mode execution."
ms.date: 09/28/2020
f1_keywords: ["/kernel", "/kernel-"]
ms.assetid: 6d7fdff0-c3d1-4b78-9367-4da588ce8b05
---
# /kernel (Create kernel mode binary)

Creates a binary that can be executed in the Windows kernel. The code in the current project gets compiled and linked by using a simplified set of C++ language features that are specific to code that runs in kernel mode.

## Syntax

> **`/kernel`**

## Remarks

Specifying the **`/kernel`** option tells the compiler and linker to arbitrate which language features are permissible in kernel mode and to make sure that you have sufficient expressive power to avoid runtime instability that is unique to kernel mode C++. It's done by prohibiting the use of C++ language features that are disruptive in kernel mode. The compiler produces warnings for C++ language features that are potentially disruptive but can't be disabled.

The **`/kernel`** option applies to both the compiler and linker phases of a build and is set at the project level. Pass the **`/kernel`** switch to indicate to the compiler that the resulting binary, after linking, should be loaded into the Windows kernel. The compiler will narrow the spectrum of C++ language features to a subset that is compatible with the kernel.

The following table lists changes in compiler behavior when **`/kernel`** is specified.

| Behavior type | **`/kernel`** behavior |
|--|--|
| C++ exception handling | Disabled. All instances of the **`throw`** and **`try`** keywords emit a compiler error (except for the exception specification `throw()`). No **`/EH`** options are compatible with **`/kernel`**, except for **`/EH-`**. |
| RTTI | Disabled. All instances of the **`dynamic_cast`** and **`typeid`** keywords emit a compiler error, unless **`dynamic_cast`** is used statically. |
| `new` and `delete` | You must explicitly define the `new()` or `delete()` operator. The compiler and runtime don't supply a default definition. |

Custom calling conventions, the [`/GS`](gs-buffer-security-check.md) build option, and all optimizations are permitted when you use the **`/kernel`** option. Inlining is largely not affected by **`/kernel`**, with the same semantics honored by the compiler. If you want to make sure that the **`__forceinline`** inlining qualifier is honored, you must make sure that warning [C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md) is enabled so that you know when a particular **`__forceinline`** function isn't inlined.

There's no `#pragma` equivalent to control this option.

When the compiler is passed the **`/kernel`** switch, it predefines a preprocessor macro that's named `_KERNEL_MODE` and has the value **1**. You can use this macro to conditionally compile code based on whether the execution environment is in user mode or kernel mode. For example, the following code specifies that the `MyNonPagedClass` class should be in a non-pageable memory segment when it's compiled for kernel mode execution.

```cpp
#ifdef _KERNEL_MODE
#define NONPAGESECTION __declspec(code_seg("$kerneltext$"))
#else
#define NONPAGESECTION
#endif

class NONPAGESECTION MyNonPagedClass
{
   // ...
};
```

Some of the following combinations of target architecture and the **`/arch`** option produce an error when they're used with **`/kernel`**:

- **`/arch:SSE`**, **`/arch:SSE2`**, **`/arch:AVX`**, **`/arch:AVX2`**, and **`/arch:AVX512`** aren't supported on x86. Only **`/arch:IA32`** is supported with **`/kernel`** on x86.

- **`/arch:AVX`**, **`/arch:AVX2`**, and **`/arch:AVX512`** aren't supported with **`/kernel`** on x64.

Building with **`/kernel`** also passes **`/kernel`** to the linker. Here's how the option affects linker behavior:

- Incremental linking is disabled. If you add **`/incremental`** to the command line, the linker emits this fatal error:

   **fatal error LNK1295: '/INCREMENTAL' not compatible with '/KERNEL' specification; link without '/INCREMENTAL'**

- The linker inspects each object file (or any included archive member from static libraries) to see whether it could have been compiled by using the **`/kernel`** option but wasn't. If any instances meet this criterion, the linker still successfully links but might issue a warning, as shown in the following table.

   | Command | **`/kernel`** obj | non-**`/kernel`** obj, MASM obj, or cvtres obj | Mix of **`/kernel`** and non-**`/kernel`** objs |
   |--|--|--|--|
   | **`link /kernel`** | Yes | Yes | Yes with warning LNK4257 |
   | **`link`** | Yes | Yes | Yes |

   **LNK4257 linking object not compiled with /KERNEL; image may not run**

The **`/kernel`** option and the **`/driver`** option operate independently. They have no effect on each other.

### To set the /kernel compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/kernel`*. Choose **OK** or **Apply** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
