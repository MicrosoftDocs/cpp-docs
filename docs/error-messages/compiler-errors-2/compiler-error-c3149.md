---
title: "Compiler Error C3149"
description: "Learn more about: Compiler Error C3149"
ms.date: 11/04/2016
f1_keywords: ["C3149"]
helpviewer_keywords: ["C3149"]
---
# Compiler Error C3149

> 'type' : cannot use this type here without a top-level 'char'

## Remarks

A declaration was not specified correctly.

For example, you may have defined a CLR type at global scope and tried to create a variable of the type as part of the definition. Because global variables of CLR types are not allowed, the compiler will generate C3149.

To resolve this error, declare variables of CLR types inside a function or type definition.

## Examples

The following example generates C3149:

```cpp
// C3149.cpp
// compile with: /clr
using namespace System;
int main() {
   // declare an array of value types
   array< Int32 ^> IntArray;   // C3149
   array< Int32>^ IntArray2;   // OK
}
```

The following example generates C3149:

```cpp
// C3149b.cpp
// compile with: /clr /c
delegate int MyDelegate(const int, int);
void Test1(MyDelegate m) {}   // C3149
void Test2(MyDelegate ^ m) {}   // OK
```
