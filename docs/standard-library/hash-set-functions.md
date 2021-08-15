---
description: "Learn more about: &lt;hash_set&gt; functions"
title: "&lt;hash_set&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["hash_set/std::swap", "hash_set/std::swap (hash_multiset)"]
ms.assetid: 557a0162-3728-4537-97dc-f9f6cc7ece94
---
# &lt;hash_set&gt; functions

[swap](#swap)\
[swap (hash_multiset)](#swap_hash_multiset)

## <a name="swap"></a> swap

> [!NOTE]
> This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).

Exchanges the elements of two hash_sets.

```cpp
void swap(
    hash_set <Key, Traits, Allocator>& left,
    hash_set <Key, Traits, Allocator>& right);
```

### Parameters

*right*\
The hash_set providing the elements to be swapped, or the hash_set whose elements are to be exchanged with those of the hash_set *left*.

*left*\
The hash_set whose elements are to be exchanged with those of the hash_set *right*.

### Remarks

The `swap` template function is an algorithm specialized on the container class hash_set to execute the member function `left.`[swap](../standard-library/hash-set-class.md#swap)(`right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function

**template \<class T> void swap(T&, T&),**

in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

### Example

See the code example for the member class [hash_set::swap](../standard-library/hash-set-class.md#swap) for an example that uses the template version of `swap`.

## <a name="swap_hash_multiset"></a> swap (hash_multiset)

> [!NOTE]
> This API is obsolete. The alternative is [unordered_set Class](../standard-library/unordered-set-class.md).

Exchanges the elements of two hash_multisets.

```cpp
void swap(hash_multiset <Key, Traits, Allocator>& left, hash_multiset <Key, Traits, Allocator>& right);
```

### Parameters

*right*\
The hash_multiset providing the elements to be swapped, or the hash_multiset whose elements are to be exchanged with those of the hash_multiset *left*.

*left*\
The hash_multiset whose elements are to be exchanged with those of the hash_multiset *right*.

### Remarks

The `swap` template function is an algorithm specialized on the container class hash_multiset to execute the member function `left.`[swap](../standard-library/hash-multiset-class.md#swap)(`right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function

**template \<class T> void swap(T&, T&),**

in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

### Example

See the code example for the member class [hash_multiset::swap](../standard-library/hash-multiset-class.md#swap) for an example that uses the template version of `swap`.

## See also

[<hash_set>](../standard-library/hash-set.md)
