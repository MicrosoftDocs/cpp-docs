---
description: "Learn more about: /Qimprecise_fwaits (Remove fwaits Inside Try Blocks)"
title: "/Qimprecise_fwaits (Remove fwaits Inside Try Blocks)"
ms.date: "11/04/2016"
f1_keywords: ["/Qimprecise_fwaits"]
helpviewer_keywords: ["-Qimprecise_fwaits compiler option (C++)", "/Qimprecise_fwaits compiler option (C++)"]
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
---
# /Qimprecise_fwaits (Remove fwaits Inside Try Blocks)

Removes the `fwait` commands internal to **`try`** blocks when you use the [/fp:except](fp-specify-floating-point-behavior.md) compiler option.

## Syntax

```
/Qimprecise_fwaits
```

## Remarks

This option has no effect if **/fp:except** is not also specified. If you specify the **/fp:except** option, the compiler will insert a `fwait` command around each line of code in a **`try`** block. In this way, the compiler can identify the specific line of code that produces an exception. **/Qimprecise_fwaits** removes internal `fwait` instructions, leaving only the waits around the **`try`** block. This improves performance, but the compiler will only be able to say which **`try`** block causes an exception, not which line.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[/Q Options (Low-Level Operations)](q-options-low-level-operations.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
