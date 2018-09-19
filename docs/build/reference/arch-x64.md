---
title: "-arch (x64) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: ecda22bf-5bed-43f4-99fb-88aedd83d9d8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /arch (x64)

Specifies the architecture for code generation on x64. Also see [/arch (x86)](../../build/reference/arch-x86.md) and [/arch (ARM)](../../build/reference/arch-arm.md).

## Syntax

```
/arch:[AVX|AVX2]
```

## Arguments

**/arch:AVX**<br/>
Enables the use of Intel Advanced Vector Extensions instructions.

**/arch:AVX2**<br/>
Enables the use of Intel Advanced Vector Extensions 2 instructions.

## Remarks

**/arch** only affects code generation for native functions. When you use [/clr](../../build/reference/clr-common-language-runtime-compilation.md) to compile, **/arch** has no effect on code generation for managed functions.

The `__AVX__` preprocessor symbol is defined when the **/arch:AVX** compiler option is specified. The `__AVX2__` preprocessor symbol is defined when the **/arch:AVX2** compiler option is specified. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md). The **/arch:AVX2** option was introduced in Visual Studio 2013 Update 2, version 12.0.34567.1.

### To set the /arch:AVX or /arch:AVX2 compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties**, **C/C++** folder.

1. Select the **Code Generation** property page.

1. In the **Enable Enhanced Instruction Set** drop-down box, choose **Advanced Vector Extensions (/arch:AVX)** or **Advanced Vector Extensions 2 (/arch:AVX2)**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## See Also

[/arch (Minimum CPU Architecture)](../../build/reference/arch-minimum-cpu-architecture.md)<br/>
[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)