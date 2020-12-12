---
description: "Learn more about: /ZW (Windows Runtime Compilation)"
title: "/ZW (Windows Runtime Compilation)"
ms.date: "04/08/2019"
f1_keywords: ["VC.Project.VCCLCompilerTool.CompileAsWinRT", "/zw"]
helpviewer_keywords: ["/ZW", "-ZW compiler option", "/ZW compiler option", "-ZW", "Windows Runtime compiler option"]
ms.assetid: 0fe362b0-9526-498b-96e0-00d7a965a248
---
# /ZW (Windows Runtime Compilation)

Compiles source code to support Microsoft C++ component extensions C++/CX for the creation of Universal Windows Platform (UWP) apps.

When you use **/ZW** to compile, always specify **/EHsc** as well.

## Syntax

```cpp
/ZW /EHsc
/ZW:nostdlib /EHsc
```

## Arguments

**nostdlib**<br/>
Indicates that Platform.winmd, Windows.Foundation.winmd, and other default Windows metadata (.winmd) files are not automatically included in the compilation. Instead, you must use the [/FU (Name Forced #using File)](fu-name-forced-hash-using-file.md) compiler option to explicitly specify Windows metadata files.

## Remarks

When you specify the **/ZW** option, the compiler supports these features:

- The required metadata files, namespaces, data types, and functions that your app requires to execute in the Windows Runtime.

- Automatic reference-counting of Windows Runtime objects, and automatic discarding of an object when its reference count goes to zero.

Because the incremental linker does not support the Windows metadata included in .obj files by using the **/ZW** option, the deprecated [/Gm (Enable Minimal Rebuild)](gm-enable-minimal-rebuild.md) option is incompatible with **/ZW**.

For more information, see [Visual C++ Language Reference](../../cppcx/visual-c-language-reference-c-cx.md).

## Requirements

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
