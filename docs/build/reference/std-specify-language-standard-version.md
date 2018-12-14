---
title: "/std (Specify Language Standard Version)"
ms.date: "11/26/2018"
f1_keywords: ["/std", "-std", "VC.Project.VCCLCompilerTool.CppLanguageStandard"]
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
---
# /std (Specify Language Standard Version)

Enable supported C++ language features from the specified version of the C++ language standard.

## Syntax

> /std:\[c++14\|c++17\|c++latest]

## Remarks

The **/std** option is available in Visual Studio 2017 and later. It is used to control the version-specific ISO C++ programming language standard features enabled during compilation of your code. This option allows you to disable support for certain new language and library features that may break your existing code that conforms to a particular version of the language standard. By default, **/std:c++14** is specified, which disables language and standard library features found in later versions of the C++ language standard. Use  **/std:c++17** to enable C++17 standard-specific features and behavior. To explicitly enable the currently implemented compiler and standard library features proposed for the next draft standard, use **/std:c++latest**.

The default **/std:c++14** option enables the set of C++14 features implemented by the MSVC compiler. This option disables compiler and standard library support for features that are changed or new in more recent versions of the language standard, with the exception of some C++17 features already implemented in previous releases of the MSVC compiler. To avoid breaking changes for users who have already taken dependencies on the features available as of Visual Studio 2015 Update 2, these features remain enabled when the **/std:c++14** option is specified:

- [Rules for auto with braced-init-lists](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)

- [typename in template template-parameters](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)

- [Removing trigraphs](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)

- [Attributes for namespaces and enumerators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

- [u8 character literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)

For additional information on which C++14 and C++17 features are enabled when **/std:c++14** is specified, see the notes in [Visual C++ Language Conformance](../../visual-cpp-language-conformance.md).

The **/std:c++17** option enables the full set of C++17 features implemented by the MSVC compiler. This option disables compiler and standard library support for features that are changed or new in versions of the Working Draft and defect updates of the C++ Standard after C++17.

The **/std:c++latest** option enables the post-C++17 language and library features currently implemented in the compiler and libraries. These may include features from the C++20 Working Draft and defect updates of the C++ Standard that are not included in C++17, as well as experimental proposals for the draft standard. For a list of supported language and library features, see [What's New for Visual C++](../../what-s-new-for-visual-cpp-in-visual-studio.md). The **/std:c++latest** option does not enable features guarded by the **/experimental** switch, but may be required to enable them.

> [!IMPORTANT]
> The compiler and library features enabled by **/std:c++latest** are provided as-is and without support. They are subject to breaking changes or removal without notice. They are intended as a preview of language features that may appear in the next version of the standard, but the standard is a work in progress. Use **/std:c++17** to use the features in the latest ISO C++ standard.

The **/std** option in effect during a C++ compilation can be detected by use of the [\_MSVC\_LANG](../../preprocessor/predefined-macros.md) preprocessor macro. For more information, see [Preprocessor Macros](../../preprocessor/predefined-macros.md).

The **/std:c++14** and **/std:c++latest** options are available beginning in Visual C++ 2015 Update 3. The **/std:c++17** option is available beginning in Visual C++ 2017 version 15.3. As noted above, some C++17 standard behavior is enabled by the **/std:c++14** option, but all other C++17 features are enabled by **/std:c++17**.

> [!NOTE]
> Depending on the MSVC compiler version or update level, certain C++14 or C++17 features may not be fully implemented or fully conformant when you specify the **/std:c++14** or **/std:c++17** options. For example, the Visual C++ 2017 RTM compiler does not fully support C++14-conformant `constexpr`, expression SFINAE, or 2-phase name lookup. For an overview of C++ language conformance in Visual C++ by release version, see [Visual C++ Language Conformance](../../visual-cpp-language-conformance.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select **Configuration Properties**, **C/C++**, **Language**.

1. In **C++ Language Standard**, choose the language standard to support from the dropdown control, then choose **OK** or **Apply** to save your changes.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
