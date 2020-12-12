---
description: "Learn more about: &lt;hash_set&gt;"
title: "&lt;hash_set&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<hash_set>", "std::<hash_set>"]
helpviewer_keywords: ["hash_set header"]
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
---
# &lt;hash_set&gt;

> [!NOTE]
> This header is obsolete. The alternative is [<unordered_set>](../standard-library/unordered-set.md).

Defines the container class templates hash_set and hash_multiset and their supporting templates.

## Syntax

```cpp
#include <hash_set>
```

## Remarks

### Operators

|Hash_set version|Hash_multiset version|Description|
|-----------------------|----------------------------|-----------------|
|[operator!= (hash_set)](../standard-library/hash-set-operators.md#op_neq)|[operator!= (hash_multiset)](../standard-library/hash-set-operators.md#op_neq)|Tests if the hash_set or hash_multiset object on the left side of the operator is not equal to the hash_set or hash_multiset object on the right side.|
|[operator== (hash_set)](../standard-library/hash-set-operators.md#op_eq_eq)|[operator== (hash_multiset)](../standard-library/hash-set-operators.md#op_eq_eq)|Tests if the hash_set or hash_multiset object on the left side of the operator is equal to the hash_set or hash_multiset object on the right side.|

### Specialized Template Functions

|Hash_set version|Hash_multiset version|Description|
|-----------------------|----------------------------|-----------------|
|[swap (hash_set)](../standard-library/hash-set-functions.md#swap)|[swap (hash_multiset)](../standard-library/hash-set-functions.md#swap_hash_multiset)|Exchanges the elements of two hash_sets or hash_multisets.|

### Classes

|Class|Description|
|-|-|
|[hash_compare Class](../standard-library/hash-compare-class.md)|Describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default `Traits` parameter object to order and hash the elements they contain.|
|[hash_set Class](../standard-library/hash-set-class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|
|[hash_multiset Class](../standard-library/hash-multiset-class.md)|Used for the storage and fast retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
