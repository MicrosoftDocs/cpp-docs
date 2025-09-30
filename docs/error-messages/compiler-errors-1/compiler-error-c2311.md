---
title: "Compiler Error C2311"
description: "Learn more about: Compiler Error C2311"
ms.date: 11/04/2016
f1_keywords: ["C2311"]
helpviewer_keywords: ["C2311"]
---
# Compiler Error C2311

> 'exception' : is caught by '...' on line number

## Remarks

The catch handler for the ellipsis (...) must be the last handler for a throw.

## Example

The following example generates C2311:

```cpp
// C2311.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
   try {
      throw "ooops!";
   }
   catch( ... ) {}
   catch( int ) {}   // C2311  ellipsis handler not last catch
}
```
