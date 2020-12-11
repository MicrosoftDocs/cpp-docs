---
description: "Learn more about: operator&lt;= (&lt;sample container&gt;)"
title: "operator&lt;= (&lt;sample container&gt;)"
ms.date: "11/04/2016"
f1_keywords: ["std::<=", "std.operator<=", "operator<=", "std.<=", "std::operator<=", "<="]
helpviewer_keywords: ["operator<=", "operator <=", "<= operator, with specific objects", "<= operator"]
ms.assetid: 338577dd-dc88-4a2b-9e12-0379c54fc8a2
---
# operator&lt;= (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator<=** to compare two objects of class template [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator<=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `!(right < left)`.

## See also

[\<sample container>](../standard-library/sample-container.md)
