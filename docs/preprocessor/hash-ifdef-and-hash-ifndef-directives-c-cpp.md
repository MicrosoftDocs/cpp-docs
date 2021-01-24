---
description: "Learn more about: #ifdef and #ifndef directives (C/C++)"
title: "#ifdef and #ifndef directives (C/C++)"
ms.date: "08/29/2019"
f1_keywords: ["#ifndef", "#ifdef"]
helpviewer_keywords: ["#ifdef directive", "preprocessor, directives", "ifdef directive (#ifdef)", "ifndef directive (#ifndef)", "#ifndef directive"]
ms.assetid: 2b0be69d-9e72-45d8-8e24-e4130fb2455b
---
# #ifdef and #ifndef directives (C/C++)

The **#ifdef** and **#ifndef** directives have the same effect as the [#if](hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md) directive when it's used with the **defined** operator.

## Syntax

> **#ifdef** *identifier*\
> **#ifndef** *identifier*

These directives are equivalent to:

> **#if defined** *identifier*\
> **#if !defined** *identifier*

## Remarks

You can use the **#ifdef** and **#ifndef** directives anywhere `#if` can be used. The **#ifdef** *identifier* statement is equivalent to `#if 1` when *identifier* has been defined. It's equivalent to `#if 0` when *identifier* hasn't been defined, or has been undefined by the `#undef` directive. These directives check only for the presence or absence of identifiers defined with `#define`, not for identifiers declared in the C or C++ source code.

These directives are provided only for compatibility with previous versions of the language. The **defined(** *identifier* **)** constant expression used with the `#if` directive is preferred.

The **#ifndef** directive checks for the opposite of the condition checked by **#ifdef**. If the identifier has not been defined, or if its definition has been removed with `#undef`, the condition is true (nonzero). Otherwise, the condition is false (0).

**Microsoft Specific**

The *identifier* can be passed from the command line using the [/D](../build/reference/d-preprocessor-definitions.md) option. Up to 30 macros can be specified with `/D`.

The **#ifdef** directive is useful for checking whether a definition exists, because a definition can be passed from the command line. For example:

```cpp
// ifdef_ifndef.CPP
// compile with: /Dtest /c
#ifndef test
#define final
#endif
```

**END Microsoft Specific**

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)
