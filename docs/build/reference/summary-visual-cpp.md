---
description: "Learn more about: &lt;summary&gt;"
title: "&lt;summary> (C++ Documentation Comments)"
ms.date: "11/04/2016"
f1_keywords: ["<summary>", "summary"]
helpviewer_keywords: ["<summary> C++ XML tag", "summary C++ XML tag"]
ms.assetid: cdeeefbb-1339-45d6-9002-10042a9a2726
---
# &lt;summary&gt;

The \<summary> tag should be used to describe a type or a type member. Use [\<remarks>](remarks-visual-cpp.md) to add supplemental information to a type description.

## Syntax

```
<summary>description</summary>
```

#### Parameters

*description*<br/>
A summary of the object.

## Remarks

The text for the \<summary> tag is the only source of information about the type in IntelliSense, and is also displayed in the [Object Browser](/visualstudio/ide/viewing-the-structure-of-code) and in the Code Comment Web Report.

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_summary_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_summary_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <summary>MyMethod is a method in the MyClass class.
   /// <para>Here's how you could make a second paragraph in a description. <see cref="System::Console::WriteLine"/> for information about output statements.</para>
   /// <seealso cref="MyClass::MyMethod2"/>
   /// </summary>
   void MyMethod(int Int1) {}

   /// text
   void MyMethod2() {}
};
```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
