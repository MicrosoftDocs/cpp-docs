---
title: "Preprocessor Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["preprocessor operators", "operators [C++], preprocessor"]
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
---
# Preprocessor Operators
Four preprocessor-specific operators are used in the context of the `#define` directive (see the following list for a summary of each). The stringizing, charizing, and token-pasting operators are discussed in the next three sections. For information on the `defined` operator, see [The #if, #elif, #else, and #endif Directives](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

|Operator|Action|
|--------------|------------|
|[Stringizing operator (#)](../preprocessor/stringizing-operator-hash.md)|Causes the corresponding actual argument to be enclosed in double quotation marks|
|[Charizing operator (#@)](../preprocessor/charizing-operator-hash-at.md)|Causes the corresponding argument to be enclosed in single quotation marks and to be treated as a character (Microsoft Specific)|
|[Token-pasting operator (##)](../preprocessor/token-pasting-operator-hash-hash.md)|Allows tokens used as actual arguments to be concatenated to form other tokens|
|[defined operator](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|Simplifies the writing of compound expressions in certain macro directives|

## See also

[Preprocessor Directives](../preprocessor/preprocessor-directives.md)<br/>
[Predefined Macros](../preprocessor/predefined-macros.md)<br/>
[C/C++ Preprocessor Reference](../preprocessor/c-cpp-preprocessor-reference.md)