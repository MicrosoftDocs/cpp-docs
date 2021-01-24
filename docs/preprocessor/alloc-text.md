---
description: "Learn more about: alloc_text pragma"
title: "alloc_text pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.alloc_text", "alloc_text_CPP"]
helpviewer_keywords: ["alloc_text pragma", "pragmas, alloc_text"]
ms.assetid: 1fd7be18-e4f7-4f70-b079-6326f72b871a
---
# alloc_text pragma

Names the code section where the specified function definitions are to reside. The pragma must occur between a function declarator and the function definition for the named functions.

## Syntax

> **#pragma alloc_text(** "*textsection*" **,** *function1* [**,** *function2* ... ] **)**

## Remarks

The **alloc_text** pragma does not handle C++ member functions or overloaded functions. It is applicable only to functions declared with C linkage — that is, functions declared with the **extern "C"** linkage specification. If you attempt to use this pragma on a function with C++ linkage, a compiler error is generated.

Since function addressing using **`__based`** is not supported, specifying section locations requires the use of the **alloc_text** pragma. The name specified by *textsection* should be enclosed in double quotation marks.

The **alloc_text** pragma must appear after the declarations of any of the specified functions and before the definitions of these functions.

Functions referenced in an **alloc_text** pragma should be defined in the same module as the pragma. Otherwise, if an undefined function is later compiled into a different text section, the error may or may not be caught. Although the program will usually run correctly, the function will not be allocated in the intended sections.

Other limitations on **alloc_text** are as follows:

- It can't be used inside a function.

- It must be used after the function has been declared, but before the function has been defined.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
