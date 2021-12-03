---
description: "Learn more about: XML documentation tag <see>"
title: "<see> (C++ Documentation Comments)"
ms.date: 12/03/2021
f1_keywords: ["<see>"]
helpviewer_keywords: ["<see> C++ XML tag", "see C++ XML tag"]
ms.assetid: 20ef66f4-b278-45cf-8613-63919edf5720
---
# `<see>` documentation tag

The `<see>` tag lets you specify a link from within text. Use [`<seealso>`](seealso-visual-cpp.md) to indicate text that you might want to appear in a **See also** section.

## Syntax

```cpp
/// <see cref="member"/>
```

### Parameters

*`member`*\
A reference to a member or field that is available to be called from the current compilation environment. Enclose the name in single or double quotation marks.

The compiler checks that the given code element exists and resolves *`member`* to the element name in the output XML.  The compiler issues a warning if it doesn't find *`member`*.

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

For an example of using `<see>`, see [`<summary>`](summary-visual-cpp.md).

The MSVC compiler will attempt to resolve `cref` references in one pass through the documentation comments.  If the compiler doesn't find a symbol when it's using the C++ lookup rules, it marks the reference as unresolved. For more information, see [`<seealso>`](seealso-visual-cpp.md).

## Example

The following sample shows how you can make `cref` reference to a generic type so the compiler will resolve the reference.

```cpp
// xml_see_cref_example.cpp
// compile with: /LD /clr /doc
// the following cref shows how to specify the reference, such that,
// the compiler will resolve the reference
/// <see cref="C{T}">
/// </see>
ref class A {};

// the following cref shows another way to specify the reference,
// such that, the compiler will resolve the reference
/// <see cref="C < T >"/>

// the following cref shows how to hard-code the reference
/// <see cref="T:C`1">
/// </see>
ref class B {};

/// <see cref="A">
/// </see>
/// <typeparam name="T"></typeparam>
generic<class T>
ref class C {};
```

## See also

[XML documentation](xml-documentation-visual-cpp.md)
