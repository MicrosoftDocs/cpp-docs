---
description: "Learn more about: &lt;queue&gt;"
title: "&lt;queue&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<queue>"]
helpviewer_keywords: ["queue header"]
ms.assetid: 24fcf350-eb0e-48cf-9fef-978be1aeda1f
---
# &lt;queue&gt;

Defines the class templates priority_queue and queue and several supporting templates.

## Requirements

**Header:** \<queue>

**Namespace:** std

> [!NOTE]
> The \<queue> library also uses the `#include <initializer_list>` statement.

## Members

### Operators

|Name|Description|
|-|-|
|[operator!=](../standard-library/queue-operators.md#op_neq)|Tests if the queue object on the left side of the operator is not equal to the queue object on the right side.|
|[operator<](../standard-library/queue-operators.md#op_lt)|Tests if the queue object on the left side of the operator is less than the queue object on the right side.|
|[operator\<=](../standard-library/queue-operators.md#op_gt_eq)|Tests if the queue object on the left side of the operator is less than or equal to the queue object on the right side.|
|[operator==](../standard-library/queue-operators.md#op_eq_eq)|Tests if the queue object on the left side of the operator is equal to the queue object on the right side.|
|[operator>](../standard-library/queue-operators.md#op_gt)|Tests if the queue object on the left side of the operator is greater than the queue object on the right side.|
|[operator>=](../standard-library/queue-operators.md#op_gt_eq)|Tests if the queue object on the left side of the operator is greater than or equal to the queue object on the right side.|

### Classes

|Name|Description|
|-|-|
|[queue Class](../standard-library/queue-class.md)|A template container adaptor class that provides a restriction of functionality limiting access to the front and back elements of some underlying container type.|
|[priority_queue Class](../standard-library/priority-queue-class.md)|A template container adaptor class that provides a restriction of functionality limiting access to the top element of some underlying container type, which is always the largest.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
