---
description: "Learn more about: Compiler Error C2130"
title: "Compiler Error C2130"
ms.date: "11/04/2016"
f1_keywords: ["C2130"]
helpviewer_keywords: ["C2130"]
ms.assetid: c6fd5a7e-8f28-4f67-99d1-95a13b0dff90
---
# Compiler Error C2130

\#line expected a string containing the filename, found 'token'

The optional file name token following [#line](../../preprocessor/hash-line-directive-c-cpp.md) `linenumber` must be a string.

The following sample generates C2130:

```cpp
// C2130.cpp
int main() {
   #line 1000 test   // C2130
   #line 1000 "test"   // OK
}
```
