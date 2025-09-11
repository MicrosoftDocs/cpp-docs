---
title: "Compiler Error C3414"
description: "Learn more about: Compiler Error C3414"
ms.date: 11/04/2016
f1_keywords: ["C3414"]
helpviewer_keywords: ["C3414"]
---
# Compiler Error C3414

> 'member' : imported member function can't be defined

## Remarks

A member was defined in code that is also defined in a referenced assembly.

## Example

The following example generates C3414:

```cpp
// C3414a2.cpp
// compile with: /clr /LD
public ref class MyClass {
public:
   void Test(){}
};
```

and then:

```cpp
// C3414b2.cpp
// compile with: /clr
#using <C3414a2.dll>

void MyClass::Test() {    // C3414
}

System::Object::Object() {    // C3414
}
```
