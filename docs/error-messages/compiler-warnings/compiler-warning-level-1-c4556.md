---
title: "Compiler Warning (level 1) C4556 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["xml", "C4556"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4556"]
ms.assetid: e4c0e296-b747-4db1-9608-30b8b74feac2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4556

> value of intrinsic immediate argument '*value*' is out of range '*lowerbound* - *upperbound*'

## Remarks

An intrinsic matches a hardware instruction. The hardware instruction has a fixed number of bits to encode the constant. If *value* is out of range, it will not encode properly. The compiler truncates the extra bits.

## Example

The following sample generates C4556:

```cpp
// C4556.cpp
// compile with: /W1
// processor: x86 IPF
#include <xmmintrin.h>

void test()
{
   __m64 m;
   _m_pextrw(m, 5);   // C4556
}

int main()
{
}
```