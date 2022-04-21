---
description: "Learn more about: <memory_resource> operators"
title: "<memory_resource> operators"
ms.date: "11/04/2016"
f1_keywords: ["memory_resource/std::operator!=", "memory_resource/std::operator=="]
helpviewer_keywords: ["std::operator!= (memory_resource)", "std::operator== (memory_resource)"]
---
# `<memory_resource>` operators

## <a name="op_neq"></a> operator!=

Tests if the memory_resource object on the left side of the operator is not equal to the memory_resource object on the right side.

```cpp
template <class T1, class T2>
    bool operator!=(const polymorphic_allocator<T1>& a, const polymorphic_allocator<T2>& b) noexcept;
```

## <a name="op_eq_eq"></a> operator==

Tests if the memory_resource object on the left side of the operator is equal to the memory_resource object on the right side.

```cpp
template <class T1, class T2>
    bool operator==(const polymorphic_allocator<T1>& a, const polymorphic_allocator<T2>& b) noexcept;
```
