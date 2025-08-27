---
description: "Learn more about: Compiler Warning (levels 3 and 4) C4244"
title: "Compiler Warning (levels 3 and 4) C4244"
ms.date: "11/6/2023"
---
# Compiler Warning (levels 3 and 4) C4244

> 'conversion' conversion from 'type1' to 'type2', possible loss of data

An integer type is converted to a smaller integer type.
- This is a level-4 warning if *type1* is a signed or unsigned **`int`** and *type2* is a smaller, such as a signed or unsigned **`short`**.
- It's a level 3 warning if a value of type [`__int64`](../../cpp/int8-int16-int32-int64.md) or **`unsigned __int64`** is assigned to a signed or unsigned **`int`**. A possible loss of data may have occurred due to a narrowing conversion, which might lead to unexpected results.

To fix this warning, either change your program to use compatible types, or add logic that ensures that the range of possible values is compatible with the types you're using. If the conversion is intended, use an explicit cast to silence the warning.

C4244 can also appear when the warning level is 2. For more information, see [Compiler Warning (level 2) C4244](../../error-messages/compiler-warnings/compiler-warning-level-2-c4244.md).

The following sample generates C4244:

```cpp
// C4244_level4.cpp
// compile with: /W4
void test(unsigned short num) {}

int main() {
   int int1 = 1;
   unsigned int uint1 = 2;

   short short1 = int1;   // C4244
   short short2 = (short)int1;   // warning silenced - explicit cast

   short short3 = uint1;   // C4244
   unsigned short ushort = uint1; // C4244
   test(uint1);   // C4244
}
```

For more information, see [Usual Arithmetic Conversions](../../c-language/usual-arithmetic-conversions.md).\
For more information about setting the warning level in Visual Studio, see [To set the compiler options in the Visual Studio development environment](../../build/reference/compiler-option-warning-level.md#to-set-the-compiler-options-in-the-visual-studio-development-environment)

```cpp
// C4244_level3.cpp
// compile with: /W3
int main() {
   __int64 i64 = 1;
   unsigned __int64 u64 = 2;

   int int1 = i64;   // C4244
   int int3 = u64;   // C4244
}
```

Warning C4244 can occur when building code for 64-bit targets that doesn't generate the warning when building for 32-bit targets. For example, pointer arithmetic results in a 32-bit quantity on 32-bit platforms, but a 64-bit quantity on 64-bit platforms.

The following sample generates C4244 when compiled for 64-bit targets:

```cpp
// C4244_level3_b.cpp
// compile with: /W3
int main() {
   char* p1 = 0;
   char* p2 = 0;
   int x = p2 - p1;   // C4244
}
```
