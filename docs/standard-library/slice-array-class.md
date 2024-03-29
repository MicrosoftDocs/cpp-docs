---
description: "Learn more about: slice_array class"
title: "slice_array class"
ms.date: 01/12/2022
f1_keywords: ["valarray/std::slice_array"]
helpviewer_keywords: ["slice_array class"]
ms.assetid: a182d5f7-f35c-4e76-86f2-b5ac64ddc846
---
# `slice_array` class

An internal, auxiliary class template that supports `slice` objects by providing operations between subset arrays defined by the slice of a `valarray`.

## Syntax

```cpp
template <class Type>
class slice_array : public slice {
public:
    typedef Type value_type;
    void operator=(const valarray<Type>& x) const;
    void operator=(const Type& x) const;
    void operator*=(const valarray<Type>& x) const;
    void operator/=(const valarray<Type>& x) const;
    void operator%=(const valarray<Type>& x) const;
    void operator+=(const valarray<Type>& x) const;
    void operator-=(const valarray<Type>& x) const;
    void operator^=(const valarray<Type>& x) const;
    void operator&=(const valarray<Type>& x) const;
    void operator|=(const valarray<Type>& x) const;
    void operator<<=(const valarray<Type>& x) const;
    void operator>>=(const valarray<Type>& x) const;
    // The rest is private or implementation defined
}
```

## Remarks

The class describes an object that stores a reference to an object of class [`valarray<Type>`](../standard-library/valarray-class.md), along with an object of class [`slice`](../standard-library/slice-class.md), which describes the sequence of elements to select from the `valarray<Type>` object.

The class template is created indirectly by certain `valarray` operations and can't be used directly in the program. An internal, auxiliary class template that is used by the `slice` subscript operator:

`slice_array<Type> valarray<Type>::operator[]( slice )`.

You construct a `slice_array<Type>` object only by writing an expression of the form [`va[sl]`](../standard-library/valarray-class.md#op_at), for a slice `sl` of valarray `va`. The member functions of class `slice_array` then behave like the corresponding function signatures defined for `valarray<Type>`, except that only the sequence of selected elements is affected. The sequence controlled by the `slice_array` is defined by the three parameters of the `slice` constructor, the index of the first element in the `slice`, the number of elements, and the distance between the elements. A `slice_array` cut from `valarray` `va` declared by `va[slice(2, 5, 3)]` selects elements with indices 2, 5, 8, 11, and 14 from `va`. The indices must be valid for the procedure to be valid.

## Example

See the example for [`slice::slice`](../standard-library/slice-class.md#slice) for an example of how to declare and use a `slice_array`.

## Requirements

**Header:** \<valarray>

**Namespace:** `std`

## See also

[Thread safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
