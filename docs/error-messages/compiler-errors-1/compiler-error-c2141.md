---
description: "Learn more about: Compiler Error C2141"
title: "Compiler Error C2141"
ms.date: "11/04/2016"
f1_keywords: ["C2141"]
helpviewer_keywords: ["C2141"]
ms.assetid: 10cf770f-0500-4220-ac90-a863b7ea5fe6
---
# Compiler Error C2141

array size overflow

An array exceeds the 2GB limit. Reduce the size of the array.

## Example

The following sample generates C2141.

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
