---
description: "Learn more about: operator&gt; (&lt;sample container&gt;)"
title: "operator&gt; (&lt;sample container&gt;)"
ms.date: "11/04/2016"
f1_keywords: ["std::operator>", "operator>", "std::>", ">"]
helpviewer_keywords: ["> operator, comparing specific objects", "operator >"]
ms.assetid: 49bd417a-3305-4ffa-9884-39d3904ed87d
---
# operator&gt; (&lt;sample container&gt;)

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Overloads **operator>** to compare two objects of class template [Container](../standard-library/sample-container-class.md).

## Syntax

```cpp
template <class Ty>
bool operator*gt;(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## Return Value

Returns `right < left`.

## See also

[\<sample container>](../standard-library/sample-container.md)
