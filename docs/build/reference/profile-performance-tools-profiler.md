---
title: "/PROFILE (Performance Tools Profiler)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.Profile"]
helpviewer_keywords: ["-PROFILE linker option", "/PROFILE linker option"]
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
---
# /PROFILE (Performance Tools Profiler)

Produces an output file that can be used with the Performance Tools profiler.

## Syntax

```
/PROFILE
```

## Remarks

/PROFILE implies the following linker options:

- [/OPT:REF](../../build/reference/opt-optimizations.md)

- /OPT:NOICF

- [/INCREMENTAL:NO](../../build/reference/incremental-link-incrementally.md)

- [/FIXED:NO](../../build/reference/fixed-fixed-base-address.md)

/PROFILE causes the linker to generate a relocation section in the program image.  A relocation section allows the profiler to transform the program image to get profile data.

**/PROFILE** is only available only in Enterprise (team development) versions.  For more information on PREfast, see [Code Analysis for C/C++ Overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Advanced** property page.

1. Modify the **Profile** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.

## See Also

[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)