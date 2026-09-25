---
title: "Compiler Warning (level 3) C4267"
description: "Learn more about: Compiler Warning (level 3) C4267"
ms.date: 11/04/2016
f1_keywords: ["C4267"]
helpviewer_keywords: ["C4267"]
---
# Compiler Warning (level 3) C4267

> 'var' : conversion from 'size_t' to 'type', possible loss of data

## Remarks

The compiler detected a conversion from `size_t` to a smaller type that might truncate the value.

To fix this warning, use `size_t` instead of `type`. Alternatively, use an integral type that can represent the full range of `size_t` on the target platform. If the value is known at compile time and fits in the destination type, the compiler doesn't generate this warning.

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

   // Because the compiler knows the value of bufferSize_const at compile time (because it's const),
   // it knows that converting it to short can't truncate the value so no warning is emitted
   const size_t bufferSize_const = 10;
   Func1(bufferSize_const); // No C4267

   // Because the compiler knows the value of bufferSize_big_const is 0x10000 at compile time
   // (because its const), it knows it doesn't fit in short, but does fit in int.
   const size_t bufferSize_big_const = 0x10000;
   Func1(bufferSize_big_const); // C4267
   Func2(bufferSize_big_const); // No C4267

   return 0;
}
```
