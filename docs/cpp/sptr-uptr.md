---
description: "Learn more about: __sptr, __uptr"
title: "__sptr, __uptr"
ms.date: "10/10/2018"
f1_keywords: ["__uptr_cpp", "__sptr_cpp", "__uptr", "__sptr", "_uptr", "_sptr"]
helpviewer_keywords: ["__sptr modifier", "__uptr modifier"]
ms.assetid: c7f5f3b2-9106-4a0b-a6de-d1588ab153ed
---
# __sptr, __uptr

**Microsoft Specific**

Use the **`__sptr`** or **`__uptr`** modifier on a 32-bit pointer declaration to specify how the compiler converts a 32-bit pointer to a 64-bit pointer. A 32-bit pointer is converted, for example, when it is assigned to a 64-bit pointer variable or is dereferenced on a 64-bit platform.

Microsoft documentation for support of 64-bit platforms sometimes refers to the most significant bit of a 32-bit pointer as the sign bit. By default, the compiler uses sign extension to convert a 32-bit pointer to a 64-bit pointer. That is, the least significant 32 bits of the 64-bit pointer are set to the value of the 32-bit pointer and the most significant 32 bits are set to the value of the sign bit of the 32-bit pointer. This conversion yields correct results if the sign bit is 0, but not if the sign bit is 1. For example, the 32-bit address 0x7FFFFFFF yields the equivalent 64-bit address 0x000000007FFFFFFF, but the 32-bit address 0x80000000 is incorrectly changed to 0xFFFFFFFF80000000.

The **`__sptr`**, or signed pointer, modifier specifies that a pointer conversion set the most significant bits of a 64-bit pointer to the sign bit of the 32-bit pointer. The **`__uptr`**, or unsigned pointer, modifier specifies that a conversion set the most significant bits to zero. The following declarations show the **`__sptr`** and **`__uptr`** modifiers used with two unqualified pointers, two pointers qualified with the [__ptr32](../cpp/ptr32-ptr64.md) type, and a function parameter.

```cpp
int * __sptr psp;
int * __uptr pup;
int * __ptr32 __sptr psp32;
int * __ptr32 __uptr pup32;
void MyFunction(char * __uptr __ptr32 myValue);
```

Use the **`__sptr`** and **`__uptr`** modifiers with pointer declarations. Use the modifiers in the position of a [pointer type qualifier](../c-language/pointer-declarations.md), which means the modifier must follow the asterisk. You cannot use the modifiers with [pointers to members](../cpp/pointers-to-members.md). The modifiers do not affect non-pointer declarations.

For compatibility with previous versions, **_sptr** and **_uptr** are synonyms for **`__sptr`** and **`__uptr`** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## Example

The following example declares 32-bit pointers that use the **`__sptr`** and **`__uptr`** modifiers, assigns each 32-bit pointer to a 64-bit pointer variable, and then displays the hexadecimal value of each 64-bit pointer. The example is compiled with the native 64-bit compiler and is executed on a 64-bit platform.

```cpp
// sptr_uptr.cpp
// processor: x64
#include "stdio.h"

int main()
{
    void *        __ptr64 p64;
    void *        __ptr32 p32d; //default signed pointer
    void * __sptr __ptr32 p32s; //explicit signed pointer
    void * __uptr __ptr32 p32u; //explicit unsigned pointer

// Set the 32-bit pointers to a value whose sign bit is 1.
    p32d = reinterpret_cast<void *>(0x87654321);
    p32s = p32d;
    p32u = p32d;

// The printf() function automatically displays leading zeroes with each 32-bit pointer. These are unrelated
// to the __sptr and __uptr modifiers.
    printf("Display each 32-bit pointer (as an unsigned 64-bit pointer):\n");
    printf("p32d:       %p\n", p32d);
    printf("p32s:       %p\n", p32s);
    printf("p32u:       %p\n", p32u);

    printf("\nDisplay the 64-bit pointer created from each 32-bit pointer:\n");
    p64 = p32d;
    printf("p32d: p64 = %p\n", p64);
    p64 = p32s;
    printf("p32s: p64 = %p\n", p64);
    p64 = p32u;
    printf("p32u: p64 = %p\n", p64);
    return 0;
}
```

```Output
Display each 32-bit pointer (as an unsigned 64-bit pointer):
p32d:       0000000087654321
p32s:       0000000087654321
p32u:       0000000087654321

Display the 64-bit pointer created from each 32-bit pointer:
p32d: p64 = FFFFFFFF87654321
p32s: p64 = FFFFFFFF87654321
p32u: p64 = 0000000087654321
```

**END Microsoft Specific**

## See also

[Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md)
