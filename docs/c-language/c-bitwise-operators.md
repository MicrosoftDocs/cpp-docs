---
description: "Learn more about: C Bitwise Operators"
title: "C Bitwise Operators"
ms.date: "01/29/2018"
helpviewer_keywords: ["| operator, bitwise operators", "bitwise operators, Visual C", "bitwise operators", "operators [C], bitwise", "^ operator, bitwise operators", "AND operator", "ampersand operator (&)", "^ operator", "& operator, bitwise operators"]
ms.assetid: e22127b1-9a2d-4876-b01d-c8f72cec3317
---
# C Bitwise Operators

The bitwise operators perform bitwise-AND (**&**), bitwise-exclusive-OR (**^**), and bitwise-inclusive-OR (**&#124;**) operations.

## Syntax

*AND-expression*:
&nbsp;&nbsp;*equality-expression*
&nbsp;&nbsp;*AND-expression* **&** *equality-expression*

*exclusive-OR-expression*:
&nbsp;&nbsp;*AND-expression*
&nbsp;&nbsp;*exclusive-OR-expression* **^** *AND-expression*

*inclusive-OR-expression*:
&nbsp;&nbsp;*exclusive-OR-expression*
&nbsp;&nbsp;*inclusive-OR-expression* &#124; *exclusive-OR-expression*

The operands of bitwise operators must have integral types, but their types can be different. These operators perform the usual arithmetic conversions; the type of the result is the type of the operands after conversion.

The C bitwise operators are described below:

|Operator|Description|
|--------------|-----------------|
|**&**|The bitwise-AND operator compares each bit of its first operand to the corresponding bit of its second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.|
|**^**|The bitwise-exclusive-OR operator compares each bit of its first operand to the corresponding bit of its second operand. If one bit is 0 and the other bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.|
|**&#124;**|The bitwise-inclusive-OR operator compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.|

## Examples

These declarations are used for the following three examples:

```C
short i = 0xAB00;
short j = 0xABCD;
short n;

n = i & j;
```

The result assigned to `n` in this first example is the same as `i` (0xAB00 hexadecimal).

```C
n = i | j;

n = i ^ j;
```

The bitwise-inclusive OR in the second example results in the value 0xABCD (hexadecimal), while the bitwise-exclusive OR in the third example produces 0xCD (hexadecimal).

**Microsoft Specific**

The results of bitwise operation on signed integers is implementation-defined according to the ANSI C standard. For the Microsoft C compiler, bitwise operations on signed integers work the same as bitwise operations on unsigned integers. For example, `-16 & 99` can be expressed in binary as

```Expression
  11111111 11110000
& 00000000 01100011
  _________________
  00000000 01100000
```

The result of the bitwise AND is 96 decimal.

**END Microsoft Specific**

## See also

[Bitwise AND Operator: &](../cpp/bitwise-and-operator-amp.md)<br/>
[Bitwise Exclusive OR Operator: ^](../cpp/bitwise-exclusive-or-operator-hat.md)<br/>
[Bitwise Inclusive OR Operator: &#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)
