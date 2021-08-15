---
description: "Learn more about: Compiler Warning (level 4) C4463"
title: "Compiler Warning (level 4) C4463"
ms.date: "11/04/2016"
f1_keywords: ["C4463"]
helpviewer_keywords: ["C4463"]
ms.assetid: a07ae70c-db4e-472b-8b58-9137d9997323
---
# Compiler Warning (level 4) C4463

> overflow; assigning *value* to bit-field that can only hold values from *low_value* to *high_value*

The assigned *value* is outside the range of values that the bit-field can hold. Signed bit-field types use the high-order bit for the sign, so if *n* is the bit-field size, the range for signed bit-fields is -2<sup>n-1</sup> to 2<sup>n-1</sup>-1, while unsigned bit-fields have a range from 0 to 2<sup>n</sup>-1.

## Example

This example generates C4463 because it attempts to assign a value of 3 to a bit-field of type **`int`** with a size of 2, which has a range from -2 to 1.

To fix this issue, you can change the assigned value to something in the allowed range. If the bit-field is intended to hold unsigned values in the range from 0 to 3, you can change the declaration type to **`unsigned`**. If the field is intended to hold values in the range -4 to 3, then you can change the bit-field size to 3.

```cpp
// C4463_overflow.cpp
// compile with: cl /W4 /EHsc C4463_overflow.cpp
struct S {
    int x : 2; // int type treats high-order bit as sign
};

int main() {
    S s;
    s.x = 3; // warning C4463: overflow; assigning 3
    // to bit-field that can only hold values from -2 to 1
    // To fix, change assigned value to fit in range,
    // increase size of bitfield, and/or change base type
    // to unsigned.
}
```
