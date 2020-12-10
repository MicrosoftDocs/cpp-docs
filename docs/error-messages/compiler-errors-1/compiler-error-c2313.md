---
description: "Learn more about: Compiler Error C2313"
title: "Compiler Error C2313"
ms.date: "11/04/2016"
f1_keywords: ["C2313"]
helpviewer_keywords: ["C2313"]
ms.assetid: f70eb19b-c0a3-4fb2-ade1-3890a589928d
---
# Compiler Error C2313

'type1' : is caught by reference ('type2') on line number

The exception type has two handlers. The type for the second catch is a reference to the type of the first.

The following sample generates C2313:

```cpp
// C2313.cpp
// compile with: /EHsc
#include <eh.h>
class C {};
int main() {
    try {
        throw "ooops!";
    }
    catch( C& ) {}
    catch( C ) {}   // C2313
}
```
