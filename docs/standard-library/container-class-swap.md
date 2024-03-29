---
description: "Learn more about: Container Class::swap"
title: "Container Class::swap"
ms.date: 06/10/2022
helpviewer_keywords: ["swap method"]
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
ms.custom: devdivchpfy22
---

# Container Class::swap

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Swaps the controlled sequences between `*this` and its argument.

## Syntax

```cpp
void swap(Container& right);
```

## Remarks

If `*this.get_allocator == right.get_allocator`, it does a swap in constant time. Otherwise, it performs element assignments and constructor calls proportional to the number of elements in the two controlled sequences.

## See also

[Sample Container Class](../standard-library/sample-container-class.md)
