---
title: "Compiler Error C2153"
description: "Learn more about: Compiler Error C2153"
ms.date: "01/31/2025"
f1_keywords: ["C2153"]
helpviewer_keywords: ["C2153"]
---
# Compiler Error C2153

> integer literals must have at least one digit

## Remarks

Hexadecimal and binary literals must contain at least one digit after the leading sequence (`0x`, `0X`, `0b`, or `0B`), otherwise the trailing character may be incorrectly interpreted as a suffix or literal operator. See [Integer literals](../../cpp/numeric-boolean-and-pointer-literals-cpp.md#integer-literals) for more information.

## Example

The following example generates C2153:

```cpp
// C2153.cpp
int main()
{
    int a = 0x;    // C2153
    int b = 0x0;   // OK

    int c = 0b;    // C2153
    int d = 0b0;   // OK
}
```
