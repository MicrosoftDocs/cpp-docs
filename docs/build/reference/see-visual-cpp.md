---
description: "Learn more about: &lt;see&gt;"
title: "&lt;see> (C++ Documentation Comments)"
ms.date: "11/04/2016"
f1_keywords: ["<see>", "see"]
helpviewer_keywords: ["<see> C++ XML tag", "see C++ XML tag"]
ms.assetid: 20ef66f4-b278-45cf-8613-63919edf5720
---
# &lt;see&gt;

The \<see> tag lets you specify a link from within text. Use [\<seealso>](seealso-visual-cpp.md) to indicate text that you might want to appear in a See Also section.

## Syntax

```
<see cref="member"/>
```

#### Parameters

*member*<br/>
A reference to a member or field that is available to be called from the current compilation environment.  Enclose the name in single or double quotation marks.

The compiler checks that the given code element exists and resolves `member` to the element name in the output XML.  The compiler issues a warning if it does not find `member`.

## Remarks

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

See [\<summary>](summary-visual-cpp.md) for an example of using \<see>.

The MSVC compiler will attempt to resolve cref references in one pass through the documentation comments.  Therefore, if using the C++ lookup rules, a symbol is not found by the compiler the reference will be marked as unresolved. See [\<seealso>](seealso-visual-cpp.md) for more information.

## Example

The following sample shows how you can make cref reference to a generic type, such that, the compiler will resolve the reference.

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

[XML Documentation](xml-documentation-visual-cpp.md)
