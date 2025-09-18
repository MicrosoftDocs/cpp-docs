---
title: "Compiler Error C3194"
description: "Learn more about: Compiler Error C3194"
ms.date: 11/04/2016
f1_keywords: ["C3194"]
helpviewer_keywords: ["C3194"]
---
# Compiler Error C3194

> 'member' : a value-type cannot have an assignment operator

## Remarks

Special member functions that require automatic invocation by the compiler, such as a copy constructor or copy assignment operator are not supported within a value class.

## Example

The following example generates C3194.

```cpp
// C3194.cpp
// compile with: /clr /c
value struct MyStruct {
   MyStruct& operator= (const MyStruct& i) { return *this; }   // C3194
};

ref struct MyStruct2 {
   MyStruct2% operator= (const MyStruct2% i) { return *this; }   // OK
};
```
