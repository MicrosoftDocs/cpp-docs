---
description: "Learn more about: Storage of basic types"
title: "Storage of basic types"
ms.date: "10/02/2019"
helpviewer_keywords: ["specifiers [C++], type", "integral types, storage", "storage [C++], types", "floating-point numbers, storage", "type specifiers [C++], sizes", "arithmetic operations [C++], types", "int data type", "short data type", "signed types [C++], storage", "long double keyword [C], storage", "long keyword [C]", "double data type, storage", "types [C], arithmetic", "integral types", "data types [C], specifiers", "storing types [C++]", "unsigned types [C++], storage", "data types [C], storage"]
ms.assetid: bd1f33c1-c6b9-4558-8a72-afb21aef3318
---
# Storage of basic types

The following table summarizes the storage associated with each basic type.

## Sizes of fundamental types

|Type|Storage|
|----------|-------------|
|**`char`**, **`unsigned char`**, **`signed char`**|1 byte|
|**`short`**, **`unsigned short`**|2 bytes|
|**`int`**, **`unsigned int`**|4 bytes|
|**`long`**, **`unsigned long`**|4 bytes|
|**`long long`**, **`unsigned long long`**|8 bytes|
|**`float`**|4 bytes|
|**`double`**|8 bytes|
|**`long double`**|8 bytes|

The C data types fall into general categories. The *integral types* include **`int`**, **`char`**, **`short`**, **`long`**, and **`long long`**. These types can be qualified with **`signed`** or **`unsigned`**, and **`unsigned`** by itself can be used as shorthand for **`unsigned int`**. Enumeration types (**`enum`**) are also treated as integral types for most purposes. The *floating types* include **`float`**, **`double`**, and **`long double`**. The *arithmetic types* include all floating and integral types.

## See also

[Declarations and types](../c-language/declarations-and-types.md)
