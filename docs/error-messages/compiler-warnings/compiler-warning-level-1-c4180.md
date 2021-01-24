---
description: "Learn more about: Compiler Warning (level 1) C4180"
title: "Compiler Warning (level 1) C4180"
ms.date: "11/04/2016"
f1_keywords: ["C4180"]
helpviewer_keywords: ["C4180"]
ms.assetid: 40c91bd4-37f1-4d59-a4f3-d5ddab68239b
---
# Compiler Warning (level 1) C4180

qualifier applied to function type has no meaning; ignored

A qualifier, such as **`const`**, is applied to a function type defined by **`typedef`**.

## Example

```cpp
// C4180.cpp
// compile with: /W1 /c
typedef int FuncType(void);

// the const qualifier cannot be applied to the
// function type FuncType
const FuncType f;   // C4180
```
