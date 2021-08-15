---
description: "Learn more about: &lt;hash_map&gt; functions"
title: "&lt;hash_map&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["hash_map/std::swap", "hash_map/std::swap (hash_map)"]
ms.assetid: 28748cd0-71f7-41b9-b068-579183645fba
---
# &lt;hash_map&gt; functions

[swap](#swap)\
[swap (hash_map)](#swap_hash_map)

## <a name="swap_hash_map"></a> swap (hash_map)

> [!NOTE]
> This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).

Exchanges the elements of two hash_maps.

```cpp
void swap(
    hash_map <Key, Type, Traits, Alloctor>& left,
    hash_map <Key, Type, Traits, Allocator>& right);
```

### Parameters

*right*\
The hash_map whose elements are to be exchanged with those of the map *left*.

*left*\
The hash_map whose elements are to be exchanged with those of the map *right*.

### Remarks

The template function is an algorithm specialized on the container class hash_map to execute the member function `left.`[swap](../standard-library/basic-ios-class.md#swap)*(right*). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template \<class T> void swap(T&, T&)**, in the algorithm header file works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

## <a name="swap"></a> swap

> [!NOTE]
> This API is obsolete. The alternative is [unordered_multimap Class](../standard-library/unordered-multimap-class.md).

Exchanges the elements of two hash_multimaps.

```cpp
void swap(
    hash_multimap <Key, Type, Traits, Alloctor>& left,
    hash_multimap <Key, Type, Traits, Allocator>& right);
```

### Parameters

*right*\
The hash_multimap whose elements are to be exchanged with those of the map *left*.

*left*\
The hash_multimap whose elements are to be exchanged with those of the map *right*.

### Remarks

The template function is an algorithm specialized on the container class hash_multimap to execute the member function `left.`[swap](../standard-library/hash-multimap-class.md#swap)*(right*`)`. This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template \<class T> void swap(T&, T&)**, in the algorithm header file works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

## See also

[<hash_map>](../standard-library/hash-map.md)
