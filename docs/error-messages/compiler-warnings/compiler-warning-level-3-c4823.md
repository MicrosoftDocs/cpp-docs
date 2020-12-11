---
description: "Learn more about: Compiler Warning (level 3) C4823"
title: "Compiler Warning (level 3) C4823"
ms.date: "11/04/2016"
f1_keywords: ["C4823"]
helpviewer_keywords: ["C4823"]
ms.assetid: 8a77560d-dcea-4cae-aebb-8ebf1b4cef85
---
# Compiler Warning (level 3) C4823

'function' : uses pinning pointers but unwind semantics are not enabled. Consider using /EHa

To unpin an object on the managed heap pointed to by a pinning pointer declared in a block scope, the compiler simulates the behavior of destructors of local classes, "pretending" the pinning pointer has a destructor that nullifies the pointer. To enable a call to a destructor after throwing an exception, you must enable object unwinding, which you can do by using [/EHsc](../../build/reference/eh-exception-handling-model.md).

You can also manually unpin the object and ignore the warning.

## Example

The following sample generates C4823.

```cpp
// C4823.cpp
// compile with: /clr /W3 /EHa-
using namespace System;

ref struct G {
   int m;
};

void f(G ^ pG) {
   try {
      pin_ptr<int> p = &pG->m;
      // manually unpin, ignore warning
      // p = nullptr;
      throw gcnew Exception;
   }
   catch(Exception ^) {}
}   // C4823 warning

int main() {
   f( gcnew G );
}
```
