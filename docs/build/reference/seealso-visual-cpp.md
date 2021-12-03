---
description: "Learn more about: XML documentation tag <seealso>"
title: "<seealso> (C++ Documentation Comments)"
ms.date: 12/03/2021
f1_keywords: ["<seealso>"]
helpviewer_keywords: ["seealso C++ XML tag", "<seealso> C++ XML tag"]
ms.assetid: cb33d100-9c50-4485-8d0c-573429eff155
---
# `<seealso>` documentation tag

The `<seealso>` tag lets you specify the text that you might want to appear in a See Also section. Use [`<see>`](see-visual-cpp.md) to specify a link from within text.

## Syntax

```cpp
/// <seealso cref="member"/>
```

### Parameters

*`member`*\
A reference to a member or field that is available to be called from the current compilation environment.  Enclose the name in single or double quotation marks.

The compiler checks that the given code element exists and resolves *`member`* to the element name in the output XML.  The compiler issues a warning if it doesn't find *`member`*.

For information on how to create a `cref` reference to a generic type, see [`<see>`](see-visual-cpp.md).

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

See [`<summary>`](summary-visual-cpp.md) for an example of using `<seealso>`.

The MSVC compiler attempts to resolve `cref` references in one pass through the documentation comments.  If the compiler doesn't find a symbol when using the C++ lookup rules, it marks the reference as unresolved.

## Example

In the following sample, an unresolved symbol is referenced in a `cref`. The XML comment for the `cref` to `A::Test` is well formed: `<seealso cref="M:A.Test" />`. However, the `cref` to `B::Test` becomes `<seealso cref="!:B::Test" />`.

```cpp
// xml_seealso_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_seealso_tag.dll

/// Text for class A.
public ref struct A {
   /// <summary><seealso cref="A::Test"/>
   /// <seealso cref="B::Test"/>
   /// </summary>
   void MyMethod(int Int1) {}

   /// text
   void Test() {}
};

/// Text for class B.
public ref struct B {
   void Test() {}
};
```

## See also

[XML documentation](xml-documentation-visual-cpp.md)
