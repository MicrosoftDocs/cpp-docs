---
description: "Learn more about: Compiler Error C2312"
title: "Compiler Error C2312"
ms.date: "11/04/2016"
f1_keywords: ["C2312"]
helpviewer_keywords: ["C2312"]
ms.assetid: c8bcfd06-12c1-4323-bb53-ba392d36daa4
---
# Compiler Error C2312

'exception1' : is caught by 'exception2' on line number

Two handlers catch the same exception type.

The following sample generates C2312:

```cpp
// C2312.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
    try {
        throw "ooops!";
    }
    catch( signed int ) {}
    catch( int ) {}   // C2312
}
```
