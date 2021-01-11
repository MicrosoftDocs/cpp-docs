---
description: "Learn more about: gslice_array Class"
title: "gslice_array Class"
ms.date: "11/04/2016"
f1_keywords: ["valarray/std::gslice_array"]
helpviewer_keywords: ["gslice_array class"]
ms.assetid: ad1b4514-b14a-4baf-a293-d5a8e8674c75
---
# gslice_array Class

An internal, auxiliary class template that supports general slice objects by providing operations between subset arrays defined by the general slice of a valarray.

## Syntax

```cpp
template <class Type>
class gslice_array : public gsplice {
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

The class describes an object that stores a reference to an object `va` of class [valarray](../standard-library/valarray-class.md)**\<Type>**, along with an object `gs` of class [gslice](../standard-library/gslice-class.md) which describes the sequence of elements to select from the `valarray<Type>` object.

You construct a `gslice_array<Type>` object only by writing an expression of the form [va&#91;gs&#93;](../standard-library/valarray-class.md#op_at). The member functions of class gslice_array then behave like the corresponding function signatures defined for `valarray<Type>`, except that only the sequence of selected elements is affected.

The class template is created indirectly by certain valarray operations and cannot be used directly in the program. An internal auxiliary class template instead is used by the slice subscript operator:

`gslice_array`\< **Type**> `valarray`\< **Type**>:: `operator[]` ( **constgslice&**).

You construct a `gslice_array<Type>` object only by writing an expression of the form `va[gsl]`, for a slice `gsl` of valarray `va`. The member functions of class gslice_array then behave like the corresponding function signatures defined for `valarray<Type>`, except that only the sequence of selected elements is affected. The sequence controlled by the gslice_array is defined by the three parameters of the slice constructor, the index of the first element in the first slice, the number of elements in each slice, and the distance between the elements in each slice.

In the following example:

```cpp
const size_t lv[] = {2, 3};
const size_t dv[] = {7, 2};
const valarray<size_t> len(lv, 2), str(dv, 2);

// va[gslice(3, len, str)] selects elements with
//   indices 3, 5, 7, 10, 12, 14
```

The indices must be valid for the procedure to be valid.

## Example

See the example for [gslice::gslice](../standard-library/gslice-class.md#gslice) for an example of how to declare and use a slice_array.

## Requirements

**Header:** \<valarray>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
