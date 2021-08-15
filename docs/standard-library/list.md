---
description: "Learn more about: &lt;list&gt;"
title: "&lt;list&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<list>"]
helpviewer_keywords: ["list header"]
ms.assetid: 2345823b-5612-44d8-95d3-aa96ed076d17
---
# &lt;list&gt;

Defines the container class template list and several supporting templates.

## Syntax

```cpp
#include <list>
```

> [!NOTE]
> The \<list> library also uses the `#include <initializer_list>` statement.

## Members

### Operators

|Name|Description|
|-|-|
|[operator!=](../standard-library/list-operators.md#op_neq)|Tests if the list object on the left side of the operator is not equal to the list object on the right side.|
|[operator<](../standard-library/list-operators.md#op_lt)|Tests if the list object on the left side of the operator is less than the list object on the right side.|
|[operator\<=](../standard-library/list-operators.md#op_gt_eq)|Tests if the list object on the left side of the operator is less than or equal to the list object on the right side.|
|[operator==](../standard-library/list-operators.md#op_eq_eq)|Tests if the list object on the left side of the operator is equal to the list object on the right side.|
|[operator>](../standard-library/list-operators.md#op_gt)|Tests if the list object on the left side of the operator is greater than the list object on the right side.|
|[operator>=](../standard-library/list-operators.md#op_gt_eq)|Tests if the list object on the left side of the operator is greater than or equal to the list object on the right side.|

### Functions

|Name|Description|
|-|-|
|[swap](../standard-library/list-functions.md#swap)|Exchanges the elements of two lists.|

### Classes

|Name|Description|
|-|-|
|[list Class](../standard-library/list-class.md)|A class template of sequence containers that maintain their elements in a linear arrangement and allow efficient insertions and deletions at any location within the sequence.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
