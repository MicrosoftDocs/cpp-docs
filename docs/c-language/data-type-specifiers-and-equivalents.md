---
title: "Data type specifiers and equivalents"
description: "Describes Microsoft Visual C data type specifiers and their equivalents."
ms.date: "11/04/2016"
helpviewer_keywords: ["type specifiers [C++], list", "widening integers", "data types [C++], equivalents", "sign-extending integral types", "zero-extending", "identifiers, data type", "data types [C++], specifiers", "simple types, names", "type names [C++], simple"]
---
# Data type specifiers and equivalents

This documentation generally uses the forms of the type specifiers listed in the following table rather than the long forms. It also assumes that the **`char`** type is signed by default. Throughout this documentation, **`char`** is equivalent to **`signed char`**.

## Type specifiers and equivalents

| Type Specifier | Equivalent(s) |
|--|--|
| **`signed char`**<sup>1</sup> | **`char`** |
| **`signed int`** | **`signed`**, **`int`** |
| **`signed short int`** | **`short`**, **`signed short`** |
| **`signed long int`** | **`long`**, **`signed long`** |
| **`unsigned char`** | — |
| **`unsigned int`** | **`unsigned`** |
| **`unsigned short int`** | **`unsigned short`** |
| **`unsigned long int`** | **`unsigned long`** |
| **`float`** | — |
| **`long double`**<sup>2</sup> | — |

<sup>1</sup> When you make the **`char`** type unsigned by default (by specifying the **`/J`** compiler option), you can't abbreviate **`signed char`** as **`char`**.

<sup>2</sup> In 32-bit and 64-bit operating systems, the Microsoft C compiler maps **`long double`** to type **`double`**.

**Microsoft specific**

You can specify the **`/J`** compiler option to change the default **`char`** type from **`signed char`** to **`unsigned char`**. When this option is in effect, **`char`** means the same as **`unsigned char`**, and you must use the **`signed`** keyword to declare a signed character value. If a **`char`** value is explicitly declared **`signed`**, the **`/J`** option doesn't affect it, and the value is sign-extended when widened to an **`int`** type. The **`char`** type is zero-extended when widened to **`int`** type.

**END Microsoft specific**

## See also

[C Type Specifiers](../c-language/c-type-specifiers.md)
