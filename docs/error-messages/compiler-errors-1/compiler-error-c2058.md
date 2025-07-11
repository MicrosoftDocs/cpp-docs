---
description: "Learn more about: Compiler Error C2058"
title: "Compiler Error C2058"
ms.date: "11/04/2016"
f1_keywords: ["C2058"]
helpviewer_keywords: ["C2058"]
ms.assetid: 81e08e6b-15f7-41b4-980a-53763e19990c
---
# Compiler Error C2058

> constant expression is not integral

## Remarks

The context requires an integer constant expression.

## Example

The following example generates C2058:

```cpp
// C2058.cpp
struct alignas(1.5) S {};   // C2058

int main() {
   int arr[1.5];   // C2058
}
```

To resolve the issue, use an integer constant expression. For example, `int arr[2];`
