---
description: "Learn more about: /Yl (Inject PCH Reference for Debug Library)"
title: "/Yl (Inject PCH Reference for Debug Library)"
ms.date: "01/29/2018"
f1_keywords: ["/yl"]
helpviewer_keywords: ["-Yl compiler option [C++]", "Yl compiler option [C++]", "/Yl compiler option [C++]"]
ms.assetid: 8e4a396a-6790-4a9f-8387-df015a3220e7
---
# /Yl (Inject PCH Reference for Debug Library)

The **/Yl** option generates a unique symbol in a precompiled header file, and a reference to this symbol is injected in all object files that use the precompiled header.

## Syntax

>**/Yl**\
>**/Yl**_name_\
>**/Yl-**

### Arguments

*name*<br/>
An optional name used as part of the unique symbol.

*\-*<br/>
A dash (-) explicitly disables the **/Yl** compiler option.

## Remarks

The **/Yl** compiler option creates a unique symbol definition in a precompiled header file created by using the [/Yc](yc-create-precompiled-header-file.md) option. References to this symbol are automatically injected in all files that include the precompiled header by using the [/Yu](yu-use-precompiled-header-file.md) compiler option. The **/Yl** option is enabled by default when **/Yc** is used to create a precompiled header file.

The **/Yl**_name_ option is used to create an identifiable symbol in the precompiled header file. The compiler uses the *name* argument as part of the decorated symbol name it creates, similar to `__@@_PchSym_@00@...@name`, where the ellipsis (...) represents a unique compiler-generated character string. If the *name* argument is omitted, the compiler generates a symbol name automatically. Normally, you do not need to know the name of the symbol. However, when your project uses more than one precompiled header file, the **/Yl**_name_ option may be useful to determine which object files use which precompiled header. You can use *name* as a search string to find the symbol reference in a dump file.

**/Yl-** disables the default behavior and does not put an identifying symbol in the precompiled header file. Compiled files that include this precompiled header do not get a common symbol reference.

When **/Yc** is not specified, any **/Yl** option has no effect, but if specified it must match any **/Yl** option passed when **/Yc** is specified.

If you use **/Yl-**, **/Yc** and [/Z7](z7-zi-zi-debug-information-format.md) options to build a precompiled header file, the debugging information is stored in the object file for the source file used to create the precompiled header, rather than a separate .pdb file. If this object file is then made part of a library, [LNK1211](../../error-messages/tool-errors/linker-tools-error-lnk1211.md) errors or [LNK4206](../../error-messages/tool-errors/linker-tools-warning-lnk4206.md) warnings can occur in builds that use this library and the precompiled header file, if the source file used to create the precompiled header file does not define any symbols itself. The linker may exclude the object file from the link, along with the associated debugging information, when nothing in the object file is referenced in the library client. To solve this problem, specify **/Yl** (or remove the **/Yl-** option) when you use **/Yc** to create the precompiled header file. This ensures that the object file from the library that contains the debugging information gets linked in your build.

For more information on precompiled headers, see:

- [/Y (Precompiled Headers)](y-precompiled-headers.md)

- [Precompiled Header Files](../creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add the **/Yl**_name_ compiler option in the **Additional Options** box. Choose **OK** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
