---
title: "Compiler Error C3458"
description: "Learn more about: Compiler Error C3458"
ms.date: 11/04/2016
f1_keywords: ["C3458"]
helpviewer_keywords: ["C3458"]
---
# Compiler Error C3458

> 'attribute1': attribute 'attribute2' already specified for 'construct'

## Remarks

Two attributes that are mutually exclusive were specified for the same construct.

## Example

The following example generates C3458

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
