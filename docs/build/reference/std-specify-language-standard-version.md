---
title: "/std (Specify Language Standard Version)"
description: "The MSVC compiler option /std specifies the C or C++ language standard supported by the compiler."
ms.date: 06/14/2021
f1_keywords: ["/std", "-std", "/std:c++14", "/std:c++17", "/std:c11", "/std:c17", "VC.Project.VCCLCompilerTool.CppLanguageStandard"]
---
# `/std` (Specify Language Standard Version)

Enable supported C and C++ language features from the specified version of the C or C++ language standard.

## Syntax

> **`/std:c++14`**\
> **`/std:c++17`**\
> **`/std:c++latest`**\
> **`/std:c11`**\
> **`/std:c17`**

## Remarks

The **`/std`** options are available in Visual Studio 2017 and later. They're used to control the version-specific ISO C or C++ programming language standard features enabled during compilation of your code. The options allow you to disable support for certain new language and library features: ones that may break your existing code that conforms to a particular version of the language standard.

### C++ standards support

The **`/std`** option in effect during a C++ compilation can be detected by use of the [`_MSVC_LANG`](../../preprocessor/predefined-macros.md) preprocessor macro. For more information, see [Preprocessor Macros](../../preprocessor/predefined-macros.md).

**`/std:c++14`**\
The **`/std:c++14`** option enables C++14 standard-specific features implemented by the MSVC compiler. This option is the default for code compiled as C++. It's available starting in Visual Studio 2015 Update 3.

This option disables compiler and standard library support for features that are changed or new in more recent versions of the language standard. However, it doesn't disable some C++17 features already implemented in previous releases of the MSVC compiler. For more information, see [Microsoft C/C++ language conformance](../../overview/visual-cpp-language-conformance.md). The tables indicate which C++17 features are enabled when you specify **`/std:c++14`**.

The following features remain enabled when the **`/std:c++14`** option is specified to avoid breaking changes for users who have already taken dependencies on the features available in or before Visual Studio 2015 Update 2:

- [Rules for `auto` with braced-init-lists](https://wg21.link/n3922)
- [`typename` in template template-parameters](https://wg21.link/n4051)
- [Removing trigraphs](https://wg21.link/n4086)
- [Attributes for namespaces and enumerators](https://wg21.link/n4266)
- [u8 character literals](https://wg21.link/n4267)

**`/std:c++17`**\
The **`/std:c++17`** option enables C++17 standard-specific features and behavior. It enables the full set of C++17 features implemented by the MSVC compiler. This option disables compiler and standard library support for features that are new or changed after C++17. It specifically disables post-C++17 changes in the C++ Standard and versions of the Working Draft. It does not disable retroactive defect updates of the C++ Standard. This option is available starting in Visual Studio 2017 version 15.3.

Depending on the MSVC compiler version or update level, C++17 features may not be fully implemented or fully conforming when you specify the **`/std:c++17`** options. For an overview of C++ language conformance in Visual C++ by release version, see [Microsoft C/C++ language conformance](../../overview/visual-cpp-language-conformance.md).

**`/std:c++latest`**\
The **`/std:c++latest`** option enables all currently implemented compiler and standard library features proposed for the next draft standard, as well as some experimental features. This option is available starting in Visual Studio 2015 Update 3.

As of Visual Studio 2019 version 16.10, **`/std:c++latest`** is required to enable all the compiler and standard library features of C++20. There will be a **`/std:c++20`** option that does not include later proposed or experimental features in a future version of Visual Studio.

For a list of supported language and library features, see [What's New for C++ in Visual Studio](../../overview/what-s-new-for-visual-cpp-in-visual-studio.md).

The **`/std:c++latest`** option doesn't enable features guarded by the **`/experimental`** switch, but may be required to enable them.

> [!NOTE]
> The compiler and library features enabled by **`/std:c++latest`** may appear in a future C++ standard, as well as approved C++20 features. Features that have not been approved are subject to breaking changes or removal without notice and are provided on an as-is basis.

### C standards support

You can invoke the Microsoft C compiler by using the [`/TC` or `/Tc`](tc-tp-tc-tp-specify-source-file-type.md) compiler option. It's used by default for code that has a *`.c`* file extension, unless overridden by a **`/TP`** or **`/Tp`** option. The default C compiler (that is, the compiler when **`/std:c11`** or **`/std:c17`** isn't specified) implements ANSI C89, but includes several Microsoft extensions, some of which are part of ISO C99. Some Microsoft extensions to C89 can be disabled by using the [`/Za`](za-ze-disable-language-extensions.md) compiler option, but others remain in effect. It isn't possible to specify strict C89 conformance. The compiler doesn't implement several required features of C99, so it isn't possible to specify C99 conformance, either.

**`/std:c11`**\
The **`/std:c11`** option enables ISO C11 conformance. It's available starting in Visual Studio 2019 version 16.8.

**`/std:c17`**\
The **`/std:c17`** option enables ISO C17 conformance. It's available starting in Visual Studio 2019 version 16.8.

Because the new preprocessor is needed to support these standards, the **`/std:c11`** and **`/std:c17`** compiler options set the [`/Zc:preprocessor`](zc-preprocessor.md) option automatically. If you want to use the traditional (legacy) preprocessor for C11 or C17, you must set the **`/Zc:preprocessor-`** compiler option explicitly. Setting the **`/Zc:preprocessor-`** option may lead to unexpected behavior, and isn't recommended.

> [!NOTE]
> At the time of release and through Visual Studio 2019 version 16.10, the Windows SDK and UCRT libraries installed by Visual Studio don't yet support C11 and C17 code. An updated version of the Windows SDK and UCRT is required. For more information and installation instructions, see [Install C11 and C17 support in Visual Studio](../../overview/install-c17-support.md).

When you specify **`/std:c11`** or **`/std:c17`**, MSVC supports all the features of C11 and C17 required by the standards. The **`/std:c11`** and **`/std:c17`** compiler options enable support for these functionalities:

- [`_Pragma`](../../preprocessor/pragma-directives-and-the-pragma-keyword.md#the-pragma-preprocessing-operator)

- [`restrict`](../../c-language/type-qualifiers.md#restrict)

- [`_Noreturn`](../../c-language/noreturn.md) and \<stdnoreturn.h>

- [`_Alignas`, `_Alignof`](../../c-language/alignment-c.md) and \<stdalign.h>

- [`_Generic`](../../c-language/generic-selection.md) and \<tgmath.h>

- [`_Static_assert`](../../c-language/static-assert-c.md)

The IDE uses C settings for IntelliSense and code highlighting when your source files have a *`.c`* file extension, or when you specify the [`/TC` or `/Tc`](tc-tp-tc-tp-specify-source-file-type.md) compiler option. Currently, IntelliSense in C highlights keywords `_Alignas`, `_Alignof`, `_Noreturn`, and `_Static_assert`, but not the equivalent macros defined in the standard headers: `alignas`, `alignof`, `noreturn`, and `static_assert`.

Since C17 is largely a bug-fix release of ISO C11, MSVC support for C11 already includes all the relevant defect reports. There are no differences between the C11 and C17 versions except for the `__STDC_VERSION__` macro. It expands to `201112L` for C11, and `201710L` for C17.

The compiler doesn't support most optional features of ISO C11. Several of these optional features of C11 were required features of C99 that MSVC hasn't implemented for architectural reasons. You can use the feature test macros such as `__STDC_NO_VLA__` to detect compiler support levels for individual features. For more information about C-specific predefined macros, see [Predefined macros](../../preprocessor/predefined-macros.md).

- There's no conforming multithreading, atomic, or complex number support.

- `aligned_alloc` support is missing, because of the Windows heap implementation. The alternative is to use [`_aligned_malloc`](../../c-runtime-library/reference/aligned-malloc.md).

- [DR 400](http://www.open-std.org/jtc1/sc22/wg14/www/docs/summary.htm#dr_400) support is currently unimplemented for `realloc`, because this change would break the ABI.

- Variable length array (VLA) support isn't planned. VLAs provide attack vectors comparable to [`gets`](../../c-runtime-library/gets-getws.md), which is deprecated and planned for removal.

For more information, see the C Standard library features section of [Microsoft C/C++ language conformance](../../overview/visual-cpp-language-conformance.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. In **C++ Language Standard** (or for C, **C Language Standard**), choose the language standard to support from the dropdown control, then choose **OK** or **Apply** to save your changes.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
