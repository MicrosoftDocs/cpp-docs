---
description: "Learn more about: operator!="
title: "operator!="
ms.date: "11/04/2016"
f1_keywords: ["std::!=", "!=", "std::operator!=", "std.operator!=", "std.!=", "operator!="]
helpviewer_keywords: ["!= operator", "operator!=", "operator !="]
ms.assetid: ef2be7f0-1c94-4edc-b65c-731fddd519f4
---
# operator!=

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads `operator!=` to compare two objects of class template [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator!=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `!(left == right)`.

## See also

[\<sample container>](../standard-library/sample-container.md)
