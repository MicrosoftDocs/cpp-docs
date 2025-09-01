---
title: "Compiler Warning (level 1) C4667"
description: "Learn more about: Compiler Warning (level 1) C4667"
ms.date: 11/04/2016
f1_keywords: ["C4667"]
helpviewer_keywords: ["C4667"]
---
# Compiler Warning (level 1) C4667

> 'function' : no function template defined that matches forced instantiation

## Remarks

You cannot instantiate a function template that has not been declared.

## Example

The following example will cause C4667:

```cpp
// C4667a.cpp
// compile with: /LD /W1
template
void max(const int &, const int &); // C4667 expected
```

To avoid this warning, first declare the function template:

```cpp
// C4667b.cpp
// compile with: /LD
// Declare the function template
template<typename T>
const T &max(const T &a, const T &b) {
   return (a > b) ? a : b;
}
// Then forcibly instantiate it with a desired type ... i.e. 'int'
//
template
const int &max(const int &, const int &);
```
