---
title: "C/C++ preprocessor reference"
ms.date: "10/31/2019"
helpviewer_keywords: ["preprocessor", "preprocessor, reference overview"]
ms.assetid: e4a52843-7016-4f6d-8b40-cb1ace18f805
---
# C/C++ preprocessor reference

The *C/C++ preprocessor reference* explains the preprocessor as it is implemented in Microsoft C/C++. The preprocessor performs preliminary operations on C and C++ files before they are passed to the compiler. You can use the preprocessor to conditionally compile code, insert files, specify compile-time error messages, and apply machine-specific rules to sections of code.

In Visual Studio 2019 the [/experimental:preprocessor](../build/reference/experimental-preprocessor.md) compiler option enables a new implementation of the preprocessor. The new implementation is still in progress, and is therefore considered experimental. It is intended to eventually be conformant with C99, C11, and C++20. For more information, see [MSVC experimental preprocessor overview](preprocessor-experimental-overview.md).

## In this section

[Preprocessor](preprocessor.md)\
Provides an overview of the traditional and new experimental preprocessors.

[Preprocessor directives](../preprocessor/preprocessor-directives.md)\
Describes directives, typically used to make source programs easy to change and easy to compile in different execution environments.

[Preprocessor operators](../preprocessor/preprocessor-operators.md)\
Discusses the four preprocessor-specific operators used in the context of the `#define` directive.

[Predefined macros](../preprocessor/predefined-macros.md)\
Discusses predefined macros as specified by ANSI and Microsoft C++.

[Pragmas](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
Discusses pragmas, which offer a way for each compiler to offer machine- and operating system-specific features while retaining overall compatibility with the C and C++ languages.

## Related sections

[C++ language reference](../cpp/cpp-language-reference.md)\
Provides reference material for the Microsoft implementation of the C++ language.

[C language reference](../c-language/c-language-reference.md)\
Provides reference material for the Microsoft implementation of the C language.

[C/C++ build reference](../build/reference/c-cpp-building-reference.md)\
Provides links to topics discussing compiler and linker options.

[Visual Studio projects - C++](../build/creating-and-managing-visual-cpp-projects.md)\
Describes the user interface in Visual Studio that enables you to specify the directories that the project system will search to locate files for your C++ project.
