---
description: "Learn more about: Using Operators in __asm Blocks"
title: "Using Operators in __asm Blocks"
ms.date: "08/30/2018"
helpviewer_keywords: ["brackets [ ]", "brackets [ ], __asm blocks", "__asm keyword [C++], operators", "square brackets [ ], __asm blocks", "operators [C++], using in __asm blocks", "square brackets [ ]"]
ms.assetid: a26ccfd4-40ae-4a61-952f-c417982aa8dd
---
# Using Operators in __asm Blocks

**Microsoft Specific**

An **`__asm`** block cannot use C or C++ specific operators, such as the **<<** operator. However, operators shared by C and MASM, such as the \* operator, are interpreted as assembly-language operators. For instance, outside an **`__asm`** block, square brackets (**[ ]**) are interpreted as enclosing array subscripts, which C automatically scales to the size of an element in the array. Inside an **`__asm`** block, they are seen as the MASM index operator, which yields an unscaled byte offset from any data object or label (not just an array). The following code illustrates the difference:

```cpp
int array[10];

__asm mov array[6], bx ;  Store BX at array+6 (not scaled)

array[6] = 0;         /* Store 0 at array+24 (scaled) */
```

The first reference to `array` is not scaled, but the second is. Note that you can use the **TYPE** operator to achieve scaling based on a constant. For example, the following statements are equivalent:

```cpp
__asm mov array[6 * TYPE int], 0 ; Store 0 at array + 24

array[6] = 0;                   /* Store 0 at array + 24 */
```

**END Microsoft Specific**

## See also

[Using C or C++ in __asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
