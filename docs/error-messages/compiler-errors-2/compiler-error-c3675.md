---
title: "Compiler Error C3675"
description: "Learn more about: Compiler Error C3675"
ms.date: 11/04/2016
f1_keywords: ["C3675"]
helpviewer_keywords: ["C3675"]
---
# Compiler Error C3675

> 'function' : is reserved because 'property' is defined

## Remarks

When you declare a simple property, the compiler generates the get and set accessor methods, and those names are present in the scope of your program.  The compiler-generated names are formed by prepending get_ and set_ to the property name.  Therefore, you cannot declare functions with the same name as the compiler-generated accessors.

See [property](../../extensions/property-cpp-component-extensions.md) for more information.

## Example

The following example generates C3675.

```cpp
// C3675.cpp
// compile with: /clr /c
ref struct C {
public:
   property int Size;
   int get_Size() { return 0; }   // C3675
};
```
