---
description: "Learn more about: default_delete Struct"
title: "default_delete Struct"
ms.date: "04/04/2019"
f1_keywords: ["memory/std::default_delete"]
helpviewer_keywords: ["default_delete struct"]
---
# default_delete Struct

A predefined function object that performs the division operation (`operator/`) on its arguments.

## Syntax

```cpp
template <class T>
    struct default_delete
```

## Requirements

**Header:** \<memory>

**Namespace:** std

## Members

### Constructors

|Name|Description|
|-|-|
|[default_delete](#default_delete)|The constructor for objects of type `default_delete`.|

### Operators

|Name|Description|
|-|-|
|[operator()](#op_paren)|A reference operator to access `default_delete`.|

## <a name="default_delete"></a> default_delete

The constructor for objects of type `default_delete`.

```cpp
constexpr default_delete() noexcept = default;
template <class U>
    default_delete(const default_delete<U>&) noexcept;
```

## <a name="op_paren"></a> operator()

A reference operator to access `default_delete`.

```cpp
void operator()(T*) const;
```

## See also

[\<memory>](../standard-library/memory.md)
