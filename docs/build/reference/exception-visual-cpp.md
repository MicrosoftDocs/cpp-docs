---
description: "Learn more about: XML documentation tag <exception>"
title: "<exception> (C++ documentation comments)"
ms.date: "11/04/2016"
helpviewer_keywords: ["<exception> C++ XML tag", "exception C++ XML tag"]
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
---
# `<exception>` documentation tag

The `<exception>` tag lets you specify which exceptions can be thrown. This tag is applied to a method definition.

## Syntax

```cpp
/// <exception cref="member">description</exception>
```

### Parameters

*`member`*\
A reference to an exception that's available from the current compilation environment. Using name lookup rules, the compiler checks that the given exception exists, and translates `member` to the canonical element name in the output XML. The compiler issues a warning if it doesn't find `member`.

Enclose the name in single or double quotation marks.

For more information on how to create a `cref` reference to a generic type, see [`<see>`](see-visual-cpp.md).

*`description`*\
A description.

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

The MSVC compiler attempts to resolve `cref` references in one pass through the documentation comments. If using the C++ lookup rules, when a symbol isn't found by the compiler the reference is marked as unresolved. For more information, see [`<seealso>`](seealso-visual-cpp.md).

## Example

```cpp
// xml_exception_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_exception_tag.dll
using namespace System;

/// Text for class EClass.
public ref class EClass : public Exception {
   // class definition ...
};

/// <exception cref="System.Exception">Thrown when... .</exception>
public ref class TestClass {
   void Test() {
      try {
      }
      catch(EClass^) {
      }
   }
};
```

## See also

[XML documentation](xml-documentation-visual-cpp.md)
