---
description: "Learn more about: __int8, __int16, __int32, __int64"
title: "__int8, __int16, __int32, __int64"
ms.date: "10/09/2018"
f1_keywords: ["__int8_cpp", "__int16_cpp", "__int32_cpp", "__int64_cpp", "__int8", "__int16", "__int32", "__int64", "_int8", "_int16", "_int32", "_int64"]
helpviewer_keywords: ["__int16 keyword [C++]", "integer data type [C++], integer types in C++", "__int32 keyword [C++]", "integer types [C++]", "__int8 keyword [C++]", "__int64 keyword [C++]"]
ms.assetid: 8e384602-2578-4980-8cc8-da63842356b2
---
# __int8, __int16, __int32, __int64

**Microsoft-specific**

Microsoft C/C++ features support for sized integer types. You can declare 8-, 16-, 32-, or 64-bit integer variables by using the **`__intN`** type specifier, where ***`N`*** is 8, 16, 32, or 64.

The following example declares one variable for each of these types of sized integers:

```cpp
__int8 nSmall;      // Declares 8-bit integer
__int16 nMedium;    // Declares 16-bit integer
__int32 nLarge;     // Declares 32-bit integer
__int64 nHuge;      // Declares 64-bit integer
```

The types **`__int8`**, **`__int16`**, and **`__int32`** are synonyms for the ANSI types that have the same size, and are useful for writing portable code that behaves identically across multiple platforms. The **`__int8`** data type is synonymous with type **`char`**, **`__int16`** is synonymous with type **`short`**, and **`__int32`** is synonymous with type **`int`**. The **`__int64`** type is synonymous with type **`long long`**.

For compatibility with previous versions, **`_int8`**, **`_int16`**, **`_int32`**, and **`_int64`** are synonyms for **`__int8`**, **`__int16`**, **`__int32`**, and **`__int64`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## Example

The following sample shows that an `__intN` parameter will be promoted to **`int`**:

```cpp
// sized_int_types.cpp

#include <stdio.h>

void func(int i) {
    printf_s("%s\n", __FUNCTION__);
}

int main()
{
    __int8 i8 = 100;
    func(i8);   // no void func(__int8 i8) function
                // __int8 will be promoted to int
}
```

```Output
func
```

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Built-in types](../cpp/fundamental-types-cpp.md)<br/>
[Data Type Ranges](../cpp/data-type-ranges.md)<br/>
