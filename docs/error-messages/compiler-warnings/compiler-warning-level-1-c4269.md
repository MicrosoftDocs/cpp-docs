---
description: "Learn more about: Compiler Warning (level 1) C4269"
title: "Compiler Warning (level 1) C4269"
ms.date: "11/04/2016"
f1_keywords: ["C4269"]
helpviewer_keywords: ["C4269"]
ms.assetid: 96c97bbc-068a-4b65-8cd8-4ed5dca04c15
---
# Compiler Warning (level 1) C4269

'identifier' : 'const' automatic data initialized with compiler generated default constructor produces unreliable results

A **`const`** automatic instance of a non-trivial class is initialized with a compiler-generated default constructor.

## Example

```cpp
// C4269.cpp
// compile with: /c /LD /W1
class X {
public:
   int m_data;
};

void g() {
   const X x1;   // C4269
};
```

Since this instance of the class is generated on the stack, the initial value of `m_data` can be anything. Also, since it is a **`const`** instance, the value of `m_data` can never be changed.
