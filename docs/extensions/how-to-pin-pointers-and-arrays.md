---
description: "Learn more about: How to: Pin Pointers and Arrays"
title: "How to: Pin Pointers and Arrays"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["pointers, pinning", "arrays [C++], pinning"]
ms.assetid: ee783260-e676-46b8-a38e-11a06f1d57b0
---
# How to: Pin Pointers and Arrays

Pinning a sub-object defined in a managed object has the effect of pinning the entire object.  For example, if any element of an array is pinned, then the whole array is also pinned. There are no extensions to the language for declaring a pinned array. To pin an array, declare a pinning pointer to its element type, and pin one of its elements.

## Example

### Code

```cpp
// pin_ptr_array.cpp
// compile with: /clr
#include <stdio.h>
using namespace System;

int main() {
   array<Byte>^ arr = gcnew array<Byte>(4);
   arr[0] = 'C';
   arr[1] = '+';
   arr[2] = '+';
   arr[3] = '\0';
   pin_ptr<Byte> p = &arr[1];   // entire array is now pinned
   unsigned char * cp = p;

   printf_s("%s\n", cp); // bytes pointed at by cp
                         // will not move during call
}
```

```Output
++
```

## See also

[pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)
