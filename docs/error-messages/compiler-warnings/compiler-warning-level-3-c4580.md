---
description: "Learn more about: Compiler Warning (level 3) C4580"
title: "Compiler Warning (level 3) C4580"
ms.date: "11/04/2016"
f1_keywords: ["C4580"]
helpviewer_keywords: ["C4580"]
ms.assetid: fef6e8e0-0d6a-44fa-b22a-2fe7ba2ef379
---
# Compiler Warning (level 3) C4580

[attribute] is deprecated; instead specify System::Attribute or Platform::Metadata as a base class

[[attribute](../../windows/attributes/attribute.md)] is no longer the preferred syntax for creating user-defined attributes. For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md). For CLR code, derive attributes from `System::Attribute`. For Windows Runtime code, derive attributes from `Platform::Metadata`.

## Example

The following sample generates C3454 and shows how to fix it.

```cpp
// C4580.cpp
// compile with: /W3 /c /clr
[attribute]   // C4580
public ref class Attr {
public:
   int m_t;
};

public ref class Attr2 : System::Attribute {
public:
   int m_t;
};
```
