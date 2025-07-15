---
title: "Compiler Error C2130"
description: "Learn more about: Compiler Error C2130"
ms.date: 11/04/2016
f1_keywords: ["C2130"]
helpviewer_keywords: ["C2130"]
---
# Compiler Error C2130

> #line expected a string containing the filename, found 'token'

## Remarks

The optional file name token following [#line](../../preprocessor/hash-line-directive-c-cpp.md) `linenumber` must be a string.

## Example

The following example generates C2130:

```cpp
// C2130.cpp
int main() {
   #line 1000 test   // C2130
   #line 1000 "test"   // OK
}
```
