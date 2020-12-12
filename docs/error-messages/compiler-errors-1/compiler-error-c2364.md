---
description: "Learn more about: Compiler Error C2364"
title: "Compiler Error C2364"
ms.date: "11/04/2016"
f1_keywords: ["C2364"]
helpviewer_keywords: ["C2364"]
ms.assetid: 4f550571-94b5-42ca-84cb-663fecbead44
---
# Compiler Error C2364

'type': illegal type for custom attribute

Named arguments for custom attributes are limited to compile time constants. For example, integral types (int, char, etc.), System::Type^, and System::Object^.

## Example

The following sample generates C2364.

```cpp
// c2364.cpp
// compile with: /clr /c
using namespace System;

[attribute(AttributeTargets::All)]
public ref struct ABC {
public:
   // Delete the following line to resolve.
   ABC( Enum^ ) {}   // C2364
   ABC( int ) {}   // OK
};
```
