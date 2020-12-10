---
description: "Learn more about: &lt;set&gt; functions"
title: "&lt;set&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["set/std::swap (map)", "set/std::swap (multiset)"]
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
---
# &lt;set&gt; functions

## <a name="swap"></a> swap (map)

Exchanges the elements of two sets.

```cpp
template <class Key, class Traits, class Allocator>
void swap(set<Key, Traits, Allocator>& left, set<Key, Traits, Allocator>& right);
```

### Parameters

*right*\
The set providing the elements to be swapped, or the set whose elements are to be exchanged with those of the set *left*.

*left*\
The set whose elements are to be exchanged with those of the set *right*.

### Remarks

The template function is an algorithm specialized on the container class set to execute the member function `left.`[swap](../standard-library/set-class.md#swap)(`right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function

`template` \< **classT**> **void swap**( **T&**, **T&**)

in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

### Example

See the code example for the member class [set::swap](../standard-library/set-class.md#swap) for an example of the use of the template version of `swap`.

## <a name="swap_multiset"></a> swap (multiset)

Exchanges the elements of two multisets.

```cpp
template <class Key, class Traits, class Allocator>
void swap(multiset<Key, Traits, Allocator>& left, multiset<Key, Traits, Allocator>& right);
```

### Parameters

*right*\
The multiset providing the elements to be swapped, or the multiset whose elements are to be exchanged with those of the multiset *left*.

*left*\
The multiset whose elements are to be exchanged with those of the multiset *right*.

### Remarks

The template function is an algorithm specialized on the container class multiset to execute the member function `left.`[swap](../standard-library/multiset-class.md#swap)(`right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function

`template` \< **classT**> **void swap**( **T&**, **T&**)

in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

### Example

See the code example for the member class [multiset::swap](../standard-library/multiset-class.md#swap)for an example of the use of the template version of `swap`.
