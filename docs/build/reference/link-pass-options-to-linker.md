---
title: "/link (Pass Options to Linker)"
ms.date: "11/04/2016"
f1_keywords: ["/link"]
helpviewer_keywords: ["/link compiler option [C++]", "pass options to linker", "link compiler option [C++]", "linker [C++], passing options to", "-link compiler option [C++]", "cl.exe compiler [C++], passing options to linker"]
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
---
# /link (Pass Options to Linker)

Passes one or more linker options to the linker.

## Syntax

```
/link linkeroptions
```

## Arguments

*linkeroptions*<br/>
The linker option or options to be passed to the linker.

## Remarks

The **/link** option and its linker options must appear after any file names and CL options. A space is required between **/link** and `linkeroptions`. For more information, see [Setting Linker Options](linking.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set compiler and build properties](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click a linker property page.

1. Modify one or more properties.

### To set this compiler option programmatically

- This compiler option cannot be changed programmatically.

## See Also

[MSVC Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)