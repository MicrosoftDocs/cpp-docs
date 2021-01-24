---
description: "Learn more about: operator&gt;="
title: "operator&gt;="
ms.date: "11/04/2016"
f1_keywords: ["operator>=", "std::>=", "std.operator>=", ">=", "std.>=", "std::operator>="]
helpviewer_keywords: [">= operator, comparing specific objects", "operator >=", "operator>="]
ms.assetid: 14fbebf5-8b75-4afa-a51b-3112d31c07cf
---
# operator&gt;=

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator>=** to compare two objects of class template [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator>=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `!(left < right)`.

## See also

[\<sample container>](../standard-library/sample-container.md)
