---
title: "Compiler Error C2313"
description: "Learn more about: Compiler Error C2313"
ms.date: 11/04/2016
f1_keywords: ["C2313"]
helpviewer_keywords: ["C2313"]
---
# Compiler Error C2313

> 'type1' : is caught by reference ('type2') on line number

## Remarks

The exception type has two handlers. The type for the second catch is a reference to the type of the first.

## Example

The following example generates C2313:

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
