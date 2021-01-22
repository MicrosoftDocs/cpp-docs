---
description: "Learn more about the alloc_text pragma directive in Microsoft C/C++"
title: "alloc_text pragma"
ms.date: 01/22/2021
f1_keywords: ["vc-pragma.alloc_text", "alloc_text_CPP"]
helpviewer_keywords: ["alloc_text pragma", "pragma, alloc_text"]
no-loc: ["pragma"]
---
# `alloc_text` pragma

Names the code section where the specified function definitions are placed. The pragma must occur between a function declarator and the function definition for the named functions.

## Syntax

> **`#pragma alloc_text(`** "*text-section*" **`,`** *function_1* [**`,`** *function_2* ... ] **`)`**

## Remarks

The **`alloc_text`** pragma doesn't handle C++ member functions or overloaded functions. It's applicable only to functions declared with C linkage, that is, functions declared with the **`extern "C"`** linkage specification. If you attempt to use this pragma on a function with C++ linkage, a compiler error is generated.

Since function addressing using **`__based`** isn't supported, specifying section locations requires the use of the **`alloc_text`** pragma. The name specified by *text-section* should be enclosed in double quotation marks.

The **`alloc_text`** pragma must appear after the declarations of any of the specified functions and before the definitions of these functions.

Functions referenced in an **`alloc_text`** pragma should be defined in the same module as the pragma. Otherwise, if an undefined function is later compiled into a different text section, the error may or may not be caught. Although the program will usually run correctly, the function won't be allocated in the intended sections.

Other limitations on **`alloc_text`** are as follows:

- It can't be used inside a function.

- It must be used after the function has been declared, but before the function has been defined.

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
