---
description: "Learn more about: Compiler Warning (level 4) C4268"
title: "Compiler Warning (level 4) C4268"
ms.date: "11/04/2016"
f1_keywords: ["C4268"]
helpviewer_keywords: ["C4268"]
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
---
# Compiler Warning (level 4) C4268

'identifier' : 'const' static/global data initialized with compiler generated default constructor fills the object with zeros

A **`const`** global or static instance of a non-trivial class is initialized with a compiler-generated default constructor.

## Example

```cpp
// C4268.cpp
// compile with: /c /LD /W4
class X {
public:
   int m_data;
};

const X x1;   // C4268
```

As this instance of the class is **`const`**, the value of `m_data` cannot be changed.
