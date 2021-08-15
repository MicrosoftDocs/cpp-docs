---
description: "Learn more about: pointer_traits Struct"
title: "pointer_traits Struct"
ms.date: "11/04/2016"
f1_keywords: ["memory/std::pointer_traits::element_type", "memory/std::pointer_traits::pointer", "memory/std::pointer_traits", "memory/std::pointer_traits::difference_type", "memory/std::pointer_traits::rebind", "xmemory0/std::pointer_traits::element_type", "xmemory0/std::pointer_traits::pointer", "xmemory0/std::pointer_traits", "xmemory0/std::pointer_traits::difference_type", "xmemory0/std::pointer_traits::rebind", "memory/std::pointer_traits::pointer_to"]
ms.assetid: 545aecf1-3561-4859-8b34-603c079fe1b3
---
# pointer_traits Struct

Supplies information that is needed by an object of type `allocator_traits` to describe an allocator with pointer type `Ptr`.

## Syntax

```cpp
template <class Ptr>
    struct pointer_traits;
```

## Remarks

Ptr can be a raw pointer of type `Ty *` or a class with the following properties.

```cpp
struct Ptr
{ // describes a pointer type usable by allocators
   typedef Ptr pointer;
   typedef T1 element_type; // optional
   typedef T2 difference_type; // optional
   template <class Other>
   using rebind = typename Ptr<Other, Rest...>; // optional
   static pointer pointer_to(element_type& obj); // optional
};
```

## Members

### Typedefs

|Name|Description|
|-|-|
|`typedef T2 difference_type`|The type `T2` is `Ptr::difference_type` if that type exists, otherwise `ptrdiff_t`. If `Ptr` is a raw pointer, the type is `ptrdiff_t`.|
|`typedef T1 element_type`|The type `T1` is `Ptr::element_type` if that type exists, otherwise `Ty`. If `Ptr` is a raw pointer, the type is `Ty`.|
|`typedef Ptr pointer`|The type is `Ptr`.|

### Structs

|Name|Description|
|-|-|
|`rebind`|Attempts to convert the underlying pointer type to a specified type.|

### Methods

|Name|Description|
|----------|-----------------|
|[pointer_to](#pointer_to)|Converts an arbitrary reference to an object of class `Ptr`.|

### <a name="pointer_to"></a> pointer_to

Static method that returns `Ptr::pointer_to(obj)`, if that function exists. Otherwise, it is not possible to convert an arbitrary reference to an object of class `Ptr`. If `Ptr` is a raw pointer, this method returns `addressof(obj)`.

```cpp
static pointer pointer_to(element_type& obj);
```
