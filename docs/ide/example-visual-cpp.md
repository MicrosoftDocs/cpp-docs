---
title: "&lt;example&gt; (Visual C++)"
ms.date: "11/04/2016"
f1_keywords: ["<example>", "example"]
helpviewer_keywords: ["<example> C++ XML tag", "example C++ XML tag"]
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
---
# &lt;example&gt; (Visual C++)

The \<example> tag lets you specify an example of how to use a method or other library member. Commonly, this would also involve use of the [\<code>](../ide/code-visual-cpp.md) tag.

## Syntax

```
<example>description</example>
```

#### Parameters

*description*<br/>
A description of the code sample.

## Remarks

Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```
// xml_example_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_example_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <summary>
   /// GetZero method
   /// </summary>
   /// <example> This sample shows how to call the GetZero method.
   /// <code>
   /// int main()
   /// {
   ///    return GetZero();
   /// }
   /// </code>
   /// </example>
   static int GetZero() {
      return 0;
   }
};
```

## See also

- [XML Documentation](../ide/xml-documentation-visual-cpp.md)
