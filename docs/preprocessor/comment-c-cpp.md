---
description: "Learn more about: comment pragma"
title: "comment pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.comment", "comment_CPP"]
helpviewer_keywords: ["annotations [C++]", "comments [C++], compiled files", "pragmas, comment", "comment pragma"]
ms.assetid: 20f099ff-6303-49b3-9c03-a94b6aa69b85
---
# comment pragma

Places a comment record into an object file or executable file.

## Syntax

> **#pragma comment(** *comment-type* [ **,** "*comment-string*" ] **)**

## Remarks

The *comment-type* is one of the predefined identifiers, described below, that specifies the type of comment record. The optional *comment-string* is a string literal that provides additional information for some comment types. Because *comment-string* is a string literal, it obeys all the rules for string literals with respect to escape characters, embedded quotation marks (`"`), and concatenation.

### compiler

Places the name and version number of the compiler in the object file. This comment record is ignored by the linker. If you supply a *comment-string* parameter for this record type, the compiler generates a warning.

### lib

Places a library-search record in the object file. This comment type must be accompanied by a *comment-string* parameter containing the name (and possibly the path) of the library that you want the linker to search. The library name follows the default library-search records in the object file; the linker searches for this library just as if you had named it on the command line provided that the library is not specified with [/nodefaultlib](../build/reference/nodefaultlib-ignore-libraries.md). You can place multiple library-search records in the same source file; each record appears in the object file in the same order in which it is encountered in the source file.

If the order of the default library and an added library is important, compiling with the [/Zl](../build/reference/zl-omit-default-library-name.md) switch will prevent the default library name from being placed in the object module. A second comment pragma then can be used to insert the name of the default library after the added library. The libraries listed with these pragmas will appear in the object module in the same order they are found in the source code.

### linker

Places a [linker option](../build/reference/linker-options.md) in the object file. You can use this comment-type to specify a linker option instead of passing it to the command line or specifying it in the development environment. For example, you can specify the /include option to force the inclusion of a symbol:

```C
#pragma comment(linker, "/include:__mySymbol")
```

Only the following (*comment-type*) linker options are available to be passed to the linker identifier:

- [/DEFAULTLIB](../build/reference/defaultlib-specify-default-library.md)

- [/EXPORT](../build/reference/export-exports-a-function.md)

- [/INCLUDE](../build/reference/include-force-symbol-references.md)

- [/MANIFESTDEPENDENCY](../build/reference/manifestdependency-specify-manifest-dependencies.md)

- [/MERGE](../build/reference/merge-combine-sections.md)

- [/SECTION](../build/reference/section-specify-section-attributes.md)

### user

Places a general comment in the object file. The *comment-string* parameter contains the text of the comment. This comment record is ignored by the linker.

## Examples

The following pragma causes the linker to search for the EMAPI.LIB library while linking. The linker searches first in the current working directory and then in the path specified in the LIB environment variable.

```C
#pragma comment( lib, "emapi" )
```

The following pragma causes the compiler to place the name and version number of the compiler in the object file:

```C
#pragma comment( compiler )
```

For comments that take a *comment-string* parameter, you can use a macro in any place where you would use a string literal, provided that the macro expands to a string literal. You can also concatenate any combination of string literals and macros that expand to string literals. For example, the following statement is acceptable:

```C
#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ )
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
