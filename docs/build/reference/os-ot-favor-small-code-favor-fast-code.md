---
title: "/Os, /Ot (Favor Small Code, Favor Fast Code)"
description: "The MSVC compiler options /Os and /Ot specify whether to favor size or speed when optimizing code."
ms.date: 04/18/2022
f1_keywords: ["VC.Project.VCCLWCECompilerTool.FavorSizeOrSpeed", "/os", "VC.Project.VCCLCompilerTool.FavorSizeOrSpeed"]
helpviewer_keywords: ["favor fast code compiler option [C++]", "/Os compiler option [C++]", "Ot compiler option [C++]", "/Ot compiler option [C++]", "small machine code", "-Ot compiler option [C++]", "fast code", "favor small code compiler option [C++]", "Os compiler option [C++]", "-Os compiler option [C++]"]
ms.assetid: 9a340806-fa15-4308-892c-355d83cac0f2
---
# `/Os`, `/Ot` (Favor Small Code, Favor Fast Code)

The **`/Os`** and **`/Ot`** compiler options specify whether to favor size (**`/Os`**) or speed (**`/Ot`**) when optimizing code.

## Syntax

> **`/Os`**\
> **`/Ot`**

## Remarks

**`/Os`** (Favor Small Code) minimizes the size of EXEs and DLLs by instructing the compiler to favor size over speed. The compiler can reduce many C and C++ constructs to functionally similar sequences of machine code. Occasionally these differences offer tradeoffs of size versus speed. The **`/Os`** and **`/Ot`** options allow you to specify a preference for one over the other:

**`/Ot`** (Favor Fast Code) maximizes the speed of EXEs and DLLs by instructing the compiler to favor speed over size. **`/Ot`** is the default when optimizations are enabled. The compiler can reduce many C and C++ constructs to functionally similar sequences of machine code. Occasionally, these differences offer tradeoffs of size versus speed. The **`/Ot`** option is implied by the [`/O2`](o1-o2-minimize-size-maximize-speed.md) (Maximize speed) option. The **`/O2`** option combines several options to produce faster code.

> [!NOTE]
> Information that's gathered from profiling test runs overrides any optimizations that would otherwise be in effect if you specify **`/Ob`**, **`/Os`**, or **`/Ot`**. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md).

### x86-specific example

The following example code demonstrates the difference between the **`/Os`** (Favor small code) option and the **`/Ot`** (Favor fast code) option:

> [!NOTE]
> This example describes the expected behavior when using **`/Os`** or **`/Ot`**. However, compiler behavior from release to release may result in different optimizations for the code below.

```c
/* differ.c
  This program implements a multiplication operator
  Compile with /Os to implement multiply explicitly as multiply.
  Compile with /Ot to implement as a series of shift and LEA instructions.
*/
int differ(int x)
{
    return x * 71;
}
```

As shown in the fragment of machine code below, when *`differ.c`* is compiled for size (**`/Os`**), the compiler implements the multiply expression in the return statement explicitly as a multiply to produce a short but slower sequence of code:

```asm
mov    eax, DWORD PTR _x$[ebp]
imul   eax, 71                  ; 00000047H
```

Alternately, when *`differ.c`* is compiled for speed (**`/Ot`**), the compiler implements the multiply expression in the return statement as a series of shift and `LEA` instructions to produce a fast but longer sequence of code:

```asm
mov    eax, DWORD PTR _x$[ebp]
mov    ecx, eax
shl    eax, 3
lea    eax, DWORD PTR [eax+eax*8]
sub    eax, ecx
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Optimization** property page.

1. Modify the **Favor Size or Speed** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.FavorSizeOrSpeed%2A>.

## See also

[/O options (Optimize code)](o-options-optimize-code.md)<br/>
[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
