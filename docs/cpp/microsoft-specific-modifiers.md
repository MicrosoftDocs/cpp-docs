---
description: "Learn more about: Microsoft-specific modifiers"
title: "Microsoft-specific modifiers"
ms.date: "08/16/2018"
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
---
# Microsoft-specific modifiers

This section describes Microsoft-specific extensions to C++ in the following areas:

- [Based addressing](based-addressing.md), the practice of using a pointer as a base from which other pointers can be offset

- [Function calling conventions](calling-conventions.md)

- Extended storage-class attributes declared with the [__declspec](declspec.md) keyword

- The [__w64](w64.md) keyword

## Microsoft-specific keywords

Many of the Microsoft-specific keywords can be used to modify declarators to form derived types. For more information about declarators, see [Declarators](./declarations-and-definitions-cpp.md).

|Keyword|Meaning|Used to Form Derived Types?|
|-------------|-------------|---------------------------------|
|[__based](based-grammar.md)|The name that follows declares a 32-bit offset to the 32-bit base contained in the declaration.|Yes|
|[__cdecl](cdecl.md)|The name that follows uses the C naming and calling conventions.|Yes|
|[__declspec](declspec.md)|The name that follows specifies a Microsoft-specific storage-class attribute.|No|
|[__fastcall](fastcall.md)|The name that follows declares a function that uses registers, when available, instead of the stack for argument passing.|Yes|
|[__restrict](extension-restrict.md)|Similar to __declspec([restrict](restrict.md)), but for use on variables.|No|
|[__stdcall](stdcall.md)|The name that follows specifies a function that observes the standard calling convention.|Yes|
|[__w64](w64.md)|Marks a data type as being larger on a 64-bit compiler.|No|
|[__unaligned](unaligned.md)|Specifies that a pointer to a type or other data is not aligned..|No|
|[__vectorcall](vectorcall.md)|The name that follows declares a function that uses registers, including SSE registers, when available, instead of the stack for argument passing.|Yes|

## See also

[C++ Language Reference](cpp-language-reference.md)
