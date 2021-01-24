---
description: "Learn more about: Container Class::erase"
title: "Container Class::erase"
ms.date: "11/04/2016"
helpviewer_keywords: ["erase method"]
ms.assetid: abc091c5-5a80-4bd8-93a8-a2d9bde2efec
---
# Container Class::erase

> [!NOTE]
> This topic is in the Microsoft C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).

Erases an element.

## Syntax

```cpp
iterator erase(
    iterator _Where);

iterator erase(
    iterator first,
    iterator last);
```

## Remarks

The first member function removes the element of the controlled sequence pointed to by *_Where*. The second member function removes the elements of the controlled sequence in the range [`first`, `last`). Both return an iterator that designates the first element remaining beyond any elements removed, or [end](../standard-library/container-class-end.md) if no such element exists.

The member functions throw an exception only if a copy operation throws an exception.

## See also

[Sample Container Class](../standard-library/sample-container-class.md)
