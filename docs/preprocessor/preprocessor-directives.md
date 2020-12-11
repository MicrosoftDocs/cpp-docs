---
description: "Learn more about: Preprocessor directives"
title: "Preprocessor directives"
ms.date: "08/29/2019"
helpviewer_keywords: ["directives, preprocessor", "preprocessor, directives"]
ms.assetid: e0fc4564-b6cf-4a36-bf51-6ccd7abd0a94
---
# Preprocessor directives

Preprocessor directives, such as `#define` and `#ifdef`, are typically used to make source programs easy to change and easy to compile in different execution environments. Directives in the source file tell the preprocessor to take specific actions. For example, the preprocessor can replace tokens in the text, insert the contents of other files into the source file, or suppress compilation of part of the file by removing sections of text. Preprocessor lines are recognized and carried out before macro expansion. Therefore, if a macro expands into something that looks like a preprocessor command, it isn't recognized by the preprocessor.

Preprocessor statements use the same character set as source file statements, with the exception that escape sequences aren't supported. The character set used in preprocessor statements is the same as the execution character set. The preprocessor also recognizes negative character values.

The preprocessor recognizes the following directives:

:::row:::
   :::column span="":::
      [`#define`](../preprocessor/hash-define-directive-c-cpp.md)\
      [`#elif`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)\
      [`#else`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)\
      [`#endif`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`#error`](../preprocessor/hash-error-directive-c-cpp.md)\
      [`#if`](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)\
      [`#ifdef`](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)\
      [`#ifndef`](../preprocessor/hash-ifdef-and-hash-ifndef-directives-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`#import`](../preprocessor/hash-import-directive-cpp.md)\
      [`#include`](../preprocessor/hash-include-directive-c-cpp.md)\
      [`#line`](../preprocessor/hash-line-directive-c-cpp.md)
   :::column-end:::
   :::column span="":::
      [`#pragma`](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
      [`#undef`](../preprocessor/hash-undef-directive-c-cpp.md)\
      [`#using`](../preprocessor/hash-using-directive-cpp.md)
   :::column-end:::
:::row-end:::

The number sign (`#`) must be the first nonwhite-space character on the line containing the directive. White-space characters can appear between the number sign and the first letter of the directive. Some directives include arguments or values. Any text that follows a directive (except an argument or value that is part of the directive) must be preceded by the single-line comment delimiter (`//`) or enclosed in comment delimiters (`/* */`). Lines containing preprocessor directives can be continued by immediately preceding the end-of-line marker with a backslash (`\`).

Preprocessor directives can appear anywhere in a source file, but they apply only to the rest of the source file, after they appear.

## See also

[Preprocessor operators](../preprocessor/preprocessor-operators.md)\
[Predefined macros](../preprocessor/predefined-macros.md)\
[c/c++ preprocessor reference](../preprocessor/c-cpp-preprocessor-reference.md)
