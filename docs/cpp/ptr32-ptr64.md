---
description: "Learn more about: __ptr32, __ptr64"
title: "__ptr32, __ptr64"
ms.date: 12/16/2025
f1_keywords: ["__ptr32_cpp", "__ptr64_cpp", "__ptr32", "__ptr64", "_ptr32", "_ptr64"]
helpviewer_keywords: ["__ptr64 keyword [C++]", "_ptr32 keyword [C++]", "ptr32 keyword [C++]", "ptr64 keyword [C++]", "_ptr64 keyword [C++]", "__ptr32 keyword [C++]"]
---
# __ptr32, __ptr64

**Microsoft specific**

Use **`__ptr32`** to represent a native pointer on a 32-bit system. Use **`__ptr64`** to represent a native pointer on a 64-bit system.

The `__ptr32` and `__ptr64` modifiers are Microsoft-specific extensions for interop scenarios. For standard 32-bit (x86) or standard x64 code, use native pointers, instead.

The following example shows how to declare each of these pointer types:

```cpp
int * __ptr32 p32;
int * __ptr64 p64;
```

On a 32-bit system, a pointer declared with **`__ptr64`** is treated as a 32-bit pointer and truncates the upper 32 bits of any 64-bit address assigned to it. On a 64-bit system, a pointer declared with **`__ptr32`** is treated as a 32-bit pointer and truncates the upper 32 bits of any 64-bit address assigned to it. This truncation can lead to an invalid pointer if the 64-bit address is above 4GB.

> [!NOTE]
> You can't use **`__ptr32`** or **`__ptr64`** when compiling with **`/clr:pure`**. Otherwise, the compiler generates error C2472. The **/clr:pure** and **/clr:safe** compiler options are deprecated in Microsoft Visual Studio 2015 and unsupported in Microsoft Visual Studio 2017.

For compatibility with previous versions, **`_ptr32`** and **`_ptr64`** are synonyms for **`__ptr32`** and **`__ptr64`** unless you specify compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md).

## Example

The following example shows how to declare and allocate pointers with the **`__ptr32`** and **`__ptr64`** keywords.

This code works on x86 but might crash on x64.

- It works when compiled for 32-bit because **`__ptr64`** pointers are treated as 32-bit pointers on x86. On x86 (32-bit), `malloc` returns a 32-bit address which fits in `p64`.
- It might crash when compiled for 64-bit because on x64, `malloc` returns a 64-bit pointer which is truncated to 32 bits by this line: `p32 = (int* __ptr32)malloc(4);`. Truncating a 64-bit address to a 32-bit address could result in an invalid pointer if the allocation happened above 4GB. In that case, `*p32 = 32` could attempt to access a truncated address that isn't part of your process's address space, causing an access violation. Even if it works once, it could fail later if the memory allocator returns a higher address.

```cpp
#include <cstdlib>
#include <iostream>

int main()
{
    using namespace std;

    int* __ptr32 p32;
    int* __ptr64 p64;

    p64 = (int* __ptr64)malloc(4);
    *p64 = 64; // Works on x86 and x64
    cout << *p64 << endl; 
    
    p32 = (int* __ptr32)malloc(4);
    *p32 = 32; // Works on x86. Possible exception on x64
    cout << *p32 << endl;
}
```

```Output
64
32
```

**END Microsoft Specific**

## See also

[Built-in types](../cpp/fundamental-types-cpp.md)
