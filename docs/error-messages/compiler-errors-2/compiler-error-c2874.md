---
title: "Compiler Error C2874"
description: "Learn more about: Compiler Error C2874"
ms.date: 11/04/2016
f1_keywords: ["C2874"]
helpviewer_keywords: ["C2874"]
---
# Compiler Error C2874

> using-declaration causes a multiple declaration of 'symbol'

## Remarks

The declaration causes the same item to be defined twice.

## Example

The following example generates C2874:

```cpp
// C2874.cpp
namespace Z {
   int i;
}

int main() {
   int i;
   using Z::i;   // C2874, i already declared
}
```
