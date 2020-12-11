---
description: "Learn more about: Type int"
title: "Type int"
ms.date: "11/04/2016"
helpviewer_keywords: ["int data type", "type int", "portability [C++], type int", "signed integers"]
ms.assetid: 0067ce9a-281e-491a-ae63-632952981e13
---
# Type int

The size of a **`signed int`** or **`unsigned int`** item is the standard size of an integer on a particular machine. For example, in 16-bit operating systems, the **`int`** type is usually 16 bits, or 2 bytes. In 32-bit operating systems, the **`int`** type is usually 32 bits, or 4 bytes. Thus, the **`int`** type is equivalent to either the **`short int`** or the **`long int`** type, and the **`unsigned int`** type is equivalent to either the **`unsigned short`** or the **`unsigned long`** type, depending on the target environment. The **`int`** types all represent signed values unless specified otherwise.

The type specifiers **`int`** and **`unsigned int`** (or simply **`unsigned`**) define certain features of the C language (for instance, the **`enum`** type). In these cases, the definitions of **`int`** and **`unsigned int`** for a particular implementation determine the actual storage.

**Microsoft Specific**

Signed integers are represented in two's-complement form. The most-significant bit holds the sign: 1 for negative, 0 for positive and zero. The range of values is given in [C and C++ Integer Limits](../c-language/cpp-integer-limits.md), which is taken from the LIMITS.H header file.

**END Microsoft Specific**

> [!NOTE]
> The **`int`** and **`unsigned int`** type specifiers are widely used in C programs because they allow a particular machine to handle integer values in the most efficient way for that machine. However, since the sizes of the **`int`** and **`unsigned int`** types vary, programs that depend on a specific **`int`** size may not be portable to other machines. To make programs more portable, you can use expressions with the **`sizeof`** operator (as discussed in [The `sizeof` Operator](../c-language/sizeof-operator-c.md)) instead of hard-coded data sizes.

## See also

[Storage of Basic Types](../c-language/storage-of-basic-types.md)
