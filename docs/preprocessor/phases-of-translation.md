---
title: "Phases of Translation"
ms.date: "10/18/2018"
helpviewer_keywords: ["translation phases", "preprocessor, translation", "translation, compiler process", "preprocessor", "file translation [C++], compiler process", "files [C++], translation"]
ms.assetid: a7f7a8c9-e8ba-4321-9e50-ebfbbdcce9db
---
# Phases of Translation

C and C++ programs consist of one or more source files, each of which contains some of the text of the program. A source file, together with its include files (files that are included using the `#include` preprocessor directive) but not including sections of code removed by conditional-compilation directives such as `#if`, is called a "translation unit."

Source files can be translated at different times — in fact, it is common to translate only out-of-date files. The translated translation units can be processed into separate object files or object-code libraries. These separate, translated translation units are then linked to form an executable program or a dynamic-link library (DLL).  For more information about files that can be used as input to the linker, see [LINK Input Files](../build/reference/link-input-files.md).

Translation units can communicate using:

- Calls to functions that have external linkage.

- Calls to class member functions that have external linkage.

- Direct modification of objects that have external linkage.

- Direct modification of files.

- Interprocess communication (for Microsoft Windows-based applications only).

The following list describes the phases in which the compiler translates files:

*Character mapping*<br/>
Characters in the source file are mapped to the internal source representation. Trigraph sequences are converted to single-character internal representation in this phase.

*Line splicing*<br/>
All lines ending in a backslash (**\\**) and immediately followed by a newline character are joined with the next line in the source file forming logical lines from the physical lines. Unless it is empty, a source file must end in a newline character that is not preceded by a backslash.

*Tokenization*<br/>
The source file is broken into preprocessing tokens and white-space characters. Comments in the source file are replaced with one space character each. Newline characters are retained.

*Preprocessing*<br/>
Preprocessing directives are executed and macros are expanded into the source file. The `#include` statement invokes translation starting with the preceding three translation steps on any included text.

*Character-set mapping*<br/>
All source character set members and escape sequences are converted to their equivalents in the execution character set. For Microsoft C and C++, both the source and the execution character sets are ASCII.

*String concatenation*<br/>
All adjacent string and wide-string literals are concatenated. For example, `"String " "concatenation"` becomes `"String concatenation"`.

*Translation*<br/>
All tokens are analyzed syntactically and semantically; these tokens are converted into object code.

*Linkage*<br/>
All external references are resolved to create an executable program or a dynamic-link library.

The compiler issues warnings or errors during phases of translation in which it encounters syntax errors.

The linker resolves all external references and creates an executable program or DLL by combining one or more separately processed translation units along with standard libraries.

## See also

- [Preprocessor](../preprocessor/preprocessor.md)
