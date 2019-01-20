---
title: "hash Structure"
ms.date: "11/04/2016"
f1_keywords: ["typeindex/std::hash"]
ms.assetid: e5a41202-ef3b-45d0-b3a7-4c2dbdc0487a
---
# hash Structure

The template class defines its method as returning `val.hash_code()`. The method defines a hash function that is used to map values of type [type_index](../standard-library/type-index-class.md) to a distribution of index values.

## Syntax

```cpp
template <>
struct hash<type_index>
: public unary_function<type_index, size_t>
{ // hashes a typeinfo object
    size_t operator()(type_index val) const;

};
```

## See also

- [\<typeindex>](../standard-library/typeindex.md)
