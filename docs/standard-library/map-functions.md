---
description: "Learn more about: &lt;map&gt; functions"
title: "&lt;map&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["map/std::swap (map)", "map/std::swap (multimap)"]
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
---
# &lt;map&gt; functions

## <a name="swap_multimap"></a> swap (map)

Exchanges the elements of two maps.

```cpp
template <class key, class T, class _Pr, class _Alloc>
void swap(
    map<Key, Traits, Compare, Alloctor>& left,
    map<Key, Traits, Compare, Alloctor>& right);
```

### Parameters

*right*\
The map providing the elements to be swapped, or the map whose elements are to be exchanged with those of the map *left*.

*left*\
The map whose elements are to be exchanged with those of the map *right*.

### Remarks

The template function is an algorithm specialized on the container class map to execute the member function `left`.[swap](../standard-library/map-class.md#swap)( `right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **`template`** \< **class T**> **void swap**( **T&**, **T&**), in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

### Example

See the code example for member function [map::swap](../standard-library/map-class.md#swap) for an example that uses the template version of `swap`.

## <a name="swap"></a> swap (multimap)

Exchanges the elements of two multimaps.

```cpp
template <class key, class T, class _Pr, class _Alloc>
void swap(
    multimap<Key, Traits, Compare, Alloctor>& left,
    multimap<Key, Traits, Compare, Alloctor>& right);
```

### Parameters

*right*\
The multimap providing the elements to be swapped, or the multimap whose elements are to be exchanged with those of the multimap *left*.

*left*\
The multimap whose elements are to be exchanged with those of the multimap *right*.

### Remarks

The template function is an algorithm specialized on the container class map to execute on the container class multimap to execute the member function `left`.[swap](../standard-library/multimap-class.md#swap) (`right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **`template`** \< **class T**> **void swap**( **T&**, **T&**), in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.

### Example

See the code example for member function [multimap::swap](../standard-library/multimap-class.md#swap) for an example that uses the template version of `swap`.
