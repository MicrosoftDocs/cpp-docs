---
title: "Compiler Error C2946"
description: "Learn more about: Compiler Error C2946"
ms.date: 11/04/2016
f1_keywords: ["C2946"]
helpviewer_keywords: ["C2946"]
---
# Compiler Error C2946

> explicit instantiation; 'class' is not a template-class specialization

## Remarks

You cannot explicitly instantiate a nontemplated class.

## Example

The following example generates C2946.

```cpp
// C2946.cpp
class C {};
template C;  // C2946
int main() {}
```
