---
description: "Learn more about: /Za, /Ze (Disable Language Extensions)"
title: "/Za, /Ze (Disable Language Extensions)"
ms.date: "02/19/2019"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.DisableLanguageExtensions", "/za", "/ze", "VC.Project.VCCLCompilerTool.DisableLanguageExtensions"]
helpviewer_keywords: ["-Za compiler option [C++]", "Za compiler option [C++]", "language extensions, disabling in compiler", "-Ze compiler option [C++]", "language extensions", "enable language extensions", "/Za compiler option [C++]", "/Ze compiler option [C++]", "Disable Language Extensions compiler option", "Ze compiler option [C++]"]
ms.assetid: 65e49258-7161-4289-a176-7c5c0656b1a2
---
# /Za, /Ze (Disable Language Extensions)

The **/Za** compiler option disables and emits errors for Microsoft extensions to C that aren't compatible with ANSI C89/ISO C90. The deprecated **/Ze** compiler option enables Microsoft extensions. Microsoft extensions are enabled by default.

## Syntax

> **/Za**\
> **/Ze**

## Remarks

> [!NOTE]
> The use of **/Za** when code is compiled as C++ is not recommended. The **/Ze** option is deprecated because its behavior is on by default. For a list of deprecated compiler options, see [Deprecated and removed compiler options](compiler-options-listed-by-category.md#deprecated-and-removed-compiler-options).

The Microsoft C/C++ compiler supports compilation of C code in two ways:

- The compiler uses C compilation mode by default when a source file has a *.c* extension, or when the [/Tc](tc-tp-tc-tp-specify-source-file-type.md) or [/TC](tc-tp-tc-tp-specify-source-file-type.md) option is specified. The C compiler is an C89/C90 compiler that, by default, enables Microsoft extensions to the C language. For more information about specific extensions, see [Microsoft Extensions to C and C++](microsoft-extensions-to-c-and-cpp.md). When both C compilation and the **/Za** option are specified, the C compiler conforms strictly to the C89/C90 standard. The compiler treats Microsoft extended keywords as simple identifiers, disables the other Microsoft extensions, and automatically defines the [\_\_STDC\_\_](../../preprocessor/predefined-macros.md) predefined macro for C programs.

- The compiler can compile C code in C++ compilation mode. This behavior is the default for source files that don't have a *.c* extension, and when the [/Tp](tc-tp-tc-tp-specify-source-file-type.md) or [/TP](tc-tp-tc-tp-specify-source-file-type.md) option is specified. In C++ compilation mode, the compiler supports those parts of the ISO C99 and C11 standards that have been incorporated into the C++ standard. Almost all C code is also valid C++ code. A small number of C keywords and code constructs aren't valid C++ code, or are interpreted differently in C++. The compiler behaves according to the C++ standard in these cases. In C++ compilation mode, the **/Za** option may cause unexpected behavior and isn't recommended.

Other compiler options can affect how the compiler ensures standards conformance. For ways to specify specific standard C and C++ behavior settings, see the [/Zc](zc-conformance.md) compiler option. For additional C++ standard conformance settings, see the [/permissive-](permissive-standards-conformance.md) and [/std](std-specify-language-standard-version.md) compiler options.

For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the navigation pane, choose **Configuration Properties** > **C/C++** > **Language**.

1. Modify the **Disable Language Extensions** property.

### To set this compiler option programmatically

See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableLanguageExtensions%2A>.

## See also

[Compiler Options](compiler-options.md)<br/>
[/Zc (Conformance)](zc-conformance.md)<br/>
[/permissive- (Standards conformance)](permissive-standards-conformance.md)<br/>
[/std (Specify Language Standard Version)](std-specify-language-standard-version.md)<br/>
