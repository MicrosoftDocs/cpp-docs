---
title: "<paramref> (C++ documentation comments)"
description: "Learn more about the paramref C++ XML documentation tag."
ms.date: 12/03/2021
f1_keywords: ["<paramref>"]
helpviewer_keywords: ["paramref C++ XML tag", "<paramref> C++ XML tag"]
ms.assetid: c5730dc2-7159-421f-b2d5-bb971e307122
---
# `<paramref>` documentation tag

The `<paramref>` tag gives you a way to indicate that a word is a parameter. The XML file can be processed to format this parameter in some distinct way.

## Syntax

```cpp
/// <paramref name="ref-name"/>
```

### Parameters

*`ref-name`*\
The name of the parameter to refer to.  Enclose the name in single or double quotation marks.  The compiler issues a warning if it doesn't find *`ref-name`*.

## Remarks

Compile with [`/doc`](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_paramref_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_paramref_tag.dll
/// Text for class MyClass.
public ref class MyClass {
   /// <summary>MyMethod is a method in the MyClass class.
   /// The <paramref name="Int1"/> parameter takes a number.
   /// </summary>
   void MyMethod(int Int1) {}
};
```

## See also

[XML documentation](xml-documentation-visual-cpp.md)
