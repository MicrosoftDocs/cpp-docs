---
title: "value_compare class"
description: "Learn more about: value_compare class"
ms.date: 11/04/2016
f1_keywords: ["hash_map/std::value_compare"]
helpviewer_keywords: ["value_compare class"]
---
# `value_compare` class

> [!NOTE]
> `value_compare` was removed in MSVC Build Tools 14.51.

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

Before removal, `value_compare` compared two `hash_map` elements by applying its stored `key_compare` object, `comp`, to their keys. It compared the `first` members of the elements rather than their mapped values.

For the legacy `hash_set` and `hash_multiset` containers, the key was also the element value, so `value_compare` was equivalent to `key_compare`. For the legacy `hash_map` and `hash_multimap` containers, the element was a `pair`, so the two comparison types weren't equivalent.

The standard unordered containers aren't direct replacements for this API. Because they don't order their elements, `unordered_map`, `unordered_multimap`, `unordered_set`, and `unordered_multiset` provide `key_equal` instead of `value_compare` or `value_comp`.

> [!NOTE]
> `hash_set`, `hash_multiset`, `hash_map` and `hash_multimap` were removed in MSVC Build Tools 14.51

## Example

See the example for [`hash_map::value_comp`](hash-map-class.md#value_comp) for an example of how to declare and use `value_compare`.

## Requirements

**Header:** `<hash_map>`

**Namespace:** `stdext`

## See also

[`binary_function` Struct](binary-function-struct.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](cpp-standard-library-reference.md)
