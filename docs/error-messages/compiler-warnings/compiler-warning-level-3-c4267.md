---
description: "Learn more about: Compiler Warning (level 3) C4267"
title: "Compiler Warning (level 3) C4267"
ms.date: "11/04/2016"
f1_keywords: ["C4267"]
helpviewer_keywords: ["C4267"]
ms.assetid: 2fa2f13f-fa4f-47bb-ad8f-6cb19cfc91e6
---
# Compiler Warning (level 3) C4267

'var' : conversion from 'size_t' to 'type', possible loss of data

The compiler detected a conversion from `size_t` to a smaller type.

To fix this warning, use `size_t` instead of `type`. Alternatively, use an integral type that is at least as large as `size_t`.

## Example

The following example generates C4267.

```cpp
// C4267.cpp
// compile by using: cl /W4 C4267.cpp
void Func1(short) {}
void Func2(int) {}
void Func3(long) {}
void Func4(size_t) {}

int main() {
   size_t bufferSize = 10;
   Func1(bufferSize);   // C4267 for all platforms
   Func2(bufferSize);   // C4267 only for 64-bit platforms
   Func3(bufferSize);   // C4267 only for 64-bit platforms
   Func4(bufferSize);   // OK for all platforms
}
```
