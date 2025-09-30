---
title: "Compiler Error C2312"
description: "Learn more about: Compiler Error C2312"
ms.date: 11/04/2016
f1_keywords: ["C2312"]
helpviewer_keywords: ["C2312"]
---
# Compiler Error C2312

> 'exception1' : is caught by 'exception2' on line number

## Remarks

Two handlers catch the same exception type.

## Example

The following example generates C2312:

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
