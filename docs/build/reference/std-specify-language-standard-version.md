---
title: "-std (Specify Language Standard Version) | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2017"
ms.topic: "reference"
f1_keywords: ["/std", "-std", "VC.Project.VCCLCompilerTool.CppLanguageStandard"]
dev_langs: ["C++"]
ms.assetid: 0acb74ba-1aa8-4c05-b96c-682988dc19bd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /std (Specify Language Standard Version)

Enable supported C++ language features from the specified version of the C++ language standard.

## Syntax

> /std:[c++14|c++17|c++latest]

## Remarks

The **/std** option is is available in Visual Studio 2017 and later. It is used to control the version-specific ISO C++ programming language standard features enabled during compilation of your code. This option allows you to disable support for certain new language and library features that may break your existing code that conforms to a particular version of the language standard. By default, **/std:c++14** is specified, which disables language and standard library features found in later versions of the C++ language standard. Use  **/std:c++17** to enable C++17 standard-specific features and behavior. To explicitly enable the latest supported compiler and standard library features, use **/std:c++latest**.

The default **/std:c++14** option enables the set of C++14 features implemented by the Visual C++ compiler. This option disables compiler and standard library support for features that are changed or new in more recent versions of the language standard, with the exception of some C++17 features already implemented in previous releases of the Visual C++ compiler. To avoid breaking changes for users who have already taken dependencies on the features available as of Visual Studio 2015 Update 2, these features remain enabled when the **/std:c++14** option is specified:

- [Rules for auto with braced-init-lists](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)

- [typename in template template-parameters](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)

- [Removing trigraphs](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)

- [Attributes for namespaces and enumerators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)

- [u8 character literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)

For additional information on which C++14 and C++17 features are enabled when **/std:c++14** is specified, see the notes in [Visual C++ Language Conformance](../../visual-cpp-language-conformance.md).
  
The **/std:c++17** option enables the full set of C++17 features implemented by the Visual C++ compiler. This option disables compiler and standard library support for features that are changed or new in versions of the Working Draft and defect updates of the C++ Standard after C++17.  
  
The **/std:c++latest** option enables the set of C++ language and library features implemented by Visual C++ to track the most recent C++20 Working Draft and defect updates of the C++ Standard that are not included in C++17. Use this switch to get the post-C++17 language features supported by the compiler and standard library. For a list of supported language and library features, see [What's New for Visual C++](../../what-s-new-for-visual-cpp-in-visual-studio.md). The **/std:c++latest** option does not enable features guarded by the **/experimental** switch.  
  
The **/std** option in effect during a C++ compilation can be detected by use of the [\_MSVC\_LANG](../../preprocessor/predefined-macros.md) preprocessor macro. For more information, see [Preprocessor Macros](../../preprocessor/predefined-macros.md).

The **/std:c++14** and **/std:c++latest** options are available beginning in Visual C++ 2015 Update 3. The **/std:c++17** option is available beginning in Visual C++ 2017 version 15.3. As noted above, some C++17 standard behavior is enabled by the **/std:c++14** option, but all other C++17 features are enabled by **/std:c++17**.
  
> [!NOTE]
> Depending on the Visual C++ compiler version or update level, certain C++14 or C++17 features may not be fully implemented or fully conformant when you specify the **/std:c++14** or **/std:c++17** options. For example, the Visual C++ 2017 RTM compiler does not fully support C++14-conformant `constexpr`, expression SFINAE, or 2-phase name lookup. For an overview of C++ language conformance in Visual C++ by release version, see [Visual C++ Language Conformance](../../visual-cpp-language-conformance.md). 
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select **Configuration Properties**, **C/C++**, **Language**.  
  
3.  In **C++ Language Standard**, choose the language standard to support from the dropdown control, then choose **OK** or **Apply** to save your changes.  
  
## See also  
  
[Compiler Options](../../build/reference/compiler-options.md)   
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
