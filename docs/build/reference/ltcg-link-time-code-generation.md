---
title: "/LTCG (Link-time code generation)"
description: "The MSVC linker option /LTCG enables link-time code generation for whole-program optimization."
ms.date: 09/08/2022
f1_keywords: ["VC.Project.VCLinkerTool.LinkTimeCodeGeneration", "VC.Project.VCCLWCECompilerTool.WholeProgramOptimization", "/ltcg", "VC.Project.VCCLCompilerTool.WholeProgramOptimization", "VC.Project.VCLinkerTool.LinkStatus"]
helpviewer_keywords: ["link-time code generation in C++ linker", "/LTCG linker option", "-LTCG linker option", "LTCG linker option"]
ms.assetid: 788c6f52-fdb8-40c2-90af-4026ea2cf2e2
---
# `/LTCG` (Link-time code generation)

Use **`/LTCG`** to perform whole-program optimization, or to create profile-guided optimization (PGO) instrumentation, perform training, and create profile-guided optimized builds.

## Syntax

> **`/LTCG`**[**`:`**{**`INCREMENTAL`**\|**`NOSTATUS`**\|**`STATUS`**\|**`OFF`**}]

These options are deprecated starting in Visual Studio 2015:

> **`/LTCG:`**{**`PGINSTRUMENT`**\|**`PGOPTIMIZE`**\|**`PGUPDATE`**}

### Arguments

**`INCREMENTAL`**<br/>
(Optional) Specifies that the linker only applies whole program optimization or link-time code generation (LTCG) to files affected by an edit, instead of the entire project. By default, this flag isn't set when **`/LTCG`** is specified, and the entire project is linked by using whole program optimization.

**`NOSTATUS`** \| **`STATUS`**<br/>
(Optional) Specifies whether the linker displays a progress indicator that shows what percentage of the link is complete. By default, this status information isn't displayed.

**`OFF`**<br/>
(Optional) Disables link-time code generation. The linker treats all modules compiled with **`/GL`** as if they're compiled without that option, and any MSIL modules cause the link to fail.

**`PGINSTRUMENT`**<br/>
(Optional) This option is deprecated starting in Visual Studio 2015. Instead, use **`/LTCG`** and [`/GENPROFILE` or `/FASTGENPROFILE`](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) to generate an instrumented build for profile-guided optimization. The data that is collected from instrumented runs is used to create an optimized image. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md). The short form of this option is **`/LTCG:PGI`**.

**`PGOPTIMIZE`**<br/>
(Optional) This option is deprecated starting in Visual Studio 2015. Instead, use **`/LTCG`** and  [`/USEPROFILE`](useprofile.md) to build an optimized image. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md). The short form of this option is **`/LTCG:PGO`**.

**`PGUPDATE`**<br/>
(Optional) This option is deprecated starting in Visual Studio 2015. Instead, use **`/LTCG`** and  **`/USEPROFILE`** to rebuild an optimized image. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md). The short form of this option is **`/LTCG:PGU`**.

## Remarks

The **`/LTCG`** option tells the linker to call the compiler and perform whole-program optimization. You can also do profile guided optimization. For more information, see [Profile-Guided Optimizations](../profile-guided-optimizations.md).

With the following exceptions, you can't add linker options to the PGO combination of **`/LTCG`** and **`/USEPROFILE`** that weren't specified in the previous PGO initialization combination of **`/LTCG`** and **`/GENPROFILE`** options:

- [`/BASE`](base-base-address.md)

- [`/FIXED`](fixed-fixed-base-address.md)

- **`/LTCG`**

- [`/MAP`](map-generate-mapfile.md)

- [`/MAPINFO`](mapinfo-include-information-in-mapfile.md)

- [`/NOLOGO`](nologo-suppress-startup-banner-linker.md)

- [`/OUT`](out-output-file-name.md)

- [`/PGD`](pgd-specify-database-for-profile-guided-optimizations.md)

- [`/PDB`](pdb-use-program-database.md)

- [`/PDBSTRIPPED`](pdbstripped-strip-private-symbols.md)

- [`/STUB`](stub-ms-dos-stub-file-name.md)

- [`/VERBOSE`](verbose-print-progress-messages.md)

Any linker options that are specified together with the **`/LTCG`** and **`/GENPROFILE`** options to initialize PGO don't have to be specified when you build by using **`/LTCG`** and **`/USEPROFILE`**; they're implied.

The rest of this article discusses the link-time code generation done by **`/LTCG`**.

**`/LTCG`** is implied with [`/GL`](gl-whole-program-optimization.md).

The linker invokes link-time code generation if it's passed a module that was compiled by using **`/GL`** or an MSIL module (see [`.netmodule` Files as Linker Input](netmodule-files-as-linker-input.md)). If you don't explicitly specify **`/LTCG`** when you pass **`/GL`** or MSIL modules to the linker, the linker eventually detects this situation and restarts the link by using **`/LTCG`**. Explicitly specify **`/LTCG`** when you pass **`/GL`** and MSIL modules to the linker for the fastest possible build performance.

For even faster performance, use **`/LTCG:INCREMENTAL`**. This option tells the linker to reoptimize only the files affected by a source file change, instead of the entire project. This option can significantly reduce the link time required. This option isn't the same option as [incremental linking](incremental-link-incrementally.md). If you remove the **`/LTCG:INCREMENTAL`** option, also remove any [`/LTCGOUT`](./ltcgout.md) option to improve build times and disk utilization.

**`/LTCG`** isn't valid for use with [`/INCREMENTAL`](incremental-link-incrementally.md).

When **`/LTCG`** is used to link modules compiled by using [`/Og`](og-global-optimizations.md), [`/O1`](o1-o2-minimize-size-maximize-speed.md), [`/O2`](o1-o2-minimize-size-maximize-speed.md), or [`/Ox`](ox-full-optimization.md), the following optimizations are performed:

- Cross-module inlining

- Interprocedural register allocation (64-bit operating systems only)

- Custom calling convention (x86 only)

- Small TLS displacement (x86 only)

- Stack double alignment (x86 only)

- Improved memory disambiguation (better interference information for global variables and input parameters)

> [!NOTE]
> The linker determines which optimizations were used to compile each function and applies the same optimizations at link time.

Using **`/LTCG`** and **`/O2`** causes double-alignment optimization.

If **`/LTCG`** and **`/O1`** are specified, double alignment isn't performed. If most of the functions in an application are compiled for speed, with a few functions compiled for size (for example, by using the [`optimize`](../../preprocessor/optimize.md) pragma), the compiler double-aligns the functions that are optimized for size if they call functions that require double alignment.

If the compiler can identify all of the call sites of a function, the compiler ignores explicit calling-convention modifiers, and tries to optimize the function's calling convention:

- pass parameters in registers

- reorder parameters for alignment

- remove unused parameters

If a function is called through a function pointer, or if a function is called from outside a module that is compiled by using **`/GL`**, the compiler doesn't attempt to optimize the function's calling convention.

> [!NOTE]
> If you use **`/LTCG`** and redefine `mainCRTStartup`, your application can have unpredictable behavior that relates to user code that executes before global objects are initialized. There are three ways to address this issue: do not redefine `mainCRTStartup`, do not compile the file that contains `mainCRTStartup` by using **`/LTCG`**, or initialize global variables and objects statically.

### `/LTCG` and MSIL Modules

Modules that are compiled by using [`/GL`](gl-whole-program-optimization.md) and [`/clr`](clr-common-language-runtime-compilation.md) can be used as input to the linker when **`/LTCG`** is specified.

- **`/LTCG`** can accept native object files, and mixed native/managed object files (compiled by using **`/clr`**). The **`/clr:pure`** and **`/clr:safe`** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017 and later.

- **`/LTCG:PGI`** doesn't accept native modules compiled by using **`/GL`** and **`/clr`**

### To set this compiler option in the Visual Studio development environment

The Whole Program Optimization property sets several compiler and linker options, including **`/LTCG`**. We recommend you use this property to change the settings for an entire build configuration. To set Whole Program Optimization for your project:

1. Open the project **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **General** property page.

1. Modify the **Whole Program Optimization** property. Choose **OK** or **Apply** to save your changes.

You can also apply **`/LTCG`** to specific builds by choosing **Build** > **Profile Guided Optimization** on the menu bar, or by choosing one of the Profile Guided Optimization options on the shortcut menu for the project.

To enable Link Time Code Generation separately or set a specific Link Time Code Generation option:

1. Open the project **Property Pages** dialog box.

1. Select the **Configuration Properties** > **Linker** > **Optimization** property page.

1. Modify the **Link Time Code Generation** property to one of the following options:
   - **Default**
   - **Use Fast Link Time Code Generation (LTCG:incremental)**
   - **Use Link Time Code Generation (LTCG)**
   - **Profile Guided Optimization - Instrument (LTCG:PGInstrument)**
   - **Profile Guided Optimization - Optimization (LTCG:PGOptimize)**
   - **Profile Guided Optimization - Update (LTCG:PGUpdate)**

1. Choose **OK** or **Apply** to save your changes.

To specify whether the linker displays a progress indicator for Link Time Code Generation:

1. Open the project **Property Pages** dialog box.

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Link Status** property. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkTimeCodeGeneration%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
