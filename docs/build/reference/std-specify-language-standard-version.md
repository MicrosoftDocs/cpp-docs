---
title: "/std (Specify Language Standard Version)"
description: "The MSVC compiler option /std specifies the C or C++ language standard supported by the compiler."
ms.date: "5/21/2021"
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

The **`/std`** option is available in Visual Studio 2017 and later. It's used to control the version-specific ISO C or C++ programming language standard features enabled during compilation of your code. This option allows you to disable support for certain new language and library features: ones that may break your existing code that conforms to a particular version of the language standard.

### C++ standards support

The **`/std`** option in effect during a C++ compilation can be detected by use of the [\_MSVC\_LANG](../../preprocessor/predefined-macros.md) preprocessor macro. For more information, see [Preprocessor Macros](../../preprocessor/predefined-macros.md).

**`/std:c++14`**

Enables C++14 standard-specific features implemented by the MSVC compiler. This option is the default for code compiled as C++. Available starting with Visual Studio 2015 Update 3. Enables C++14 standard-specific features implemented by the MSVC compiler.

This option disables compiler and standard library support for features that are changed or new in more recent versions of the language standard.<br>It doesn't disable some C++17 features already implemented in previous releases of the MSVC compiler. See [Microsoft C++ language conformance table](../../overview/visual-cpp-language-conformance.md) for a list of which C++14 and C++17 features are enabled when you specify **`/std:c++14`**.

The following features remain enabled when the **`/std:c++14`** option is specified to avoid breaking changes for users who have already taken dependencies on the features available in or before Visual Studio 2015 Update 2:

- [Rules for `auto` with braced-init-lists](https://wg21.link/n3922)
- [`typename` in template template-parameters](https://wg21.link/n4051)
- [Removing trigraphs](https://wg21.link/n4086)
- [Attributes for namespaces and enumerators](https://wg21.link/n4266)
- [u8 character literals](https://wg21.link/n4267)

**`/std:c++17`**

Enable C++17 standard-specific features and behavior. Enables the full set of C++17 features implemented by the MSVC compiler. This option disables compiler and standard library support for features that are new or changed after C++17. That includes post-C++17 changes in versions of the Working Draft and defect updates of the C++ Standard. Available starting in Visual Studio version 15.3

Depending on the MSVC compiler version or update level, C++17 features may not be fully implemented or fully conforming when you specify the **`/std:c++17`** options. For an overview of C++ language conformance in Visual C++ by release version, see [Microsoft C++ language conformance table](../../overview/visual-cpp-language-conformance.md).

**`/std:c++latest`**

Enable all currently implemented compiler and standard library features proposed for the next draft standard. Available starting with Visual Studio 2015 Update 3

Enables the post-C++17 language and library features currently implemented in the compiler and libraries. These features may include changes from the C++20 Working Draft, defect updates that aren't included in C++17, and experimental proposals for the draft standard.

For a list of supported language and library features, see [What's New for Visual C++](../../overview/what-s-new-for-visual-cpp-in-visual-studio.md).

This option doesn't enable features guarded by the **`/experimental`** switch, but may be required to enable them.

> [!NOTE]
> The compiler and library features enabled by **`/std:c++latest`** may appear in a future C++ standard, as well as approved C++20 features. Features that have not been approved are subject to breaking changes or removal without notice and are provided on an as-is basis.
### C standards support

By default, when code is compiled as C, the MSVC compiler doesn't conform to a particular C standard. It implements ANSI C89 with several Microsoft extensions, some of which are part of ISO C99. Some Microsoft extensions can be disabled by using the [`/Za`](za-ze-disable-language-extensions.md) compiler option, but others remain in effect. It isn't possible to specify strict C89 conformance.

**`/std:c11`**

Enable ISO C11 conformance. Available starting in Visual Studio 2019 version 16.8.

**`/std:c17`**

Enable ISO C17 conformance. Available starting in Visual Studio 2019 version 16.8.

Because the new preprocessor is needed to support these standards, the **`/std:c11`** and **`/std:c17`** compiler options set the [`/Zc:preprocessor`](zc-preprocessor.md) option automatically. If you want to use the traditional (legacy) preprocessor for C11 or C17, you must set the **`/Zc:preprocessor-`** compiler option explicitly. Setting the **`/Zc:preprocessor-`** option may lead to unexpected behavior, and isn't recommended.

> [!NOTE]
> At the time of release, the latest Windows SDK and UCRT libraries do not yet support C11 and C17 code. A pre-release version of the Windows SDK and UCRT is required. For more information and installation instructions, see [Install C11 and C17 support in Visual Studio](../../overview/install-c17-support.md).

When you specify **`/std:c11`** or **`/std:c17`**, MSVC supports all the required features of C11 and C17. The compiler options enable support for these functionalities:

- [`_Pragma`](../../preprocessor/pragma-directives-and-the-pragma-keyword.md#the-_pragma-preprocessing-operator-c99-c11)

- **`restrict`**

- **`_Noreturn`** and \<stdnoreturn.h>

- **`_Alignas`**, **`_Alignof`** and \<stdalign.h>

- **`_Generic`** and \<tgmath.h>

- **`_Static_assert`**

The IDE uses C settings for IntelliSense and code highlighting when your source files have a *`.c`* file extension, or when you specify the [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) compiler option. Currently, IntelliSense highlighting is only available for keywords, and not the macros introduced by the standard headers.

Since C17 is largely a bug fix release of ISO C11, MSVC support for C11 already includes all the relevant defect reports. At present, there are no differences between the C11 and C17 versions except for the `__STDC_VERSION__` macro. It expands to `201112L` for C11, and `201710L` for C17.

The compiler doesn't support any optional features of ISO C11. Several of these optional features of C11 were required features of C99 that MSVC hasn't implemented for architectural reasons. You can use the feature test macros such as `__STDC_NO_VLA__` to detect compiler support levels for individual features. For more information about C-specific predefined macros, see [Predefined macros](../../preprocessor/predefined-macros.md).

- There's no conforming multithreading, atomic, or complex number support in the Visual Studio 2019 version 16.8 release.

- `aligned_alloc` support is missing, because of the Windows heap implementation. The alternative is to use [`_aligned_malloc`](../../c-runtime-library/reference/aligned-malloc.md).

- DR 400 support is currently unimplemented for `realloc`, because this change would break the ABI.

- Variable length array (VLA) support isn't planned. Variable length arrays are often less efficient than comparable fixed sized arrays. They're also inefficient compared to equivalent heap memory allocations, when safely and securely implemented. VLAs provide attack vectors comparable to `gets()`, which is deprecated and planned for removal.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. In **C++ Language Standard** (or for C, **C Language Standard**), choose the language standard to support from the dropdown control, then choose **OK** or **Apply** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
