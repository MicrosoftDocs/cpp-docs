---
description: "Learn more about: hash Class"
title: "hash Class"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::hash", "bitset/std::hash", "memory/std::hash", "string/std::hash", "system_error/std::hash", "vector/std::hash", "XSTDDEF/std::hash", "xstring/std::hash"]
helpviewer_keywords: ["std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]"]
ms.assetid: e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4
---
# hash Class

Computes hash code for a value.

## Syntax

```cpp
template <class Ty>
struct hash {
    size_t operator()(Ty val) const;
};
```

## Remarks

The function object defines a hash function, suitable for mapping values of type *Ty* to a distribution of index values. The member `operator()` returns a hash code for *val*, suitable for use with class templates `unordered_map`, `unordered_multimap`, `unordered_set`, and `unordered_multiset`. The standard library provides specializations for basic types: *Ty* may be any scalar type, including pointer types and enumeration types. In addition, there are specializations for the library types `string`, `wstring`, `u16string`, `u32string`, `string_view`, `wstring_view`, `u16string_view`, `u32string_view`, `bitset`, `error_code`, `error_condition`, `optional`, `shared_ptr`, `thread`, `type_index`, `unique_ptr`, `variant`, and `vector<bool>`.

## Example

```cpp
// std__functional__hash.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>
#include <unordered_set>

int main()
    {
    std::unordered_set<int, std::hash<int> > c0;
    c0.insert(3);
    std::cout << *c0.find(3) << std::endl;

    return (0);
    }
```

```Output
3
```

## Requirements

**Header:** \<functional>

**Namespace:** std

## See also

[<unordered_map>](../standard-library/unordered-map.md)\
[unordered_multimap Class](../standard-library/unordered-multimap-class.md)\
[unordered_multiset Class](../standard-library/unordered-multiset-class.md)\
[<unordered_set>](../standard-library/unordered-set.md)
