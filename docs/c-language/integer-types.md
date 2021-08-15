---
description: "Learn more about: Integer Types"
title: "Integer Types"
ms.date: 07/22/2020
helpviewer_keywords: ["integer data type, integer types in C++", "integer constants", "integer types", "integers, types"]
ms.assetid: c8926a5e-0e98-4e37-9b05-ce97961379bd
---
# Integer Types

Every integer constant is given a type based on its value and the way it's expressed. You can force any integer constant to type **`long`** by appending the letter **`l`** or **`L`** to the end of the constant; you can force it to be type **`unsigned`** by appending **`u`** or **`U`** to the value. The lowercase letter **`l`** can be confused with the digit 1 and should be avoided. Some forms of **`long`** integer constants follow:

```C
/* Long decimal constants */
10L
79L

/* Long octal constants */
012L
0115L

/* Long hexadecimal constants */
0xaL or 0xAL
0X4fL or 0x4FL

/* Unsigned long decimal constant */
776745UL
778866LU
```

The type you assign to a constant depends on the value the constant represents. A constant's value must be in the range of representable values for its type. A constant's type determines which conversions are performed when the constant is used in an expression or when the minus sign (**`-`**) is applied. This list summarizes the conversion rules for integer constants.

- The type for a decimal constant without a suffix is either **`int`**, **`long int`**, or **`unsigned long int`**. The first of these three types in which the constant's value can be represented is the type assigned to the constant.

- The type assigned to octal and hexadecimal constants without suffixes is **`int`**, **`unsigned int`**, **`long int`**, or **`unsigned long int`** depending on the size of the constant.

- The type assigned to constants with a **`u`** or **`U`** suffix is **`unsigned int`** or **`unsigned long int`** depending on their size.

- The type assigned to constants with an **`l`** or **`L`** suffix is **`long int`** or **`unsigned long int`** depending on their size.

- The type assigned to constants with a **`u`** or **`U`** and an **`l`** or **`L`** suffix is **`unsigned long int`**.

## See also

[C Integer Constants](../c-language/c-integer-constants.md)
