---
description: "Learn more about: Compiler Error C2166"
title: "Compiler Error C2166"
ms.date: "11/04/2016"
f1_keywords: ["C2166"]
helpviewer_keywords: ["C2166"]
ms.assetid: 12789c3a-cc76-48bb-ae2e-64283e0964ed
---
# Compiler Error C2166

l-value specifies const object

Code attempts to modify an item declared **`const`**.

The following sample generates C2166:

```cpp
// C2166.cpp
int f();
int main() {
   ( (const int&) 1 ) = 5;   // C2166
}
```
