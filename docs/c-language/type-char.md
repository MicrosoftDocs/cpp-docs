---
description: "Learn more about: Type char"
title: "Type char"
ms.date: "11/04/2016"
helpviewer_keywords: ["type char", "unsigned char keyword [C]", "char keyword [C]"]
ms.assetid: a5da0866-e780-4793-be87-15a8426e7ea0
---
# Type char

The **`char`** type is used to store the integer value of a member of the representable character set. That integer value is the ASCII code corresponding to the specified character.

**Microsoft Specific**

Character values of type **`unsigned char`** have a range from 0 to 0xFF hexadecimal. A **`signed char`** has range 0x80 to 0x7F. These ranges translate to 0 to 255 decimal, and -128 to +127 decimal, respectively. The /J compiler option changes the default from **`signed`** to **`unsigned`**.

**END Microsoft Specific**

## See also

[Storage of Basic Types](../c-language/storage-of-basic-types.md)
