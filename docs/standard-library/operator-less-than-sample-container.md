---
description: "Learn more about: operator&lt; (&lt;sample container&gt;)"
title: "operator&lt; (&lt;sample container&gt;)"
ms.date: "11/04/2016"
f1_keywords: ["std::operator<", "operator<", "std.<", "<", "std.operator<", "std::<"]
helpviewer_keywords: ["< operator, comparing specific objects", "operator<, valarrays", "< operator", "operator <, valarrays"]
ms.assetid: 31027dd6-53be-428b-b950-1dcb25393597
---
# operator&lt; (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator<** to compare two objects of class template [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator<(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `lexicographical_compare(left.begin, left.end, right.begin, right.end)`.

## See also

[\<sample container>](../standard-library/sample-container.md)\
[begin](../standard-library/container-class-begin.md)\
[end](../standard-library/container-class-end.md)
