---
description: "Learn more about: &lt;exception&gt; tag"
title: "&lt;exception> (C++ documentation comments)"
ms.date: "11/04/2016"
helpviewer_keywords: ["<exception> C++ XML tag", "exception C++ XML tag"]
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
---
# &lt;exception&gt; tag

The \<exception> tag lets you specify which exceptions can be thrown. This tag is applied to a method definition.

## Syntax

```
<exception cref="member">description</exception>
```

#### Parameters

*member*<br/>
A reference to an exception that is available from the current compilation environment. Using name lookup rules, the compiler checks that the given exception exists, and translates `member` to the canonical element name in the output XML.  The compiler issues a warning if it does not find `member`.

Enclose the name in single or double quotation marks.

For information on how to create a cref reference to a generic type, see [\<see>](see-visual-cpp.md).

*description*<br/>
A description.

## Remarks

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

The MSVC compiler will attempt to resolve cref references in one pass through the documentation comments.  Therefore, if using the C++ lookup rules, a symbol is not found by the compiler the reference will be marked as unresolved. See [\<seealso>](seealso-visual-cpp.md) for more information.

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

[XML Documentation](xml-documentation-visual-cpp.md)
