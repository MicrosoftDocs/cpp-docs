---
title: "Compiler Error C2687"
description: "Learn more about: Compiler Error C2687"
ms.date: 11/04/2016
f1_keywords: ["C2687"]
helpviewer_keywords: ["C2687"]
---
# Compiler Error C2687

> 'type' : exception-declaration cannot be 'void' or denote an incomplete type or pointer or reference to an incomplete type

## Remarks

For a type to be part of an exception declaration, it must be defined and not void.

## Example

The following example generates C2687:

```cpp
// C2687.cpp
class C;

int main() {
   try {}
   catch (C) {}   // C2687 error
}
```

Possible resolution:

```cpp
// C2687b.cpp
// compile with: /EHsc
class C {};

int main() {
   try {}
   catch (C) {}
}
```
