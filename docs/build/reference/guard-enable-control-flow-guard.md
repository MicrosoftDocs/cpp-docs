---
description: "Learn more about: /guard (Enable Control Flow Guard)"
title: "/guard (Enable Control Flow Guard)"
ms.date: 2/24/2025
f1_keywords: ["/guard", "VC.Project.VCCLCompilerTool.ControlFlowGuard"]
---
# `/guard` (Enable Control Flow Guard)

Enable compiler generation of Control Flow Guard security checks.

## Syntax

> **`/guard:cf`**\
> **`/guard:cf-`**

## Remarks

The **`/guard:cf`** option causes the compiler to analyze control flow for indirect call targets at compile time, and inserts code at runtime to verify the targets. By default, **`/guard:cf`** is off and must be explicitly enabled. To explicitly disable this option, use **`/guard:cf-`**.

**Visual Studio 2017 and later**: This option adds guards for **`switch`** statements that generate jump tables.

When the **`/guard:cf`** Control Flow Guard (CFG) option is specified, the compiler and linker insert extra runtime security checks to detect attempts to compromise your code. During compiling and linking, all indirect calls in your code are analyzed to find every location that the code can reach when it runs correctly. This information is stored in extra structures in the headers of your binaries. The compiler also injects a check before every indirect call in your code that ensures the target is one of the verified locations. If the check fails at runtime on a CFG-aware operating system, the operating system closes the program.

A common attack on software takes advantage of bugs in handling extreme or unexpected inputs. Carefully crafted input to the application may overwrite a location that contains a pointer to executable code. This technique can be used to redirect control flow to code controlled by the attacker. The CFG runtime checks don't fix the data corruption bugs in your executable. They instead make it more difficult for an attacker to use them to execute arbitrary code. CFG is a mitigation tool that prevents calls to locations other than function entry points in your code. It's similar to how Data Execution Prevention (DEP),  [/GS](gs-buffer-security-check.md) stack checks, and [`/DYNAMICBASE`](dynamicbase-use-address-space-layout-randomization.md) and [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) address space layout randomization (ASLR) lower the chances that your code becomes an exploit vector.

To use the CFG exploit mitigation technique, pass **`/guard:cf`** to the compiler and **`/GUARD:CF`** to the linker.

To disable the CFG exploit mitigation technique, pass **`/guard:cf-`** to the compiler **`/GUARD:NO`** to the linker.

If you build using a single `cl` command, the compiler passes the option to the linker. If you compile and link separately, set the option for both the compiler and linker commands. The `/DYNAMICBASE` linker option is also required.

To verify that your binary has CFG data, use the `dumpbin /headers /loadconfig` command. CFG-enabled binaries have `Guard` in the list of EXE or DLL characteristics, and Guard Flags include `CF Instrumented` and `FID table present`.

The **`/guard:cf`** option is incompatible with [`/ZI`](z7-zi-zi-debug-information-format.md) (Edit and Continue debug information) or [`/clr`](clr-common-language-runtime-compilation.md) (Common Language Runtime Compilation).

Code compiled by using **`/guard:cf`** can be linked to libraries and object files that aren't compiled by using the option. Only this code, when also linked by using the **`/guard:cf`** option and run on a CFG-aware operating system, has CFG protection. Because code compiled without the option won't stop an attack, we recommend that you use the option on all the code you compile. There's a small runtime cost for CFG checks, but the compiler analysis attempts to optimize away the checks on indirect jumps that can be proven to be safe.

### To set this compiler option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For more information, see [Set compiler and build properties](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.
1. Select the **Control Flow Guard** property.
1. In the dropdown control, choose **Yes** to enable Control Flow Guard, or **No** to disable it.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
