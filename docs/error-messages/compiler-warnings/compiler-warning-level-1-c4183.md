---
description: "Learn more about: Compiler Warning (level 1) C4183"
title: "Compiler Warning (level 1) C4183"
ms.date: "11/04/2016"
f1_keywords: ["C4183"]
helpviewer_keywords: ["C4183"]
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
---
# Compiler Warning (level 1) C4183

'identifier': missing return type; assumed to be a member function returning 'int'

The inline definition of a member function in a class or a structure does not have a return type. This member function is assumed to have a default return type of **`int`**.

The following sample generates C4183:

```cpp
// C4183.cpp
// compile with: /W1 /c
#pragma warning(disable : 4430)
class MyClass1;
class MyClass2 {
   MyClass1() {};   // C4183
};
```
