---
description: "Learn more about: Compiler Warning (levels 3 and 4) C4244"
title: "Compiler Warning (levels 3 and 4) C4244"
ms.date: "11/04/2016"
ms.assetid: f116bb09-c479-4b4e-a647-fe629a1383f6
---
# Compiler Warning (levels 3 and 4) C4244

'conversion' conversion from 'type1' to 'type2', possible loss of data

An integer type is converted to a smaller integer type. This is a level-4 warning if *type1* is **`int`** and *type2* is smaller than **`int`**. Otherwise, it is a level 3 (assigned a value of type [__int64](../../cpp/int8-int16-int32-int64.md) to a variable of type **`unsigned int`**). A possible loss of data may have occurred.

If you get C4244, you should either change your program to use compatible types, or add some logic to your code, to ensure that the range of possible values will always be compatible with the types you are using.

C4244 can also fire at level 2; see [Compiler Warning (level 2) C4244](../../error-messages/compiler-warnings/compiler-warning-level-2-c4244.md) for more information.

The conversion may have a problem due to implicit conversions.

The following sample generates C4244:

```cpp
// C4244_level4.cpp
// compile with: /W4
int aa;
unsigned short bb;
int main() {
   int b = 0, c = 0;
   short a = b + c;   // C4244

   bb += c;   // C4244
   bb = bb + c;   // C4244
   bb += (unsigned short)aa;   // C4244
   bb = bb + (unsigned short)aa;   // OK
}
```

For more information, see [Usual Arithmetic Conversions](../../c-language/usual-arithmetic-conversions.md).

```cpp
// C4244_level3.cpp
// compile with: /W3
int main() {
   __int64 i = 8;
   unsigned int ii = i;   // C4244
}
```

Warning C4244 can occur when building code for 64-bit targets that does not generate the warning when building for 32-bit targets. For example, a difference between pointers is a 32-bit quantity on 32-bit platforms, but a 64-bit quantity on 64-bit platforms.

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
