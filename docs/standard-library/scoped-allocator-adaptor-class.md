---
description: "Learn more about: scoped_allocator_adaptor Class"
title: "scoped_allocator_adaptor Class"
ms.date: "11/04/2016"
f1_keywords: ["scoped_allocator/std::scoped_allocator_adaptor", "scoped_allocator/std::scoped_allocator_adaptor::rebind Struct", "scoped_allocator/std::scoped_allocator_adaptor::allocate", "scoped_allocator/std::scoped_allocator_adaptor::construct", "scoped_allocator/std::scoped_allocator_adaptor::deallocate", "scoped_allocator/std::scoped_allocator_adaptor::destroy", "scoped_allocator/std::scoped_allocator_adaptor::inner_allocator", "scoped_allocator/std::scoped_allocator_adaptor::max_size", "scoped_allocator/std::scoped_allocator_adaptor::outer_allocator", "scoped_allocator/std::scoped_allocator_adaptor::select_on_container_copy_construction"]
helpviewer_keywords: ["std::scoped_allocator_adaptor", "std::scoped_allocator_adaptor::allocate", "std::scoped_allocator_adaptor::construct", "std::scoped_allocator_adaptor::deallocate", "std::scoped_allocator_adaptor::destroy", "std::scoped_allocator_adaptor::inner_allocator", "std::scoped_allocator_adaptor::max_size", "std::scoped_allocator_adaptor::outer_allocator", "std::scoped_allocator_adaptor::select_on_container_copy_construction"]
ms.assetid: 0d9b06a1-9a4a-4669-9470-8805cae48e89
---
# scoped_allocator_adaptor Class

Represents a nest of allocators.

## Syntax

```cpp
template <class Outer, class... Inner>
class scoped_allocator_adaptor;
```

## Remarks

The class template encapsulates a nest of one or more allocators. Each such class has an outermost allocator of type `outer_allocator_type`, a synonym for `Outer`, which is a public base of the `scoped_allocator_adaptor` object. `Outer` is used to allocate memory to be used by a container. You can obtain a reference to this allocator base object by calling `outer_allocator`.

The remainder of the nest has type `inner_allocator_type`. An inner allocator is used to allocate memory for elements within a container. You can obtain a reference to the stored object of this type by calling `inner_allocator`. If `Inner...` is not empty, `inner_allocator_type` has type `scoped_allocator_adaptor<Inner...>`, and `inner_allocator` designates a member object. Otherwise, `inner_allocator_type` has type `scoped_allocator_adaptor<Outer>`, and `inner_allocator` designates the entire object.

The nest behaves as if it has arbitrary depth, replicating its innermost encapsulated allocator as needed.

Several concepts that are not a part of the visible interface aid in describing the behavior of this class template. An *outermost allocator* mediates all calls to the construct and destroy methods. It is effectively defined by the recursive function `OUTERMOST(X)`, where `OUTERMOST(X)` is one of the following.

- If `X.outer_allocator()` is well formed, then `OUTERMOST(X)` is `OUTERMOST(X.outer_allocator())`.

- Otherwise, `OUTERMOST(X)` is `X`.

Three types are defined for the sake of exposition:

|Type|Description|
|----------|-----------------|
|`Outermost`|The type of `OUTERMOST(*this)`.|
|`Outermost_traits`|`allocator_traits<Outermost>`|
|`Outer_traits`|`allocator_traits<Outer>`|

### Constructors

|Name|Description|
|----------|-----------------|
|[scoped_allocator_adaptor](#scoped_allocator_adaptor)|Constructs a `scoped_allocator_adaptor` object.|

### Typedefs

|Name|Description|
|----------|-----------------|
|`const_pointer`|This type is a synonym for the `const_pointer` that is associated with the allocator `Outer`.|
|`const_void_pointer`|This type is a synonym for the `const_void_pointer` that is associated with the allocator `Outer`.|
|`difference_type`|This type is a synonym for the `difference_type` that is associated with the allocator `Outer`.|
|`inner_allocator_type`|This type is a synonym for the type of the nested adaptor `scoped_allocator_adaptor<Inner...>`.|
|`outer_allocator_type`|This type is a synonym for the type of the base allocator `Outer`.|
|`pointer`|This type is a synonym for the `pointer` associated with the allocator `Outer`.|
|`propagate_on_container_copy_assignment`|The type holds true only if `Outer_traits::propagate_on_container_copy_assignment` holds true or `inner_allocator_type::propagate_on_container_copy_assignment` holds true.|
|`propagate_on_container_move_assignment`|The type holds true only if `Outer_traits::propagate_on_container_move_assignment` holds true or `inner_allocator_type::propagate_on_container_move_assignment` holds true.|
|`propagate_on_container_swap`|The type holds true only if `Outer_traits::propagate_on_container_swap` holds true or `inner_allocator_type::propagate_on_container_swap` holds true.|
|`size_type`|This type is a synonym for the `size_type` associated with the allocator `Outer`.|
|`value_type`|This type is a synonym for the `value_type` associated with the allocator `Outer`.|
|`void_pointer`|This type is a synonym for the `void_pointer` associated with the allocator `Outer`.|

### Structs

|Name|Description|
|----------|-----------------|
|[scoped_allocator_adaptor::rebind Struct](#rebind_struct)|Defines the type `Outer::rebind\<Other>::other` as a synonym for `scoped_allocator_adaptor\<Other, Inner...>`.|

### Methods

|Name|Description|
|----------|-----------------|
|[allocate](#allocate)|Allocates memory by using the `Outer` allocator.|
|[construct](#construct)|Constructs an object.|
|[deallocate](#deallocate)|Deallocates objects by using the outer allocator.|
|[destroy](#destroy)|Destroys a specified object.|
|[inner_allocator](#inner_allocator)|Retrieves a reference to the stored object of type `inner_allocator_type`.|
|[max_size](#max_size)|Determines the maximum number of objects that can be allocated by the outer allocator.|
|[outer_allocator](#outer_allocator)|Retrieves a reference to the stored object of type `outer_allocator_type`.|
|[select_on_container_copy_construction](#select_on_container_copy_construction)|Creates a new `scoped_allocator_adaptor` object with each stored allocator object initialized by calling `select_on_container_copy_construction` for each corresponding allocator.|

### Operators

|Operator|Description|
|-|-|
|[operator=](#op_as)||
|[operator==](#op_eq_eq)||
|[operator!=](#op_noeq)||

## Requirements

**Header:** \<scoped_allocator>

**Namespace:** std

## <a name="allocate"></a> scoped_allocator_adaptor::allocate

Allocates memory by using the `Outer` allocator.

```cpp
pointer allocate(size_type count);pointer allocate(size_type count, const_void_pointer hint);
```

### Parameters

*count*\
The number of elements for which sufficient storage is to be allocated.

*hint*\
A pointer that might assist the allocator object by locating the address of an object allocated prior to the request.

### Return Value

The first member function returns `Outer_traits::allocate(outer_allocator(), count)`. The second member function returns `Outer_traits::allocate(outer_allocator(), count, hint)`.

## <a name="construct"></a> scoped_allocator_adaptor::construct

Constructs an object.

```cpp
template <class Ty, class... Atypes>
void construct(Ty* ptr, Atypes&&... args);

template <class Ty1, class Ty2, class... Atypes1, class... Atypes2>
void construct(pair<Ty1, Ty2>* ptr, piecewise_construct_t,
    tuple<Atypes1&&...>
first, tuple<Atypes1&&...> second);

template <class Ty1, class Ty2>
void construct(pair<Ty1, Ty2>* ptr);

template <class Ty1, class Ty2, class Uy1, class Uy2>
void construct(pair<Ty1, Ty2>* ptr,
    class Uy1&& first, class Uy2&& second);

template <class Ty1, class Ty2, class Uy1, class Uy2>
void construct(pair<Ty1, Ty2>* ptr, const pair<Uy1, Uy2>& right);

template <class Ty1, class Ty2, class Uy1, class Uy2>
void construct(pair<Ty1, Ty2>* ptr, pair<Uy1, Uy2>&& right);
```

### Parameters

*ptr*\
A pointer to the memory location where the object is to be constructed.

*args*\
A list of arguments.

*first*\
An object of the first type in a pair.

*second*\
An object of the second type in a pair.

*right*\
An existing object to be moved or copied.

### Remarks

The first method constructs the object at *ptr* by calling `Outermost_traits::construct(OUTERMOST(*this), ptr, xargs...)`, where `xargs...` is one of the following.

- If `uses_allocator<Ty, inner_allocator_type>` holds false, then `xargs...` is `args...`.

- If `uses_allocator<Ty, inner_allocator_type>` holds true, and `is_constructible<Ty, allocator_arg_t, inner_allocator_type, args...>` holds true, then `xargs...` is `allocator_arg, inner_allocator(), args...`.

- If `uses_allocator<Ty, inner_allocator_type>` holds true, and `is_constructible<Ty, args..., inner_allocator()>` holds true, then `xargs...` is `args..., inner_allocator()`.

The second method constructs the pair object at *ptr* by calling `Outermost_traits::construct(OUTERMOST(*this), &ptr->first, xargs...)`, where `xargs...` is `first...` modified as in the above list, and `Outermost_traits::construct(OUTERMOST(*this), &ptr->second, xargs...)`, where `xargs...` is `second...` modified as in the above list.

The third method behaves the same as `this->construct(ptr, piecewise_construct, tuple<>, tuple<>)`.

The fourth method behaves the same as `this->construct(ptr, piecewise_construct, forward_as_tuple(std::forward<Uy1>(first), forward_as_tuple(std::forward<Uy2>(second))`.

The fifth method behaves the same as `this->construct(ptr, piecewise_construct, forward_as_tuple(right.first), forward_as_tuple(right.second))`.

The sixth method behaves the same as `this->construct(ptr, piecewise_construct, forward_as_tuple(std::forward<Uy1>(right.first), forward_as_tuple(std::forward<Uy2>(right.second))`.

## <a name="deallocate"></a> scoped_allocator_adaptor::deallocate

Deallocates objects by using the outer allocator.

```cpp
void deallocate(pointer ptr, size_type count);
```

### Parameters

*ptr*\
A pointer to the starting location of the objects to be deallocated.

*count*\
The number of objects to deallocate.

## <a name="destroy"></a> scoped_allocator_adaptor::destroy

Destroys a specified object.

```cpp
template <class Ty>
void destroy(Ty* ptr)
```

### Parameters

*ptr*\
A pointer to the object to be destroyed.

### Return Value

`Outermost_traits::destroy(OUTERMOST(*this), ptr)`

## <a name="inner_allocator"></a> scoped_allocator_adaptor::inner_allocator

Retrieves a reference to the stored object of type `inner_allocator_type`.

```cpp
inner_allocator_type& inner_allocator() noexcept;
const inner_allocator_type& inner_allocator() const noexcept;
```

### Return Value

A reference to the stored object of type `inner_allocator_type`.

## <a name="max_size"></a> scoped_allocator_adaptor::max_size

Determines the maximum number of objects that can be allocated by the outer allocator.

```cpp
size_type max_size();
```

### Return Value

`Outer_traits::max_size(outer_allocator())`

## <a name="op_as">  scoped_allocator_adaptor::operator=

```cpp
scoped_allocator_adaptor& operator=(const scoped_allocator_adaptor&) = default;
scoped_allocator_adaptor& operator=(scoped_allocator_adaptor&&) = default;
```

## <a name="op_eq_eq">  scoped_allocator_adaptor::operator==

```cpp
template <class OuterA1, class OuterA2, class... InnerAllocs>
bool operator==(const scoped_allocator_adaptor<OuterA1, InnerAllocs...>& a,
const scoped_allocator_adaptor<OuterA2, InnerAllocs...>& b) noexcept;
```

## <a name="op_noeq">  scoped_allocator_adaptor::operator!=

```cpp
template <class OuterA1, class OuterA2, class... InnerAllocs>
bool operator!=(const scoped_allocator_adaptor<OuterA1, InnerAllocs...>& a,
const scoped_allocator_adaptor<OuterA2, InnerAllocs...>& b) noexcept;
```

## <a name="outer_allocator"></a> scoped_allocator_adaptor::outer_allocator

Retrieves a reference to the stored object of type `outer_allocator_type`.

```cpp
outer_allocator_type& outer_allocator() noexcept;
const outer_allocator_type& outer_allocator() const noexcept;
```

### Return Value

A reference to the stored object of type `outer_allocator_type`.

## <a name="rebind_struct"></a> scoped_allocator_adaptor::rebind Struct

Defines the type `Outer::rebind\<Other>::other` as a synonym for `scoped_allocator_adaptor\<Other, Inner...>`.

struct rebind{
   typedef Other_traits::rebind\<Other>
   Other_alloc;
   typedef scoped_allocator_adaptor\<Other_alloc, Inner...> other;
   };

## <a name="scoped_allocator_adaptor"></a> scoped_allocator_adaptor::scoped_allocator_adaptor Constructor

Constructs a `scoped_allocator_adaptor` object. Also includes a destructor.

```cpp
scoped_allocator_adaptor();

scoped_allocator_adaptor(const scoped_allocator_adaptor& right) noexcept;
template <class Outer2>
scoped_allocator_adaptor(
const scoped_allocator_adaptor<Outer2, Inner...>& right) noexcept;
template <class Outer2>
scoped_allocator_adaptor(
scoped_allocator_adaptor<Outer2, Inner...>&& right) noexcept;
template <class Outer2>
scoped_allocator_adaptor(Outer2&& al,
    const Inner&... rest) noexcept;

~scoped_allocator_adaptor();
```

### Parameters

*right*\
An existing `scoped_allocator_adaptor`.

*al*\
An existing allocator to be used as the outer allocator.

*rest*\
A list of allocators to be used as the inner allocators.

### Remarks

The first constructor default constructs its stored allocator objects. Each of the next three constructors constructs its stored allocator objects from the corresponding objects in *right*. The last constructor constructs its stored allocator objects from the corresponding arguments in the argument list.

## <a name="select_on_container_copy_construction"></a> scoped_allocator_adaptor::select_on_container_copy_construction

Creates a new `scoped_allocator_adaptor` object with each stored allocator object initialized by calling `select_on_container_copy_construction` for each corresponding allocator.

```cpp
scoped_allocator_adaptor select_on_container_copy_construction();
```

### Return Value

This method effectively returns `scoped_allocator_adaptor(Outer_traits::select_on_container_copy_construction(*this), inner_allocator().select_on_container_copy_construction())`. The result is a new `scoped_allocator_adaptor` object with each stored allocator object initialized by calling `al.select_on_container_copy_construction()` for the corresponding allocator *al*.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
