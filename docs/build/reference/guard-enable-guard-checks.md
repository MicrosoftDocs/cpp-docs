---
description: "Learn more about: /GUARD (Enable Guard Checks) linker option"
title: "/GUARD (Enable Guard Checks)"
ms.date: 09/21/2022
f1_keywords: ["VC.Project.VCCLCompilerTool.LinkControlFlowGuard"]
ms.assetid: 72758e23-70ac-4616-94d7-d767477406d1
---
# `/GUARD` (Enable Guard Checks)

Tells the linker whether to support Control Flow Guard checks in the executable image.

## Syntax

> **`/GUARD:CF`**\
> **`/GUARD:NO`**

## Remarks

The **`/GUARD:CF`** linker option modifies the header of a DLL or EXE file to indicate support for Control Flow Guard (CFG) runtime checks. The linker also adds the required control flow target address data to the header. By default, **`/GUARD:CF`** is disabled. It can be explicitly disabled by using **`/GUARD:NO`**. To be effective, **`/GUARD:CF`** also requires the [`/DYNAMICBASE` (Use address space layout randomization)](dynamicbase-use-address-space-layout-randomization.md) linker option, which is on by default.

When source code is compiled by using the [`/guard:cf`](guard-enable-control-flow-guard.md) compiler option, the compiler analyzes the control flow by examining all indirect calls for possible target addresses. The compiler inserts code to verify the target address of an indirect call instruction is in the list of known target addresses at runtime. Operating systems that support CFG stop a program that fails a CFG runtime check. This check makes it more difficult for an attacker to execute malicious code by using data corruption to change a call target.

The **`/GUARD:CF`** option must be specified to both the compiler and linker to create CFG-enabled executable images. Code compiled but not linked by using **`/GUARD:CF`** incurs the cost of runtime checks, but doesn't enable CFG protection. When the **`/guard:cf`** option is specified to the `cl` command to compile and link in one step, the compiler passes the flag to the linker. When the **Control Flow Guard** property is set in Visual Studio, the **`/GUARD:CF`** option is passed to both the compiler and linker. When object files or libraries have been compiled separately, the option must be explicitly specified in the `link` command.

### To set this linker option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter *`/GUARD:CF`*. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[`/guard` (Enable Control Flow Guard)](guard-enable-control-flow-guard.md)\
[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
