---
description: "Learn more about: &lt;value&gt;"
title: "&lt;value> (C++ Documentation Comments)"
ms.date: "11/04/2016"
f1_keywords: ["value", "<value>"]
helpviewer_keywords: ["value C++ XML tag", "<value> C++ XML tag"]
ms.assetid: 0ba0a0d5-bcd7-4862-a169-83f2721ad80e
---
# &lt;value&gt;

The \<value> tag lets you describe a property and property accessor methods. Note that when you add a property with a code wizard in the Visual Studio integrated development environment, it will add a [\<summary>](summary-visual-cpp.md) tag for the new property. You should then manually add a \<value> tag to describe the value that the property represents.

## Syntax

```
<value>property-description</value>
```

#### Parameters

*property-description*<br/>
A description for the property.

## Remarks

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```cpp
// xml_value_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_value_tag.dll
using namespace System;
/// Text for class Employee.
public ref class Employee {
private:
   String ^ name;
   /// <value>Name accesses the value of the name data member</value>
public:
   property String ^ Name {
      String ^ get() {
         return name;
      }
      void set(String ^ i) {
         name = i;
      }
   }
};
```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
