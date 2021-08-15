---
description: "Learn more about: /OPT (Optimizations)"
title: "/OPT (Optimizations)"
ms.date: "05/18/2018"
f1_keywords: ["VC.Project.VCLinkerTool.OptimizeReferences", "/opt", "VC.Project.VCLinkerTool.OptimizeForWindows98", "VC.Project.VCLinkerTool.EnableCOMDATFolding", "VC.Project.VCLinkerTool.OptimizeFolding", "VC.Project.VCLinkerTool.FoldingIterations", "VC.Project.VCLinkerTool.OptimizeFoldingIterations"]
helpviewer_keywords: ["LINK tool [C++], controlling optimizations", "-OPT linker option", "linker [C++], optimizations", "OPT linker option", "optimization, linker", "/OPT linker option"]
ms.assetid: 8f229863-5f53-48a8-9478-243a647093ac
---
# /OPT (Optimizations)

Controls the optimizations that LINK performs during a build.

## Syntax

> **/OPT:**{**REF** \| **NOREF**}\
> **/OPT:**{**ICF**\[**=**_iterations_] \| **NOICF**}\
> **/OPT:**{**LBR** \| **NOLBR**}

## Arguments

**REF** &#124; **NOREF**

**/OPT:REF** eliminates functions and data that are never referenced; **/OPT:NOREF** keeps functions and data that are never referenced.

When /OPT:REF is enabled, LINK removes unreferenced packaged functions and data, known as *COMDATs*. This optimization is known as transitive COMDAT elimination. The **/OPT:REF** option also disables incremental linking.

Inlined functions and member functions defined inside a class declaration are always COMDATs. All of the functions in an object file are made into COMDATs if it is compiled by using the [/Gy](gy-enable-function-level-linking.md) option. To place **`const`** data in COMDATs, you must declare it by using `__declspec(selectany)`. For information about how to specify data for removal or folding, see [selectany](../../cpp/selectany.md).

By default, **/OPT:REF** is enabled by the linker unless **/OPT:NOREF** or [/DEBUG](debug-generate-debug-info.md) is specified. To override this default and keep unreferenced COMDATs in the program, specify **/OPT:NOREF**. You can use the [/INCLUDE](include-force-symbol-references.md) option to override the removal of a specific symbol.

If [/DEBUG](debug-generate-debug-info.md) is specified, the default for **/OPT** is **NOREF**, and all functions are preserved in the image. To override this default and optimize a debug build, specify **/OPT:REF**. This can reduce the size of your executable, and can be a useful optimization even in debug builds. We recommend that you also specify **/OPT:NOICF** to preserve identical functions in debug builds. This makes it easier to read stack traces and set breakpoints in functions that would otherwise be folded together.

**ICF**\[**=**_iterations_] &#124; **NOICF**

Use **ICF**\[**=**_iterations_] to perform identical COMDAT folding. Redundant COMDATs can be removed from the linker output. The optional *iterations* parameter specifies the number of times to traverse the symbols for duplicates. The default number of iterations is 1. Additional iterations may locate more duplicates that are uncovered through folding in the previous iteration.

By default, **/OPT:ICF** is enabled by the linker unless **/OPT:NOICF** or [/DEBUG](debug-generate-debug-info.md) is specified. To override this default and prevent COMDATs from being folded in the program, specify **/OPT:NOICF**.

In a debug build, you must explicitly specify **/OPT:ICF** to enable COMDAT folding. However, because **/OPT:ICF** can merge identical data or functions, it can change the function names that appear in stack traces. It can also make it impossible to set breakpoints in certain functions or to examine some data in the debugger, and can take you into unexpected functions when you single-step through your code. The behavior of the code is identical, but the debugger presentation can be very confusing. Therefore, we do not recommend that you use **/OPT:ICF** in debug builds unless the advantages of smaller code outweigh these disadvantages.

> [!NOTE]
> Because **/OPT:ICF** can cause the same address to be assigned to different functions or read-only data members (that is, **`const`** variables when compiled by using **/Gy**), it can break a program that depends on unique addresses for functions or read-only data members. For more information, see [/Gy (Enable Function-Level Linking)](gy-enable-function-level-linking.md).

**LBR** &#124; **NOLBR**

The **/OPT:LBR** and **/OPT:NOLBR** options apply only to ARM binaries. Because certain ARM processor branch instructions have a limited range, if the linker detects a jump to an out-of-range address, it replaces the branch instruction's destination address with the address of a code "island" that contains a branch instruction that targets the actual destination. You can use **/OPT:LBR** to optimize the detection of long branch instructions and the placement of intermediate code islands to minimize overall code size. **/OPT:NOLBR** instructs the linker to generate code islands for long branch instructions as they are encountered, without optimization.

By default, the **/OPT:LBR** option is set when incremental linking is not enabled. If you want a non-incremental link but not long branch optimizations, specify **/OPT:NOLBR**. The **/OPT:LBR** option disables incremental linking.

## Remarks

When used at the command line, the linker defaults to **/OPT:REF,ICF,LBR**. If **/DEBUG** is specified, the default is **/OPT:NOREF,NOICF,NOLBR**.

The **/OPT** optimizations generally decrease the image size and increase the program speed. These improvements can be substantial in larger programs, which is why they are enabled by default for retail builds.

Linker optimization does take extra time up front, but the optimized code also saves time when the linker has fewer relocations to fix up and creates a smaller final image, and it saves even more time when it has less debug information to process and write into the PDB. When optimization is enabled, it can result in a faster link time overall, as the small additional cost in analysis may be more than offset by the time savings in linker passes over smaller binaries.

The **/OPT** arguments may be specified together, separated by commas. For example, instead of **/OPT:REF /OPT:NOICF**, you can specify **/OPT:REF,NOICF**.

You can use the [/VERBOSE](verbose-print-progress-messages.md) linker option to see the functions that are removed by **/OPT:REF** and the functions that are folded by **/OPT:ICF**.

The **/OPT** arguments are often set for projects created by using the **New Project** dialog in the Visual Studio IDE, and usually have different values for debug and release configurations. If no value is set for these linker options in your project, then you may get the project defaults, which can be different from the default values used by the linker at the command line.

### To set the OPT:ICF or OPT:REF linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. Modify one of these properties:

   - **Enable COMDAT Folding**

   - **References**

### To set the OPT:LBR linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option in **Additional Options**:

   `/opt:lbr` or `/opt:nolbr`

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A> properties.

## See also

- [MSVC linker reference](linking.md)
- [MSVC Linker Options](linker-options.md)
