---
title: "/Od (Disable (Debug))"
ms.date: "11/04/2016"
f1_keywords: ["/od"]
helpviewer_keywords: ["no optimizations", "fast compiling", "/Od compiler option [C++]", "disable optimizations", "Od compiler option [C++]", "-Od compiler option [C++]", "disable (debug) compiler option [C++]"]
ms.assetid: b1ac31b7-e086-4eeb-be5e-488f7513f5f5
---
# /Od (Disable (Debug))

Turns off all optimizations in the program and speeds compilation.

## Syntax

```
/Od
```

## Remarks

This option is the default. Because **/Od** suppresses code movement, it simplifies the debugging process. For more information about compiler options for debugging, see [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Optimization** property page.

1. Modify the **Optimization** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>.

## See also

- [/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)
- [Compiler Options](../../build/reference/compiler-options.md)
- [Setting Compiler Options](../../build/reference/setting-compiler-options.md)
- [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md)
