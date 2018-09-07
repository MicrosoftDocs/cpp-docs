---
title: "&lt;map&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<map>"]
dev_langs: ["C++"]
helpviewer_keywords: ["map header"]
ms.assetid: bbf76680-7362-456e-88fa-ecda93561b6a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;map&gt;

Defines the container template classes map and multimap and their supporting templates.

## Syntax

```cpp
#include <map>

```

## Members

### Operators

|Map version|Multimap version|Description|
|-----------------|----------------------|-----------------|
|[operator!= (map)](../standard-library/map-operators.md#op_neq)|[operator!= (multimap)](../standard-library/map-operators.md#op_neq)|Tests if the map or multimap object on the left side of the operator is not equal to the map or multimap object on the right side.|
|[operator< (map)](../standard-library/map-operators.md#op_eq_eq)|[operator< (multimap)](../standard-library/map-operators.md#op_eq_eq)|Tests if the map or multimap object on the left side of the operator is less than the map or multimap object on the right side.|
|[operator<= (map)](../standard-library/map-operators.md#op_lt)|[operator\<= (multimap)](../standard-library/map-operators.md#op_lt)|Tests if the map or multimap object on the left side of the operator is less than or equal to the map or multimap object on the right side.|
|[operator== (map)](../standard-library/map-operators.md#op_eq_eq)|[operator== (multimap)](../standard-library/map-operators.md#op_eq_eq_multimap)|Tests if the map or multimap object on the left side of the operator is equal to the map or multimap object on the right side.|
|[operator> (map)](../standard-library/map-operators.md#op_gt)|[operator> (multimap)](../standard-library/map-operators.md#op_gt_multimap)|Tests if the map or multimap object on the left side of the operator is greater than the map or multimap object on the right side.|
|[operator>= (map)](../standard-library/map-operators.md#op_gt_eq)|[operator>= (multimap)](../standard-library/map-operators.md#op_gt_eq_multimap)|Tests if the map or multimap object on the left side of the operator is greater than or equal to the map or multimap object on the right side.|

### Specialized Template Functions

|Map version|Multimap version|Description|
|-----------------|----------------------|-----------------|
|[swap (map)](../standard-library/map-functions.md#swap)|[swap (multimap)](../standard-library/map-functions.md#swap_multimap)|Exchanges the elements of two maps or multimaps.|

### Classes

|Class|Description|
|-|-|
|[value_compare Class](../standard-library/value-compare-class-map.md)|Provides a function object that can compare the elements of a map by comparing the values of their keys to determine their relative order in the map.|
|[map Class](../standard-library/map-class.md)|Used for the storage and retrieval of data from a collection in which the each of the elements has a unique key with which the data is automatically ordered.|
|[multimap Class](../standard-library/multimap-class.md)|Used for the storage and retrieval of data from a collection in which the each of the elements has a key with which the data is automatically ordered and the keys do not need to have unique values.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
