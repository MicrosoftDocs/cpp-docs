---
description: "Learn more about: vector&lt;bool&gt;::reference::operator bool"
title: "vector&lt;bool&gt;::reference::operator bool"
ms.date: "11/04/2016"
f1_keywords: ["operatorbool", "vector<bool>::reference::operatorbool", "bool", "std::vector<bool>::reference::operatorbool"]
helpviewer_keywords: ["BOOL operator", "reference::operator bool"]
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
---
# vector&lt;bool&gt;::reference::operator bool

Provides an implicit conversion from `vector<bool>::reference` to **`bool`**.

## Syntax

```cpp
operator bool() const;
```

## Return Value

The Boolean value of the element of the [vector\<bool>](../standard-library/vector-bool-class.md) object.

## Remarks

The `vector<bool>` object cannot be modified by this operator.

## Requirements

**Header:** \<vector>

**Namespace:** std

## See also

[vector\<bool>::reference Class](../standard-library/vector-bool-reference-class.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
