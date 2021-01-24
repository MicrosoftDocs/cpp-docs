---
description: "Learn more about: Compiler Error C3083"
title: "Compiler Error C3083"
ms.date: "11/04/2016"
f1_keywords: ["C3083"]
helpviewer_keywords: ["C3083"]
ms.assetid: 05ff791d-52bb-41eb-9511-3ef89d7f4710
---
# Compiler Error C3083

'function': the symbol to the left of a '::' must be a type

A function was called incorrectly.

## Example

The following sample generates C3083.

```cpp
// C3083.cpp
// compile with: /c
struct N {
   ~N();
};

struct N1 {
   ~N1();
};

N::N::~N() {}   // C3083
N1::~N1() {}   // OK
```
