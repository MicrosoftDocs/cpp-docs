---
description: "Learn more about: &lt;param&gt;"
title: "&lt;param> (C++ documentation comments)"
ms.date: "11/04/2016"
f1_keywords: ["param", "<param>"]
helpviewer_keywords: ["param C++ XML tag", "<param> C++ XML tag"]
ms.assetid: 66c1a1c3-4f98-4bcf-8c7d-9a40308982fb
---
# &lt;param&gt;

The \<param> tag should be used in the comment for a method declaration to describe one of the parameters for the method.

## Syntax

```
<param name='name'>description</param>
```

#### Parameters

*name*<br/>
The name of a method parameter.  Enclose the name in single or double quotation marks.  The compiler issues a warning if it does not find `name`.

*description*<br/>
A description for the parameter.

## Remarks

The text for the \<param> tag will be displayed in IntelliSense, the [Object Browser](/visualstudio/ide/viewing-the-structure-of-code), and in the Code Comment Web Report.

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_param_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_param_tag.dll
/// Text for class MyClass.
public ref class MyClass {
   /// <param name="Int1">Used to indicate status.</param>
   void MyMethod(int Int1) {
   }
};
```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
