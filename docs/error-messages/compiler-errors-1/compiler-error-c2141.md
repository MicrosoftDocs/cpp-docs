---
title: "Compiler Error C2141"
description: "Learn more about: Compiler Error C2141"
ms.date: 11/04/2016
f1_keywords: ["C2141"]
helpviewer_keywords: ["C2141"]
---
# Compiler Error C2141

> array size overflow

## Remarks

An array exceeds the 2GB limit. Reduce the size of the array.

## Example

The following example generates C2141.

```cpp
// C2141.cpp
// processor: IPF
class A {
   short m_n;
};

int main()
{
   A* pA = (A*)(-1);
   pA = new A[0x8000000000000001];   // C2141

   A* pA2 = (A*)(-1);
   pA2 = new A[0x80000000000000F];   // OK
}
```
