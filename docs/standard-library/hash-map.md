---
description: "Learn more about: &lt;hash_map&gt;"
title: "&lt;hash_map&gt;"
ms.date: "01/18/2018"
f1_keywords: ["<hash_map>", "std::<hash_map>"]
helpviewer_keywords: ["hash_map header"]
---
# &lt;hash_map&gt;

> [!NOTE]
> This header is obsolete. The alternative is [\<unordered_map>](unordered-map.md).

Defines the container class templates hash_map and hash_multimap and their supporting templates.

## Syntax

```cpp
#include <hash_map>
```

### Operators

|Hash_map version|Hash_multimap version|Description|
|-----------------------|----------------------------|-----------------|
|[operator!= (hash_map)](hash-map-operators.md#op_neq)|[operator!=(hash_multimap)](hash-map-operators.md#op_neq_mm)|Tests if the hash_map or hash_multimap object on the left side of the operator is not equal to the hash_map or hash_multimap object on the right side.|
|[operator== (hash_map)](hash-map-operators.md#op_eq_eq)|[operator== (hash_multimap)](hash-map-operators.md#op_eq_eq_mm)|Tests if the hash_map or hash_multimap object on the left side of the operator is equal to the hash_map or hash_multimap object on the right side.|

### Specialized Template Functions

|Hash_map version|Hash_multimap version|Description|
|-----------------------|----------------------------|-----------------|
|[swap (hash_map)](hash-map-class.md#swap)|[swap (hash_multimap)](hash-multimap-class.md#swap)|Exchanges the elements of two hash_maps or hash_multimaps.|

### Classes

|Class|Description|
|-|-|
|[hash_compare Class](hash-compare-class.md)|Describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default `Traits` parameter object to order and hash the elements they contain.|
|[value_compare Class](value-compare-class.md)|Provides a function object that can compare the elements of a hash_map by comparing the values of their keys to determine their relative order in the hash_map.|
|[hash_map Class](hash-map-class.md)|Used for the storage and fast retrieval of data from a collection in which each element is a pair that has a sort key whose value is unique and an associated data value.|
|[hash_multimap Class](hash-multimap-class.md)|Used for the storage and fast retrieval of data from a collection in which each element is a pair that has a sort key whose value need not be unique and an associated data value.|

## Requirements

**Header:** \<hash_map>

**Namespace:** stdext

## See also

[Header Files Reference](cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](cpp-standard-library-reference.md)
