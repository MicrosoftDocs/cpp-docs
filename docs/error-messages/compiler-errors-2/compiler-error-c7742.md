---
description: "Learn more about: Compiler Error C7742"
title: "Compiler Error C7742"
ms.date: "07/02/2025"
ai-usage: ai-assisted
f1_keywords: ["C7742"]
helpviewer_keywords: ["C7742"]
---
# Compiler Error C7742

> *Identifier*: a forward declaration of an enum can only use a simple identifier

## Remarks

The C++ Standard doesn't allow declaring an opaque enumeration using a qualified-id. An opaque enum declaration specifies the name and the underlying type, but doesn't list the enumerators or their values.

## Example

The following example generates C7742:

```cpp
// C7742.cpp
class MyClass
{ 
public: 
    enum MyEnum
    { 
        e1, 
        e2 
    }; 
}; 
  
enum MyClass::MyEnum;   // C7742
```

To fix this error, remove the opaque enumeration declaration because it doesn't add anything to the program.

However, you can define an enumeration with a qualified-id. For example:

```cpp
struct S
{
   enum E : int;
};

enum S::E : int { e1, e2, e3 };
```
