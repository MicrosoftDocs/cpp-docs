---
title: "value_compare Class"
description: "Learn more about: value_compare Class"
ms.date: 11/04/2016
f1_keywords: ["hash_map/std::value_compare"]
helpviewer_keywords: ["value_compare class"]
---
# `value_compare` Class

Provides a function object that can compare the elements of a `hash_map` by comparing the values of their keys to determine their relative order in the `hash_map`.

## Syntax

```cpp
class value_compare
    : public binary_function<value_type, value_type, bool>
{
public:
    bool operator()(
        const value_type& left,
        const value_type& right) const
    {
        return (comp(left.first, right.first));
    }

protected:
    value_compare(const key_compare& c) : comp (c) { }
    key_compare comp;
};
```

## Remarks

The comparison criteria provided by `value_compare` between `value_types` of whole elements contained by a `hash_map` is induced from a comparison between the keys of the respective elements by the auxiliary class construction. The member function operator uses the object `comp` of type `key_compare` stored in the function object provided by `value_compare` to compare the sort-key components of two elements.

For `hash_set`s and `hash_multiset`s, which are simple containers where the key values are identical to the element values, `value_compare` is equivalent to `key_compare`; for `hash_map`s and `hash_multimap`s they are not, because the value of the type `pair` elements is not identical to the value of the element's key.

## Example

See the example for [`hash_map::value_comp`](hash-map-class.md#value_comp) for an example of how to declare and use `value_compare`.

## Requirements

**Header:** `<hash_map>`

**Namespace:** `stdext`

## See also

[`binary_function` Struct](binary-function-struct.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](cpp-standard-library-reference.md)
