---
title: "/Za, /Ze (Disable Language Extensions) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.DisableLanguageExtensions", "/za", "/ze", "VC.Project.VCCLCompilerTool.DisableLanguageExtensions"]
helpviewer_keywords: ["-Za compiler option [C++]", "Za compiler option [C++]", "language extensions, disabling in compiler", "-Ze compiler option [C++]", "language extensions", "enable language extensions", "/Za compiler option [C++]", "/Ze compiler option [C++]", "Disable Language Extensions compiler option", "Ze compiler option [C++]"]
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
---
# /Za, /Ze (Disable Language Extensions)

The **/Za** compiler option emits an error for language constructs that are not compatible with ANSI C89 or ISO C++11. The **/Ze** compiler option, which is on by default, enables Microsoft extensions.

## Syntax

```
/Za
/Ze
```

## Remarks

> [!NOTE]
>  The **/Ze** option is deprecated because its behavior is on by default. We recommend you use the [/Zc (Conformance)](zc-conformance.md) compiler options to control specific language extension features. For a list of deprecated compiler options, see the **Deprecated and Removed Compiler Options** section in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

The Visual C++ compiler offers a number of features beyond those specified in either the ANSI C89, ISO C99, or ISO C++ standards. These features are known collectively as Microsoft extensions to C and C++. These extensions are available by default, and not available when the **/Za** option is specified. For more information about specific extensions, see [Microsoft Extensions to C and C++](microsoft-extensions-to-c-and-cpp.md).

We recommend that you disable language extensions by specifying the **/Za** option if you plan to port your program to other environments. When **/Za** is specified, the compiler treats Microsoft extended keywords as simple identifiers, disables the other Microsoft extensions, and automatically defines the `__STDC__` predefined macro for C programs.

Other compiler options used with **/Za** can affect how the compiler ensures standards conformance.

For ways to specify specific standards-conformant behavior settings, see the [/Zc](zc-conformance.md) compiler option.

For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set compiler and build properties](../working-with-project-properties.md).

1. In the navigation pane, choose **Configuration Properties**, **C/C++**, **Language**.

1. Modify the **Disable Language Extensions** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)<br/>
[/Zc (Conformance)](zc-conformance.md)
