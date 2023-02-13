---
description: "Learn more about: <list> functions"
title: <list> functions 
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["list/std::swap"]
---
# `<list>` functions

## <a name="swap"></a> swap

Exchanges the elements of two lists.

```cpp
template <class T, class Allocator>
    void swap(list<T, Allocator>& left, list<T, Allocator>& right)
```

### Parameters

*left*\
An object of type `list`.

*right*\
An object of type `list`.

### Remarks

This template function executes `left.swap(right)`.
