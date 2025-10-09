---
title: "Compiler Error C3699"
description: "Learn more about: Compiler Error C3699"
ms.date: 11/04/2016
f1_keywords: ["C3699"]
helpviewer_keywords: ["C3699"]
---
# Compiler Error C3699

> 'operator' : cannot use this indirection on type 'type'

## Remarks

An attempt was made to use indirection that is not allowed on `type`.

## Examples

The following example generates C3699.

```cpp
// C3699.cpp
// compile with: /clr /c
using namespace System;
int main() {
   String * s;   // C3699
   // try the following line instead
   // String ^ s2;
}
```

A trivial property cannot have reference type. See [property](../../extensions/property-cpp-component-extensions.md) for more information. The following example generates C3699.

```cpp
// C3699_b.cpp
// compile with: /clr /c
ref struct C {
   property System::String % x;   // C3699
   property System::String ^ y;   // OK
};
```

The equivalent of a "pointer to a pointer" syntax is a handle to a tracking reference. The following example generates C3699.

```cpp
// C3699_c.cpp
// compile with: /clr /c
using namespace System;
void Test(String ^^ i);   // C3699
void Test2(String ^% i);
```
