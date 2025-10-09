---
title: "Compiler Error C3868"
description: "Learn more about: Compiler Error C3868"
ms.date: 11/04/2016
f1_keywords: ["C3868"]
helpviewer_keywords: ["C3868"]
---
# Compiler Error C3868

> 'type': constraints on generic parameter 'parameter' differ from those on the declaration

## Remarks

Multiple declarations must have the same generic constraints.  For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following example generates C3868.

```cpp
// C3868.cpp
// compile with: /clr /c
interface struct I1;

generic <typename T> ref struct MyStruct;
generic <typename U> where U : I1 ref struct MyStruct;   // C3868

// OK
generic <typename T> ref struct MyStruct2;
generic <typename U> ref struct MyStruct2;

generic <typename T> where T : I1 ref struct MyStruct3;
generic <typename U> where U : I1 ref struct MyStruct3;
```
