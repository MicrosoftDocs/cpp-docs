---
description: "Learn more about: Compiler Error C3458"
title: "Compiler Error C3458"
ms.date: "11/04/2016"
f1_keywords: ["C3458"]
helpviewer_keywords: ["C3458"]
ms.assetid: 940202fd-8dcc-4042-9c96-3f9e9127d2f1
---
# Compiler Error C3458

'attribute1': attribute 'attribute2' already specified for 'construct'

Two attributes that are mutually exclusive were specified for the same construct.

## Example

The following sample generates C3458

```cpp
// C3458.cpp
// compile with: /clr /c
[System::Reflection::DefaultMember("Chars")]
public ref class MyString {
public:
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // C3458
   property char default[int] {
      char get(int index);
      void set(int index, char c);
   }
};
```
