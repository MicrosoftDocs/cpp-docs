---
description: "Learn more about: hash_compare Class"
title: "hash_compare Class"
ms.date: "11/04/2016"
f1_keywords: ["hash_set/stdext::hash_compare"]
helpviewer_keywords: ["hash_compare class"]
ms.assetid: d502bb59-de57-4585-beb9-00e3a998c0af
---
# hash_compare Class

The class template describes an object that can be used by any of the hash associative containers — hash_map, hash_multimap, hash_set, or hash_multiset — as a default **Traits** parameter object to order and hash the elements they contain.

## Syntax

class hash_compare
   {
   Traits comp;
   public:
   const size_t bucket_size = 4;
   const size_t min_buckets = 8;
   hash_compare();
   hash_compare(Traits pred);
   size_t operator()(const Key& key) const;
   bool operator()(
   const Key& key1,
   const Key& key2) const;
   };

## Remarks

Each hash associative container stores a hash traits object of type `Traits` (a template parameter). You can derive a class from a specialization of hash_compare to selectively override certain functions and objects, or you can supply your own version of this class if you meet certain minimum requirements. Specifically, for an object hash_comp of type `hash_compare<Key, Traits>`, the following behavior is required by the above containers:

- For all values `key` of type `Key`, the call **hash_comp**(`key`) serves as a hash function, which yields a distribution of values of type `size_t`. The function supplied by hash_compare returns `key`.

- For any value `key1` of type `Key` that precedes `key2` in the sequence and has the same hash value (value returned by the hash function), **hash_comp**(`key2`, `key1`) is false. The function must impose a total ordering on values of type `Key`. The function supplied by hash_compare returns *comp*(`key2`, `key1`) `,` where *comp* is a stored object of type `Traits` that you can specify when you construct the object hash_comp. For the default `Traits` parameter type `less<Key>`, sort keys never decrease in value.

- The integer constant `bucket_size` specifies the mean number of elements per "bucket" (hash-table entry) that the container should try not to exceed. It must be greater than zero. The value supplied by hash_compare is 4.

- The integer constant `min_buckets` specifies the minimum number of buckets to maintain in the hash table. It must be a power of two and greater than zero. The value supplied by hash_compare is 8.

## Example

See examples for [hash_map::hash_map](../standard-library/hash-map-class.md#hash_map), [hash_multimap::hash_multimap](../standard-library/hash-multimap-class.md#hash_multimap), [hash_set::hash_set](../standard-library/hash-set-class.md#hash_set), and [hash_multiset::hash_multiset](../standard-library/hash-multiset-class.md#hash_multiset), for examples of how to declare and use hash_compare.

## Requirements

**Header:** \<hash_map>

**Namespace:** stdext

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
