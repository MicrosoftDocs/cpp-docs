---
description: "Learn more about: operator== (&lt;sample container&gt;)"
title: "operator== (&lt;sample container&gt;)"
ms.date: "11/04/2016"
f1_keywords: ["std.==", "std::==", "operator==", "std.operator==", "std::operator==", "=="]
helpviewer_keywords: ["operator ==, containers", "operator==, containers", "== operator, with specific standard C++ objects"]
ms.assetid: d3d8754e-5157-4b8b-bf9c-da41856f5eed
---
# operator== (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads `operator==` to compare two objects of class template [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator==(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `left.`[size](../standard-library/container-class-size.md) `== right.size && equal(left.`[begin](../standard-library/container-class-begin.md)`, left.`[end](../standard-library/container-class-end.md)`, right.begin)`.

## See also

[\<sample container>](../standard-library/sample-container.md)
