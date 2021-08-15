---
description: "Learn more about: &lt;set&gt;"
title: "&lt;set&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<set>"]
helpviewer_keywords: ["set header"]
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
---
# &lt;set&gt;

Defines the container class templates set and multiset and their supporting templates.

## Requirements

**Header:** \<set>

**Namespace:** std

> [!NOTE]
> The \<set> library also uses the `#include <initializer_list>` statement.

## Members

### Operators

|Set version|Multiset version|Description|
|-|-|-|
|[operator!= (set)](../standard-library/set-operators.md#op_neq)|[operator!= (multiset)](../standard-library/set-operators.md#op_neq)|Tests if the set or multiset object on the left side of the operator is not equal to the set or multiset object on the right side.|
|[operator< (set)](../standard-library/set-operators.md#op_lt)|[operator< (multiset)](../standard-library/set-operators.md#op_lt_multiset)|Tests if the set or multiset object on the left side of the operator is less than the set or multiset object on the right side.|
|[operator<= (set)](../standard-library/set-operators.md#op_lt_eq)|[operator\<= (multiset)](../standard-library/set-operators.md#op_lt_eq_multiset)|Tests if the set or multiset object on the left side of the operator is less than or equal to the set or multiset object on the right side.|
|[operator== (set)](../standard-library/set-operators.md#op_eq_eq)|[operator== (multiset)](../standard-library/set-operators.md#op_eq_eq_multiset)|Tests if the set or multiset object on the left side of the operator is equal to the set or multiset object on the right side.|
|[operator> (set)](../standard-library/set-operators.md#op_gt)|[operator> (multiset)](../standard-library/set-operators.md#op_gt_multiset)|Tests if the set or multiset object on the left side of the operator is greater than the set or multiset object on the right side.|
|[operator>= (set)](../standard-library/set-operators.md#op_gt_eq)|[operator>= (multiset)](../standard-library/set-operators.md#op_gt_eq_multiset)|Tests if the set or multiset object on the left side of the operator is greater than or equal to the set or multiset object on the right side.|

### Specialized Template Functions

|Set version|Multiset version|Description|
|-|-|-|
|[swap](../standard-library/set-functions.md#swap)|[swap (multiset)](../standard-library/set-functions.md#swap_multiset)|Exchanges the elements of two sets or multisets.|

### Classes

|Name|Description|
|-|-|
|[set Class](../standard-library/set-class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained are unique and serve as the key values according to which the data is automatically ordered.|
|[multiset Class](../standard-library/multiset-class.md)|Used for the storage and retrieval of data from a collection in which the values of the elements contained need not be unique and in which they serve as the key values according to which the data is automatically ordered.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
